#include <tree_sitter/parser.h>
#include <wctype.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

enum TokenType {
  RAZOR_CODE_BLOCK,
  RAZOR_DIRECTIVE,
  RAZOR_EXPRESSION,
  RAZOR_EXPRESSION_CONTENT,  // New type for inner expression content
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

// Helper to scan an identifier
static bool scan_identifier(TSLexer *lexer, char *buffer, int max_len) {
  int pos = 0;
  
  // First character must be alpha or underscore
  if (!(iswalpha(lexer->lookahead) || lexer->lookahead == '_')) {
    return false;
  }
  
  // Collect identifier into buffer
  while ((iswalpha(lexer->lookahead) || isdigit(lexer->lookahead) || 
          lexer->lookahead == '_') && pos < max_len - 1) {
    buffer[pos++] = (char)lexer->lookahead;
    lexer->advance(lexer, false);
  }
  
  buffer[pos] = '\0';
  return pos > 0;
}

bool tree_sitter_razor_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  skip_whitespace(lexer);

  if (lexer->lookahead == '@') {
    lexer->advance(lexer, false);

    // Look ahead for code block: @code { ... } or @functions { ... }
    char identifier[32] = {0};
    if (scan_identifier(lexer, identifier, sizeof(identifier))) {
      // Check for code block: @code { ... } or @functions { ... }
      if (strcmp(identifier, "code") == 0 || 
          strcmp(identifier, "functions") == 0 ||
          strcmp(identifier, "section") == 0 || 
          strcmp(identifier, "helper") == 0) {
        
        // Skip whitespace and newlines
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || 
               lexer->lookahead == '\r' || lexer->lookahead == '\n') {
          lexer->advance(lexer, false);
        }
        
        if (lexer->lookahead == '{') {
          // Mark starting position
          lexer->mark_end(lexer);
          
          // Consume balanced braces (including nested)
          skip_balanced(lexer, '{', '}');
          
          lexer->result_symbol = RAZOR_CODE_BLOCK;
          return true;
        }
      }

      // Check for known directives
      const char *directives[] = {
        "page", "using", "inherits", "layout", "functions", 
        "section", "inject", "model", "implements", "addTagHelper", 
        "removeTagHelper", "tagHelperPrefix", "namespace", NULL
      };
      
      bool is_directive = false;
      for (int i = 0; directives[i]; i++) {
        if (strcmp(identifier, directives[i]) == 0) {
          is_directive = true;
          break;
        }
      }
      
      if (is_directive && valid_symbols[RAZOR_DIRECTIVE]) {
        // Optionally consume argument(s) until newline, <, or {
        while (lexer->lookahead != 0 && 
               lexer->lookahead != '\n' && 
               lexer->lookahead != '<' && 
               lexer->lookahead != '{') {
          lexer->advance(lexer, false);
        }
        
        lexer->result_symbol = RAZOR_DIRECTIVE;
        return true;
      }

      // Handle expressions with identifiers
      if (valid_symbols[RAZOR_EXPRESSION]) {
        lexer->result_symbol = RAZOR_EXPRESSION;
        return true;
      }
    }

    // Handle @(...) expressions
    if (lexer->lookahead == '(') {
      // Mark the start of the expression
      lexer->mark_end(lexer);
      
      // Consume the opening paren and capture the balanced expression
      skip_balanced(lexer, '(', ')');
      
      lexer->result_symbol = RAZOR_EXPRESSION;
      return true;
    }
    
    // Handle @{...} expressions (implicit expressions)
    if (lexer->lookahead == '{') {
      // Mark the start of the expression
      lexer->mark_end(lexer);
      
      // Consume the opening brace and capture the balanced expression
      skip_balanced(lexer, '{', '}');
      
      lexer->result_symbol = RAZOR_EXPRESSION;
      return true;
    }

    // Handle @if, @foreach, etc. control flow expressions
    if (valid_symbols[RAZOR_EXPRESSION]) {
      lexer->result_symbol = RAZOR_EXPRESSION;
      return true;
    }
  }
  
  return false;
}