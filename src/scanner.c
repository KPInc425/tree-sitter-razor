#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdbool.h>

enum TokenType {
  CSHARP_CODE_CONTENT,
  RAZOR_ATTRIBUTE_VALUE_CONTENT_DOUBLE,
  RAZOR_ATTRIBUTE_VALUE_CONTENT_SINGLE,
};

void *tree_sitter_razor_external_scanner_create() { return NULL; }
void tree_sitter_razor_external_scanner_destroy(void *p) {}
void tree_sitter_razor_external_scanner_reset(void *p) {}
unsigned tree_sitter_razor_external_scanner_serialize(void *p, char *b) { return 0; }
void tree_sitter_razor_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_razor_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  // Handle @code block content: capture everything up to the matching closing brace,
  // but do not consume the closing brace (leave it for the grammar).
  if (valid_symbols[CSHARP_CODE_CONTENT]) {
    int brace_depth = 1;
    lexer->mark_end(lexer);

    while (lexer->lookahead != 0) {
      if (lexer->lookahead == '{') {
        brace_depth++;
      } else if (lexer->lookahead == '}') {
        brace_depth--;
        if (brace_depth == 0) {
          // Do not consume the closing brace; leave it to the grammar.
          break;
        }
      }
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    }

    lexer->result_symbol = CSHARP_CODE_CONTENT;
    return true;
  }

  // Handle double-quoted attribute value content: stop at an unescaped double-quote
  if (valid_symbols[RAZOR_ATTRIBUTE_VALUE_CONTENT_DOUBLE]) {
    // Lexer should be positioned just after the opening double-quote.
    bool in_escape = false;
    lexer->mark_end(lexer); // mark empty content as valid
    while (lexer->lookahead != 0) {
      if (!in_escape && lexer->lookahead == '"') {
        // Stop before the closing double-quote (do not consume it)
        break;
      }
      if (lexer->lookahead == '\\') {
        // Toggle escape; consecutive backslashes alternate escape state
        in_escape = !in_escape;
      } else {
        in_escape = false;
      }
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    }

    lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_CONTENT_DOUBLE;
    return true;
  }

  // Handle single-quoted attribute value content: stop at an unescaped single-quote
  if (valid_symbols[RAZOR_ATTRIBUTE_VALUE_CONTENT_SINGLE]) {
    // Lexer should be positioned just after the opening single-quote.
    bool in_escape = false;
    lexer->mark_end(lexer); // mark empty content as valid
    while (lexer->lookahead != 0) {
      if (!in_escape && lexer->lookahead == '\'') {
        // Stop before the closing single-quote (do not consume it)
        break;
      }
      if (lexer->lookahead == '\\') {
        in_escape = !in_escape;
      } else {
        in_escape = false;
      }
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    }

    lexer->result_symbol = RAZOR_ATTRIBUTE_VALUE_CONTENT_SINGLE;
    return true;
  }

  return false;
}