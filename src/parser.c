#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 1
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  aux_sym_directive_argument_token1 = 2,
  anon_sym_code = 3,
  anon_sym_functions = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_DOT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COMMA = 10,
  sym_expression_argument = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LT_SLASH = 14,
  anon_sym_SLASH_GT = 15,
  sym_tag_name = 16,
  anon_sym_EQ = 17,
  sym_attribute_name = 18,
  anon_sym_DQUOTE = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_html_text_token1 = 21,
  anon_sym_AT_STAR = 22,
  aux_sym_razor_comment_token1 = 23,
  anon_sym_STAR_AT = 24,
  anon_sym_LT_BANG_DASH_DASH = 25,
  aux_sym_html_comment_token1 = 26,
  anon_sym_DASH_DASH_GT = 27,
  sym_identifier = 28,
  aux_sym_razor_error_token1 = 29,
  sym_csharp_code_content = 30,
  sym_razor_attribute_value_content = 31,
  sym_source_file = 32,
  sym_razor_directive = 33,
  sym_directive_argument = 34,
  sym_razor_code_block = 35,
  sym_razor_expression = 36,
  sym_expression_argument_list = 37,
  sym_element = 38,
  sym_start_tag = 39,
  sym_end_tag = 40,
  sym_self_closing_tag = 41,
  sym_attribute = 42,
  sym_razor_attribute = 43,
  sym_attribute_value = 44,
  sym_html_text = 45,
  sym_razor_comment = 46,
  sym_html_comment = 47,
  sym_razor_error = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_razor_directive_repeat1 = 50,
  aux_sym_expression_argument_list_repeat1 = 51,
  aux_sym_element_repeat1 = 52,
  aux_sym_start_tag_repeat1 = 53,
  aux_sym_razor_comment_repeat1 = 54,
  aux_sym_html_comment_repeat1 = 55,
  alias_sym_directive_name = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [aux_sym_directive_argument_token1] = "directive_argument_token1",
  [anon_sym_code] = "code",
  [anon_sym_functions] = "functions",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_expression_argument] = "expression_argument",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [sym_tag_name] = "tag_name",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_html_text_token1] = "html_text_token1",
  [anon_sym_AT_STAR] = "@*",
  [aux_sym_razor_comment_token1] = "razor_comment_token1",
  [anon_sym_STAR_AT] = "*@",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym_html_comment_token1] = "html_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_identifier] = "identifier",
  [aux_sym_razor_error_token1] = "razor_error_token1",
  [sym_csharp_code_content] = "csharp_code_content",
  [sym_razor_attribute_value_content] = "razor_attribute_value_content",
  [sym_source_file] = "source_file",
  [sym_razor_directive] = "razor_directive",
  [sym_directive_argument] = "directive_argument",
  [sym_razor_code_block] = "razor_code_block",
  [sym_razor_expression] = "razor_expression",
  [sym_expression_argument_list] = "expression_argument_list",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym_razor_attribute] = "razor_attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_html_text] = "html_text",
  [sym_razor_comment] = "razor_comment",
  [sym_html_comment] = "html_comment",
  [sym_razor_error] = "razor_error",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_razor_directive_repeat1] = "razor_directive_repeat1",
  [aux_sym_expression_argument_list_repeat1] = "expression_argument_list_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_razor_comment_repeat1] = "razor_comment_repeat1",
  [aux_sym_html_comment_repeat1] = "html_comment_repeat1",
  [alias_sym_directive_name] = "directive_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_directive_argument_token1] = aux_sym_directive_argument_token1,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_expression_argument] = sym_expression_argument,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_html_text_token1] = aux_sym_html_text_token1,
  [anon_sym_AT_STAR] = anon_sym_AT_STAR,
  [aux_sym_razor_comment_token1] = aux_sym_razor_comment_token1,
  [anon_sym_STAR_AT] = anon_sym_STAR_AT,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym_html_comment_token1] = aux_sym_html_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_identifier] = sym_identifier,
  [aux_sym_razor_error_token1] = aux_sym_razor_error_token1,
  [sym_csharp_code_content] = sym_csharp_code_content,
  [sym_razor_attribute_value_content] = sym_razor_attribute_value_content,
  [sym_source_file] = sym_source_file,
  [sym_razor_directive] = sym_razor_directive,
  [sym_directive_argument] = sym_directive_argument,
  [sym_razor_code_block] = sym_razor_code_block,
  [sym_razor_expression] = sym_razor_expression,
  [sym_expression_argument_list] = sym_expression_argument_list,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_attribute] = sym_attribute,
  [sym_razor_attribute] = sym_razor_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_html_text] = sym_html_text,
  [sym_razor_comment] = sym_razor_comment,
  [sym_html_comment] = sym_html_comment,
  [sym_razor_error] = sym_razor_error,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_razor_directive_repeat1] = aux_sym_razor_directive_repeat1,
  [aux_sym_expression_argument_list_repeat1] = aux_sym_expression_argument_list_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_razor_comment_repeat1] = aux_sym_razor_comment_repeat1,
  [aux_sym_html_comment_repeat1] = aux_sym_html_comment_repeat1,
  [alias_sym_directive_name] = alias_sym_directive_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_expression_argument] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_html_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_razor_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_html_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_razor_error_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_csharp_code_content] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_attribute_value_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_html_text] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_html_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_error] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_razor_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_razor_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_directive_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_directive_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 25,
  [42] = 23,
  [43] = 27,
  [44] = 29,
  [45] = 30,
  [46] = 32,
  [47] = 33,
  [48] = 35,
  [49] = 49,
  [50] = 40,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 70,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 79,
  [87] = 80,
  [88] = 83,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 39,
        '\'', 39,
        '(', 39,
        ')', 39,
        ',', 39,
        '.', 39,
        '<', 52,
        '=', 39,
        '>', 54,
        '@', 26,
        'c', 33,
        'f', 37,
        '{', 42,
        '}', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(12);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 60,
        '\'', 61,
        ')', 46,
        ',', 47,
        '/', 20,
        '<', 1,
        '=', 58,
        '>', 54,
        '@', 26,
        '}', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '@') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '@') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 21:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 39,
        '\'', 39,
        '(', 39,
        ')', 39,
        ',', 39,
        '.', 39,
        '<', 52,
        '=', 39,
        '>', 54,
        '@', 26,
        'c', 33,
        'f', 37,
        '{', 42,
        '}', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '*') ADVANCE(68);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'c') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'd') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'o') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'o') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 's') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 't') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead == 'u') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_code);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(12);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_html_text_token1);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_html_text_token1);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_html_text_token1);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_html_text_token1);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_html_text_token1);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_html_text_token1);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '@') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR_AT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_razor_error_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_razor_error_token1);
      if (lookahead == '!') ADVANCE(12);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_razor_error_token1);
      if (lookahead == '*') ADVANCE(68);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_razor_error_token1);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_razor_error_token1);
      if (lookahead == 'u') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_razor_error_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 2, .external_lex_state = 2},
  [69] = {.lex_state = 2, .external_lex_state = 2},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 18},
  [89] = {(TSStateId)(-1)},
  [90] = {(TSStateId)(-1)},
  [91] = {(TSStateId)(-1)},
  [92] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_razor_comment] = STATE(0),
    [sym_html_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_directive_argument_token1] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_AT_STAR] = ACTIONS(3),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_razor_error_token1] = ACTIONS(1),
    [sym_csharp_code_content] = ACTIONS(1),
    [sym_razor_attribute_value_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_razor_directive] = STATE(24),
    [sym_razor_code_block] = STATE(24),
    [sym_razor_expression] = STATE(24),
    [sym_element] = STATE(24),
    [sym_start_tag] = STATE(4),
    [sym_self_closing_tag] = STATE(25),
    [sym_html_text] = STATE(24),
    [sym_razor_comment] = STATE(1),
    [sym_html_comment] = STATE(1),
    [sym_razor_error] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [aux_sym_html_text_token1] = ACTIONS(13),
    [anon_sym_AT_STAR] = ACTIONS(15),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      aux_sym_html_text_token1,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(4), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(2), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(24), 6,
      sym_razor_directive,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
      sym_html_text,
      sym_razor_error,
  [40] = 10,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(26), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      aux_sym_html_text_token1,
    STATE(4), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_self_closing_tag,
    STATE(3), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
    STATE(24), 6,
      sym_razor_directive,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
      sym_html_text,
      sym_razor_error,
  [78] = 12,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      anon_sym_LT_SLASH,
    ACTIONS(38), 1,
      aux_sym_html_text_token1,
    STATE(5), 1,
      aux_sym_element_repeat1,
    STATE(6), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_end_tag,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(4), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 3,
      sym_razor_expression,
      sym_element,
      sym_html_text,
  [118] = 12,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(36), 1,
      anon_sym_LT_SLASH,
    ACTIONS(38), 1,
      aux_sym_html_text_token1,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      aux_sym_element_repeat1,
    STATE(29), 1,
      sym_end_tag,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(5), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 3,
      sym_razor_expression,
      sym_element,
      sym_html_text,
  [158] = 11,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(38), 1,
      aux_sym_html_text_token1,
    ACTIONS(40), 1,
      anon_sym_LT_SLASH,
    STATE(7), 1,
      aux_sym_element_repeat1,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(42), 1,
      sym_end_tag,
    STATE(6), 3,
      sym_start_tag,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 3,
      sym_razor_expression,
      sym_element,
      sym_html_text,
  [196] = 12,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(38), 1,
      aux_sym_html_text_token1,
    ACTIONS(40), 1,
      anon_sym_LT_SLASH,
    STATE(6), 1,
      sym_start_tag,
    STATE(8), 1,
      aux_sym_element_repeat1,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(44), 1,
      sym_end_tag,
    STATE(7), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 3,
      sym_razor_expression,
      sym_element,
      sym_html_text,
  [236] = 10,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(42), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(48), 1,
      anon_sym_LT_SLASH,
    ACTIONS(50), 1,
      aux_sym_html_text_token1,
    STATE(6), 1,
      sym_start_tag,
    STATE(41), 1,
      sym_self_closing_tag,
    STATE(8), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_element_repeat1,
    STATE(31), 3,
      sym_razor_expression,
      sym_element,
      sym_html_text,
  [271] = 10,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      aux_sym_razor_directive_repeat1,
    STATE(19), 1,
      sym_directive_argument,
    STATE(9), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(56), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [305] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      anon_sym_SLASH_GT,
    ACTIONS(71), 1,
      sym_attribute_name,
    STATE(15), 1,
      aux_sym_start_tag_repeat1,
    STATE(10), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(28), 2,
      sym_attribute,
      sym_razor_attribute,
  [335] = 8,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(59), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_razor_directive_repeat1,
    STATE(19), 1,
      sym_directive_argument,
    STATE(11), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(75), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [363] = 7,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_directive_argument_token1,
    STATE(19), 1,
      sym_directive_argument,
    ACTIONS(79), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
    STATE(12), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_directive_repeat1,
  [389] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      anon_sym_GT,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(84), 1,
      anon_sym_SLASH_GT,
    STATE(16), 1,
      aux_sym_start_tag_repeat1,
    STATE(13), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(28), 2,
      sym_attribute,
      sym_razor_attribute,
  [419] = 7,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(91), 1,
      sym_attribute_name,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(28), 2,
      sym_attribute,
      sym_razor_attribute,
    STATE(14), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_start_tag_repeat1,
  [445] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(94), 1,
      anon_sym_GT,
    ACTIONS(96), 1,
      anon_sym_SLASH_GT,
    STATE(14), 1,
      aux_sym_start_tag_repeat1,
    STATE(15), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(28), 2,
      sym_attribute,
      sym_razor_attribute,
  [475] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(94), 1,
      anon_sym_GT,
    ACTIONS(98), 1,
      anon_sym_SLASH_GT,
    STATE(14), 1,
      aux_sym_start_tag_repeat1,
    STATE(16), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(28), 2,
      sym_attribute,
      sym_razor_attribute,
  [505] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(17), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(100), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [528] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(108), 4,
      anon_sym_AT,
      aux_sym_directive_argument_token1,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [548] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(112), 4,
      anon_sym_AT,
      aux_sym_directive_argument_token1,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [568] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(114), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_EQ,
    STATE(20), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(116), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [590] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(120), 1,
      anon_sym_AT,
    ACTIONS(124), 1,
      anon_sym_EQ,
    STATE(21), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(122), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [612] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      aux_sym_razor_error_token1,
    ACTIONS(126), 2,
      anon_sym_code,
      anon_sym_functions,
    STATE(22), 2,
      sym_razor_comment,
      sym_html_comment,
  [633] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(134), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [652] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(138), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [671] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(142), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [690] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(26), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(144), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [707] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(148), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [726] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(150), 1,
      anon_sym_AT,
    STATE(28), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(152), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [745] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(156), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [764] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(160), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [783] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(31), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(162), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [800] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(166), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [819] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(170), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [838] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(34), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(174), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [857] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(178), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [876] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(180), 1,
      anon_sym_AT,
    STATE(36), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(182), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [895] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(184), 1,
      anon_sym_AT,
    STATE(37), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(186), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [914] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(188), 1,
      anon_sym_AT,
    STATE(38), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(190), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [933] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(192), 1,
      anon_sym_AT,
    STATE(39), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(194), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [952] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(40), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(196), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [969] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(41), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(142), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [986] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(42), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(134), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1003] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(43), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(148), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1020] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(44), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(156), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1037] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(45), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(160), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1054] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(46), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(166), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1071] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(47), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(170), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1088] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(48), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(178), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1105] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(200), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [1124] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(50), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(196), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [1143] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(51), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(204), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1160] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(206), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(209), 1,
      anon_sym_STAR_AT,
    STATE(52), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_comment_repeat1,
  [1178] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym_attribute_value,
    STATE(53), 2,
      sym_razor_comment,
      sym_html_comment,
  [1198] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(54), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_expression_argument_list_repeat1,
  [1216] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(220), 1,
      aux_sym_html_comment_token1,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH_GT,
    STATE(55), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_html_comment_repeat1,
  [1234] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(225), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(227), 1,
      anon_sym_STAR_AT,
    STATE(63), 1,
      aux_sym_razor_comment_repeat1,
    STATE(56), 2,
      sym_razor_comment,
      sym_html_comment,
  [1254] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(57), 2,
      sym_razor_comment,
      sym_html_comment,
  [1274] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(233), 1,
      aux_sym_html_comment_token1,
    ACTIONS(235), 1,
      anon_sym_DASH_DASH_GT,
    STATE(55), 1,
      aux_sym_html_comment_repeat1,
    STATE(58), 2,
      sym_razor_comment,
      sym_html_comment,
  [1294] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(233), 1,
      aux_sym_html_comment_token1,
    ACTIONS(237), 1,
      anon_sym_DASH_DASH_GT,
    STATE(58), 1,
      aux_sym_html_comment_repeat1,
    STATE(59), 2,
      sym_razor_comment,
      sym_html_comment,
  [1314] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(60), 2,
      sym_razor_comment,
      sym_html_comment,
  [1334] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      sym_expression_argument,
    STATE(78), 1,
      sym_expression_argument_list,
    STATE(61), 2,
      sym_razor_comment,
      sym_html_comment,
  [1354] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_attribute_value,
    STATE(62), 2,
      sym_razor_comment,
      sym_html_comment,
  [1374] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(225), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(245), 1,
      anon_sym_STAR_AT,
    STATE(52), 1,
      aux_sym_razor_comment_repeat1,
    STATE(63), 2,
      sym_razor_comment,
      sym_html_comment,
  [1394] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(243), 1,
      sym_expression_argument,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_expression_argument_list,
    STATE(64), 2,
      sym_razor_comment,
      sym_html_comment,
  [1414] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(215), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_razor_comment,
      sym_html_comment,
  [1429] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(249), 2,
      aux_sym_html_comment_token1,
      anon_sym_DASH_DASH_GT,
    STATE(66), 2,
      sym_razor_comment,
      sym_html_comment,
  [1444] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(251), 2,
      aux_sym_razor_comment_token1,
      anon_sym_STAR_AT,
    STATE(67), 2,
      sym_razor_comment,
      sym_html_comment,
  [1459] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      sym_razor_attribute_value_content,
    STATE(68), 2,
      sym_razor_comment,
      sym_html_comment,
  [1476] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(257), 1,
      sym_razor_attribute_value_content,
    STATE(69), 2,
      sym_razor_comment,
      sym_html_comment,
  [1493] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(70), 2,
      sym_razor_comment,
      sym_html_comment,
  [1507] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(71), 2,
      sym_razor_comment,
      sym_html_comment,
  [1521] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    STATE(72), 2,
      sym_razor_comment,
      sym_html_comment,
  [1535] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(73), 2,
      sym_razor_comment,
      sym_html_comment,
  [1549] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(74), 2,
      sym_razor_comment,
      sym_html_comment,
  [1563] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(267), 1,
      sym_expression_argument,
    STATE(75), 2,
      sym_razor_comment,
      sym_html_comment,
  [1577] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym_razor_comment,
      sym_html_comment,
  [1591] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(77), 2,
      sym_razor_comment,
      sym_html_comment,
  [1605] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(78), 2,
      sym_razor_comment,
      sym_html_comment,
  [1619] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(273), 1,
      anon_sym_GT,
    STATE(79), 2,
      sym_razor_comment,
      sym_html_comment,
  [1633] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(275), 1,
      sym_tag_name,
    STATE(80), 2,
      sym_razor_comment,
      sym_html_comment,
  [1647] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(277), 1,
      sym_csharp_code_content,
    STATE(81), 2,
      sym_razor_comment,
      sym_html_comment,
  [1661] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(82), 2,
      sym_razor_comment,
      sym_html_comment,
  [1675] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(281), 1,
      sym_tag_name,
    STATE(83), 2,
      sym_razor_comment,
      sym_html_comment,
  [1689] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(84), 2,
      sym_razor_comment,
      sym_html_comment,
  [1703] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(85), 2,
      sym_razor_comment,
      sym_html_comment,
  [1717] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(285), 1,
      anon_sym_GT,
    STATE(86), 2,
      sym_razor_comment,
      sym_html_comment,
  [1731] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(287), 1,
      sym_tag_name,
    STATE(87), 2,
      sym_razor_comment,
      sym_html_comment,
  [1745] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(289), 1,
      sym_tag_name,
    STATE(88), 2,
      sym_razor_comment,
      sym_html_comment,
  [1759] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
  [1763] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1767] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [1771] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 335,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 389,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 505,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 548,
  [SMALL_STATE(20)] = 568,
  [SMALL_STATE(21)] = 590,
  [SMALL_STATE(22)] = 612,
  [SMALL_STATE(23)] = 633,
  [SMALL_STATE(24)] = 652,
  [SMALL_STATE(25)] = 671,
  [SMALL_STATE(26)] = 690,
  [SMALL_STATE(27)] = 707,
  [SMALL_STATE(28)] = 726,
  [SMALL_STATE(29)] = 745,
  [SMALL_STATE(30)] = 764,
  [SMALL_STATE(31)] = 783,
  [SMALL_STATE(32)] = 800,
  [SMALL_STATE(33)] = 819,
  [SMALL_STATE(34)] = 838,
  [SMALL_STATE(35)] = 857,
  [SMALL_STATE(36)] = 876,
  [SMALL_STATE(37)] = 895,
  [SMALL_STATE(38)] = 914,
  [SMALL_STATE(39)] = 933,
  [SMALL_STATE(40)] = 952,
  [SMALL_STATE(41)] = 969,
  [SMALL_STATE(42)] = 986,
  [SMALL_STATE(43)] = 1003,
  [SMALL_STATE(44)] = 1020,
  [SMALL_STATE(45)] = 1037,
  [SMALL_STATE(46)] = 1054,
  [SMALL_STATE(47)] = 1071,
  [SMALL_STATE(48)] = 1088,
  [SMALL_STATE(49)] = 1105,
  [SMALL_STATE(50)] = 1124,
  [SMALL_STATE(51)] = 1143,
  [SMALL_STATE(52)] = 1160,
  [SMALL_STATE(53)] = 1178,
  [SMALL_STATE(54)] = 1198,
  [SMALL_STATE(55)] = 1216,
  [SMALL_STATE(56)] = 1234,
  [SMALL_STATE(57)] = 1254,
  [SMALL_STATE(58)] = 1274,
  [SMALL_STATE(59)] = 1294,
  [SMALL_STATE(60)] = 1314,
  [SMALL_STATE(61)] = 1334,
  [SMALL_STATE(62)] = 1354,
  [SMALL_STATE(63)] = 1374,
  [SMALL_STATE(64)] = 1394,
  [SMALL_STATE(65)] = 1414,
  [SMALL_STATE(66)] = 1429,
  [SMALL_STATE(67)] = 1444,
  [SMALL_STATE(68)] = 1459,
  [SMALL_STATE(69)] = 1476,
  [SMALL_STATE(70)] = 1493,
  [SMALL_STATE(71)] = 1507,
  [SMALL_STATE(72)] = 1521,
  [SMALL_STATE(73)] = 1535,
  [SMALL_STATE(74)] = 1549,
  [SMALL_STATE(75)] = 1563,
  [SMALL_STATE(76)] = 1577,
  [SMALL_STATE(77)] = 1591,
  [SMALL_STATE(78)] = 1605,
  [SMALL_STATE(79)] = 1619,
  [SMALL_STATE(80)] = 1633,
  [SMALL_STATE(81)] = 1647,
  [SMALL_STATE(82)] = 1661,
  [SMALL_STATE(83)] = 1675,
  [SMALL_STATE(84)] = 1689,
  [SMALL_STATE(85)] = 1703,
  [SMALL_STATE(86)] = 1717,
  [SMALL_STATE(87)] = 1731,
  [SMALL_STATE(88)] = 1745,
  [SMALL_STATE(89)] = 1759,
  [SMALL_STATE(90)] = 1763,
  [SMALL_STATE(91)] = 1767,
  [SMALL_STATE(92)] = 1771,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_razor_directive, 2, 0, 0), REDUCE(sym_razor_expression, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_razor_directive, 2, 0, 0), REDUCE(sym_razor_expression, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_attribute, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_attribute, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression, 5, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 5, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_attribute, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_attribute, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_text, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_error, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_error, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_text, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 2, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_csharp_code_content = 0,
  ts_external_token_razor_attribute_value_content = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_csharp_code_content] = sym_csharp_code_content,
  [ts_external_token_razor_attribute_value_content] = sym_razor_attribute_value_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_csharp_code_content] = true,
    [ts_external_token_razor_attribute_value_content] = true,
  },
  [2] = {
    [ts_external_token_razor_attribute_value_content] = true,
  },
  [3] = {
    [ts_external_token_csharp_code_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_razor_external_scanner_create(void);
void tree_sitter_razor_external_scanner_destroy(void *);
bool tree_sitter_razor_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_razor_external_scanner_serialize(void *, char *);
void tree_sitter_razor_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_razor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_razor_external_scanner_create,
      tree_sitter_razor_external_scanner_destroy,
      tree_sitter_razor_external_scanner_scan,
      tree_sitter_razor_external_scanner_serialize,
      tree_sitter_razor_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
