/*
 * tree-sitter external scanner for Razor
 *
 * Responsibilities:
 *  - Emit `csharp_code_content` for @code / @functions blocks (inner C# content only).
 *  - Emit attribute internals as a sequence of externals:
 *      - razor_attribute_value_text_double
 *      - razor_attribute_value_expr_double
 *      - razor_attribute_value_text_single
 *      - razor_attribute_value_expr_single
 *
 * The scanner tries to split attribute inner content into text and expression fragments.
 * Expression fragments start with `@` and the emitted expr token does NOT include the leading `@`.
 *
 * Notes:
 *  - The parser will request whichever externals it can accept via `valid_symbols`.
 *  - The scanner returns `true` when it sets `lexer->result_symbol` and positions the lexer
 *    such that the token spans the content that was consumed/marked.
 */

#include <tree_sitter/parser.h>
#include <stdlib.h>
#include <stdbool.h>

enum TokenType {
  CSHARP_CODE_CONTENT = 0,
  RAZOR_ATTRIBUTE_VALUE_TEXT_DOUBLE,
  RAZOR_ATTRIBUTE_VALUE_EXPR_DOUBLE,
  RAZOR_ATTRIBUTE_VALUE_TEXT_SINGLE,
  RAZOR_ATTRIBUTE_VALUE_EXPR_SINGLE,
};

#include <stdio.h>
void *tree_sitter_razor_external_scanner_create() { return NULL; }
void tree_sitter_razor_external_scanner_destroy(void *p) {}
void tree_sitter_razor_external_scanner_reset(void *p) {}
unsigned tree_sitter_razor_external_scanner_serialize(void *p, char *b) { return 0; }
void tree_sitter_razor_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static void advance_mark(TSLexer *lexer) {
  advance(lexer);
  lexer->mark_end(lexer);
}

/* Skip over a quoted string, handling escapes. Leaves lexer positioned after the closing quote. */
static void skip_string(TSLexer *lexer, int delim) {
  /* assume current lookahead is the opening quote; consume it */
  if (lexer->lookahead == delim) advance(lexer);

  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '\\') {
      /* consume backslash and escaped char */
      advance(lexer);
      if (lexer->lookahead != 0) advance(lexer);
      continue;
    }
    if (lexer->lookahead == delim) {
      /* consume closing quote and return */
      advance(lexer);
      return;
    }
    advance(lexer);
  }
}

/* Capture a balanced region for parentheses or braces.
 * start_char is the opening char that has just been consumed when this is called (or not).
 * This function will consume characters until the matching closing char is consumed as well.
 * It handles nested occurrences and skips quoted strings inside.
 */
static void capture_balanced(TSLexer *lexer, int open_char, int close_char) {
  int depth = 0;
  if (lexer->lookahead == open_char) {
    /* consume opening char and start at depth 1 */
    advance(lexer);
    depth = 1;
  }

  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '\\') {
      /* escape in strings; just consume backslash and next char */
      advance(lexer);
      if (lexer->lookahead != 0) advance(lexer);
      continue;
    }
    if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
      /* skip quoted strings inside the balanced region */
      int delim = lexer->lookahead;
      skip_string(lexer, delim);
      continue;
    }
    if (lexer->lookahead == open_char) {
      depth++;
      advance(lexer);
      continue;
    }
    if (lexer->lookahead == close_char) {
      depth--;
      advance(lexer);
      if (depth == 0) break;
      continue;
    }
    advance(lexer);
  }
}

/* Check whether a character is valid identifier char (letters, digits, underscore) */
static bool is_ident_char(int c) {
  if (c == 0) return false;
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return true;
  if ((c >= '0' && c <= '9') || c == '_' ) return true;
  return false;
}

bool tree_sitter_razor_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  /* 1) csharp code content: @code { ... } or @functions { ... } */
  if (valid_symbols[CSHARP_CODE_CONTENT]) {
    int brace_depth = 1;
    lexer->mark_end(lexer); /* allow empty content */
    while (lexer->lookahead != 0) {
      if (lexer->lookahead == '{') {
        brace_depth++;
      } else if (lexer->lookahead == '}') {
        brace_depth--;
        if (brace_depth == 0) {
          /* do not consume the closing brace; leave it for the grammar */
          break;
        }
      } else if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
        /* skip strings inside C# safely */
        int delim = lexer->lookahead;
        advance(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '\\') {
            advance(lexer);
            if (lexer->lookahead != 0) advance(lexer);
            continue;
          }
          if (lexer->lookahead == delim) {
            advance(lexer);
            break;
          }
          advance(lexer);
        }
        lexer->mark_end(lexer);
        continue;
      }
      advance(lexer);
      lexer->mark_end(lexer);
    }

    lexer->result_symbol = CSHARP_CODE_CONTENT;
    return true;
  }

  /* 2) Attribute internals splitting:
   * The parser will accept either text or expr externals depending on position.
   * We check whether double-quoted externals are acceptable first; if not, fall back to single-quoted.
   *
   * For double-quoted contexts the parser will ask for either:
   *   RAZOR_ATTRIBUTE_VALUE_TEXT_DOUBLE OR RAZOR_ATTRIBUTE_VALUE_EXPR_DOUBLE
   * For single-quoted likewise with SINGLE symbols.
   *
   * Behavior:
   *  - If current char is '@' and expr symbol is allowed -> produce an expr token.
   *    We consume the '@' (not included in the token content) and then:
   *      - If next char is '(' => consume balanced parentheses including nested and include them in token.
   *      - If next char is '{' => consume balanced braces (rare) as part of token.
   *      - Otherwise consume identifier/dotted chain and any following balanced parentheses,
   *        or as fallback consume until next '@' or closing quote.
   *  - Otherwise produce a text token: consume until next '@' or closing quote, respecting escapes.
   */

  bool want_text_double = valid_symbols[RAZOR_ATTRIBUTE_VALUE_TEXT_DOUBLE];
  bool want_expr_double = valid_symbols[RAZOR_ATTRIBUTE_VALUE_EXPR_DOUBLE];
  bool want_text_single = valid_symbols[RAZOR_ATTRIBUTE_VALUE_TEXT_SINGLE];
  bool want_expr_single = valid_symbols[RAZOR_ATTRIBUTE_VALUE_EXPR_SINGLE];

  /* Prefer handling double-quoted context first if parser accepts those externals. */
  if (want_text_double || want_expr_double) {
    // Only scan up to the next unescaped double quote or '@'
    int start_col = lexer->get_column(lexer);
    if (lexer->lookahead == '@' && want_expr_double) {
      // produce expr token for double-quoted attribute
      advance(lexer); // consume '@'
      lexer->mark_end(lexer);
      int expr_start_col = lexer->get_column(lexer);

      if (lexer->lookahead == '(') {
        int before = lexer->get_column(lexer);
        capture_balanced(lexer, '(', ')');
        int after = lexer->get_column(lexer);
        fprintf(stderr, "[scanner] double expr: @(...) from col %d to %d\n", expr_start_col, after);
        lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_EXPR_DOUBLE;
        return true;
      }
      if (lexer->lookahead == '{') {
        int before = lexer->get_column(lexer);
        capture_balanced(lexer, '{', '}');
        int after = lexer->get_column(lexer);
        fprintf(stderr, "[scanner] double expr: @{...} from col %d to %d\n", expr_start_col, after);
        lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_EXPR_DOUBLE;
        return true;
      }

      bool saw_any = false;
      int ident_start = lexer->get_column(lexer);
      while (lexer->lookahead != 0) {
        if (is_ident_char(lexer->lookahead) || lexer->lookahead == '.') {
          saw_any = true;
          advance_mark(lexer);
          continue;
        }
        if (lexer->lookahead == '(') {
          capture_balanced(lexer, '(', ')');
          lexer->mark_end(lexer);
          continue;
        }
        // stop at boundary (quote or next '@')
        if (lexer->lookahead == '"' || lexer->lookahead == '@') break;
        advance_mark(lexer);
      }
      int ident_end = lexer->get_column(lexer);
      if (saw_any) {
        fprintf(stderr, "[scanner] double expr: @ident from col %d to %d\n", ident_start, ident_end);
      }

      lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_EXPR_DOUBLE;
      return true;
    } else if (want_text_double) {
      // Text fragment: capture until next '@' or closing double quote, respecting escapes
      bool in_escape = false;
      lexer->mark_end(lexer);
      int text_start = lexer->get_column(lexer);
      while (lexer->lookahead != 0) {
        if (!in_escape && lexer->lookahead == '"') break;
        if (!in_escape && lexer->lookahead == '@') break;
        if (lexer->lookahead == '\\' && !in_escape) {
          in_escape = true;
          advance(lexer);
        } else {
          in_escape = false;
          advance(lexer);
        }
        lexer->mark_end(lexer);
      }
      int text_end = lexer->get_column(lexer);
      fprintf(stderr, "[scanner] double text: from col %d to %d, next char: %c\n", text_start, text_end, lexer->lookahead);
      lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_TEXT_DOUBLE;
      return true;
    }
  }

  /* Single-quoted attribute internals */
  if (want_text_single || want_expr_single) {
    int start_col = lexer->get_column(lexer);
    if (lexer->lookahead == '@' && want_expr_single) {
      advance(lexer); lexer->mark_end(lexer);
      int expr_start_col = lexer->get_column(lexer);

      if (lexer->lookahead == '(') {
        capture_balanced(lexer, '(', ')');
        int after = lexer->get_column(lexer);
        fprintf(stderr, "[scanner] single expr: @(...) from col %d to %d\n", expr_start_col, after);
        lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_EXPR_SINGLE;
        return true;
      }
      if (lexer->lookahead == '{') {
        capture_balanced(lexer, '{', '}');
        int after = lexer->get_column(lexer);
        fprintf(stderr, "[scanner] single expr: @{...} from col %d to %d\n", expr_start_col, after);
        lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_EXPR_SINGLE;
        return true;
      }

      bool saw_any = false;
      int ident_start = lexer->get_column(lexer);
      while (lexer->lookahead != 0) {
        if (is_ident_char(lexer->lookahead) || lexer->lookahead == '.') {
          saw_any = true;
          advance_mark(lexer);
          continue;
        }
        if (lexer->lookahead == '(') {
          capture_balanced(lexer, '(', ')');
          lexer->mark_end(lexer);
          continue;
        }
        if (lexer->lookahead == '\'' || lexer->lookahead == '@') break;
        advance_mark(lexer);
      }
      int ident_end = lexer->get_column(lexer);
      if (saw_any) {
        fprintf(stderr, "[scanner] single expr: @ident from col %d to %d\n", ident_start, ident_end);
      }

      lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_EXPR_SINGLE;
      return true;
    } else if (want_text_single) {
      lexer->mark_end(lexer);
      bool in_escape = false;
      int text_start = lexer->get_column(lexer);
      while (lexer->lookahead != 0) {
        if (!in_escape && lexer->lookahead == '\'') {
          break;
        }
        if (!in_escape && lexer->lookahead == '@') {
          break;
        }
        if (lexer->lookahead == '\\' && !in_escape) {
          in_escape = true;
          advance(lexer);
          if (lexer->lookahead != 0) {
            advance(lexer);
            lexer->mark_end(lexer);
          }
          in_escape = false;
          continue;
        }
        in_escape = false;
        advance_mark(lexer);
      }
      int text_end = lexer->get_column(lexer);
      fprintf(stderr, "[scanner] single text: from col %d to %d, next char: %c\n", text_start, text_end, lexer->lookahead);
      lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_TEXT_SINGLE;
      return true;
    }
  }

  return false;
}