#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdbool.h>

enum TokenType {
  CSHARP_CODE_CONTENT,
};

void *tree_sitter_razor_external_scanner_create() { return NULL; }
void tree_sitter_razor_external_scanner_destroy(void *p) {}
void tree_sitter_razor_external_scanner_reset(void *p) {}
unsigned tree_sitter_razor_external_scanner_serialize(void *p, char *b) { return 0; }
void tree_sitter_razor_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_razor_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  if (!valid_symbols[CSHARP_CODE_CONTENT]) return false;

  int brace_depth = 1;
  lexer->mark_end(lexer);

  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '{') {
      brace_depth++;
    } else if (lexer->lookahead == '}') {
      brace_depth--;
      if (brace_depth == 0) {
        // Don't consume the closing brace, leave it for the grammar
        break;
      }
    }
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  }

  lexer->result_symbol = CSHARP_CODE_CONTENT;
  return true;
}