#include <tree_sitter/parser.h>
#include <wctype.h>
#include <string.h>
#include <stdbool.h>

enum TokenType {
  RAZOR_CODE_BLOCK,
  RAZOR_DIRECTIVE,
  RAZOR_EXPRESSION,
};

void *tree_sitter_razor_external_scanner_create() { return NULL; }
void tree_sitter_razor_external_scanner_destroy(void *p) {}
void tree_sitter_razor_external_scanner_reset(void *p) {}
unsigned tree_sitter_razor_external_scanner_serialize(void *p, char *b) { return 0; }
void tree_sitter_razor_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void skip_whitespace(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, false);
  }
}

static void skip_balanced(TSLexer *lexer, int open, int close) {
  int depth = 1;
  lexer->advance(lexer, false); // consume opening
  while (lexer->lookahead != 0 && depth > 0) {
    if (lexer->lookahead == open) depth++;
    else if (lexer->lookahead == close) depth--;
    lexer->advance(lexer, false);
  }
}

bool tree_sitter_razor_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  skip_whitespace(lexer);

  if (lexer->lookahead == '@') {
    lexer->advance(lexer, false);

    // Look ahead for identifier
    if (iswalpha(lexer->lookahead)) {
      char buf[32] = {0};
      int pos = 0;
      while ((iswalpha(lexer->lookahead) || lexer->lookahead == '_') && pos < 31) {
        buf[pos++] = (char)lexer->lookahead;
        lexer->advance(lexer, false);
      }
      buf[pos] = 0;

      // Check for code block: @code { ... } or @functions { ... }
      // Allow whitespace/newlines between identifier and {
      if (strcmp(buf, "code") == 0 || strcmp(buf, "functions") == 0) {
        // Skip whitespace and newlines
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r' || lexer->lookahead == '\n') {
          lexer->advance(lexer, false);
        }
        if (lexer->lookahead == '{') {
          // Consume balanced braces (including nested)
          skip_balanced(lexer, '{', '}');
          lexer->result_symbol = RAZOR_CODE_BLOCK;
          return true;
        }
      }

      // Only treat as directive if identifier matches a known directive
      const char *directives[] = {"page", "using", "inherits", "layout", "functions", "section", "inject", NULL};
      bool is_directive = false;
      for (int i = 0; directives[i]; i++) {
        if (strcmp(buf, directives[i]) == 0) {
          is_directive = true;
          break;
        }
      }
      if (is_directive && valid_symbols[RAZOR_DIRECTIVE]) {
        // Optionally consume argument(s) until newline, <, or {
        while (lexer->lookahead != 0 && lexer->lookahead != '\n' && lexer->lookahead != '<' && lexer->lookahead != '{') {
          lexer->advance(lexer, false);
        }
        lexer->result_symbol = RAZOR_DIRECTIVE;
        return true;
      }

      // Fallback: treat as expression
      lexer->result_symbol = RAZOR_EXPRESSION;
      return true;
    }

    // Handle @(...) expressions
    if (lexer->lookahead == '(') {
      skip_balanced(lexer, '(', ')');
      lexer->result_symbol = RAZOR_EXPRESSION;
      return true;
    }
  }
  return false;
}