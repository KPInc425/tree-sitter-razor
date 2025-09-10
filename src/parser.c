#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 5
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
  sym_razor_attribute_value_text_double = 31,
  sym_razor_attribute_value_expr_double = 32,
  sym_razor_attribute_value_text_single = 33,
  sym_razor_attribute_value_expr_single = 34,
  sym_source_file = 35,
  sym_razor_directive = 36,
  sym_directive_argument = 37,
  sym_razor_code_block = 38,
  sym_razor_expression = 39,
  sym_razor_expression_inner = 40,
  sym_expression_argument_list = 41,
  sym_element = 42,
  sym_start_tag = 43,
  sym_end_tag = 44,
  sym_self_closing_tag = 45,
  sym_attribute = 46,
  sym_razor_attribute = 47,
  sym_attribute_value = 48,
  sym_html_text = 49,
  sym_razor_comment = 50,
  sym_html_comment = 51,
  sym_razor_error = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_razor_directive_repeat1 = 54,
  aux_sym_expression_argument_list_repeat1 = 55,
  aux_sym_element_repeat1 = 56,
  aux_sym_start_tag_repeat1 = 57,
  aux_sym_attribute_value_repeat1 = 58,
  aux_sym_attribute_value_repeat2 = 59,
  aux_sym_razor_comment_repeat1 = 60,
  aux_sym_html_comment_repeat1 = 61,
  alias_sym_directive_name = 62,
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
  [sym_razor_attribute_value_text_double] = "razor_attribute_value_text_double",
  [sym_razor_attribute_value_expr_double] = "razor_attribute_value_expr_double",
  [sym_razor_attribute_value_text_single] = "razor_attribute_value_text_single",
  [sym_razor_attribute_value_expr_single] = "razor_attribute_value_expr_single",
  [sym_source_file] = "source_file",
  [sym_razor_directive] = "razor_directive",
  [sym_directive_argument] = "directive_argument",
  [sym_razor_code_block] = "razor_code_block",
  [sym_razor_expression] = "razor_expression",
  [sym_razor_expression_inner] = "razor_expression_inner",
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
  [aux_sym_attribute_value_repeat1] = "attribute_value_repeat1",
  [aux_sym_attribute_value_repeat2] = "attribute_value_repeat2",
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
  [sym_razor_attribute_value_text_double] = sym_razor_attribute_value_text_double,
  [sym_razor_attribute_value_expr_double] = sym_razor_attribute_value_expr_double,
  [sym_razor_attribute_value_text_single] = sym_razor_attribute_value_text_single,
  [sym_razor_attribute_value_expr_single] = sym_razor_attribute_value_expr_single,
  [sym_source_file] = sym_source_file,
  [sym_razor_directive] = sym_razor_directive,
  [sym_directive_argument] = sym_directive_argument,
  [sym_razor_code_block] = sym_razor_code_block,
  [sym_razor_expression] = sym_razor_expression,
  [sym_razor_expression_inner] = sym_razor_expression_inner,
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
  [aux_sym_attribute_value_repeat1] = aux_sym_attribute_value_repeat1,
  [aux_sym_attribute_value_repeat2] = aux_sym_attribute_value_repeat2,
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
  [sym_razor_attribute_value_text_double] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_attribute_value_expr_double] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_attribute_value_text_single] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_attribute_value_expr_single] = {
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
  [sym_razor_expression_inner] = {
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
  [aux_sym_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_value_repeat2] = {
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
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 12,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 26,
  [51] = 32,
  [52] = 39,
  [53] = 30,
  [54] = 25,
  [55] = 29,
  [56] = 33,
  [57] = 34,
  [58] = 36,
  [59] = 37,
  [60] = 23,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
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
  [77] = 77,
  [78] = 63,
  [79] = 64,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 85,
  [95] = 87,
  [96] = 96,
  [97] = 97,
  [98] = 91,
  [99] = 86,
  [100] = 92,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
      if (lookahead == '!') ADVANCE(15);
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
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '@') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '@') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
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
      if (lookahead == '!') ADVANCE(15);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(15);
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
      if (lookahead == '*') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(12);
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
      if (lookahead == '!') ADVANCE(15);
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
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 2, .external_lex_state = 2},
  [41] = {.lex_state = 2, .external_lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 2, .external_lex_state = 3},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2, .external_lex_state = 2},
  [49] = {.lex_state = 2, .external_lex_state = 3},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 2, .external_lex_state = 2},
  [71] = {.lex_state = 2, .external_lex_state = 3},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {(TSStateId)(-1)},
  [102] = {(TSStateId)(-1)},
  [103] = {(TSStateId)(-1)},
  [104] = {(TSStateId)(-1)},
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
    [sym_razor_attribute_value_text_double] = ACTIONS(1),
    [sym_razor_attribute_value_expr_double] = ACTIONS(1),
    [sym_razor_attribute_value_text_single] = ACTIONS(1),
    [sym_razor_attribute_value_expr_single] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(88),
    [sym_razor_directive] = STATE(24),
    [sym_razor_code_block] = STATE(24),
    [sym_razor_expression] = STATE(24),
    [sym_element] = STATE(24),
    [sym_start_tag] = STATE(4),
    [sym_self_closing_tag] = STATE(32),
    [sym_html_text] = STATE(24),
    [sym_razor_comment] = STATE(1),
    [sym_html_comment] = STATE(1),
    [sym_razor_error] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [aux_sym_html_text_token1] = ACTIONS(13),
    [anon_sym_AT_STAR] = ACTIONS(15),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      aux_sym_html_text_token1,
    STATE(4), 1,
      sym_start_tag,
    STATE(32), 1,
      sym_self_closing_tag,
    STATE(2), 3,
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
  [38] = 11,
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
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(4), 1,
      sym_start_tag,
    STATE(32), 1,
      sym_self_closing_tag,
    STATE(3), 2,
      sym_razor_comment,
      sym_html_comment,
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
    STATE(7), 1,
      sym_start_tag,
    STATE(30), 1,
      sym_end_tag,
    STATE(51), 1,
      sym_self_closing_tag,
    STATE(4), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(27), 3,
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
    STATE(7), 1,
      sym_start_tag,
    STATE(8), 1,
      aux_sym_element_repeat1,
    STATE(33), 1,
      sym_end_tag,
    STATE(51), 1,
      sym_self_closing_tag,
    STATE(5), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(27), 3,
      sym_razor_expression,
      sym_element,
      sym_html_text,
  [158] = 12,
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
      sym_start_tag,
    STATE(8), 1,
      aux_sym_element_repeat1,
    STATE(51), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_end_tag,
    STATE(6), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(27), 3,
      sym_razor_expression,
      sym_element,
      sym_html_text,
  [198] = 11,
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
      aux_sym_element_repeat1,
    STATE(51), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_end_tag,
    STATE(7), 3,
      sym_start_tag,
      sym_razor_comment,
      sym_html_comment,
    STATE(27), 3,
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
    STATE(7), 1,
      sym_start_tag,
    STATE(51), 1,
      sym_self_closing_tag,
    STATE(8), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_element_repeat1,
    STATE(27), 3,
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
    ACTIONS(57), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      aux_sym_razor_directive_repeat1,
    STATE(22), 1,
      sym_directive_argument,
    STATE(9), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(55), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [305] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_GT,
    ACTIONS(67), 1,
      anon_sym_SLASH_GT,
    ACTIONS(69), 1,
      sym_attribute_name,
    STATE(12), 1,
      aux_sym_start_tag_repeat1,
    STATE(10), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 2,
      sym_attribute,
      sym_razor_attribute,
  [335] = 8,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(57), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_razor_directive_repeat1,
    STATE(22), 1,
      sym_directive_argument,
    STATE(11), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(73), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [363] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(69), 1,
      sym_attribute_name,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_SLASH_GT,
    STATE(14), 1,
      aux_sym_start_tag_repeat1,
    STATE(12), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 2,
      sym_attribute,
      sym_razor_attribute,
  [393] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_GT,
    ACTIONS(69), 1,
      sym_attribute_name,
    ACTIONS(79), 1,
      anon_sym_SLASH_GT,
    STATE(16), 1,
      aux_sym_start_tag_repeat1,
    STATE(13), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 2,
      sym_attribute,
      sym_razor_attribute,
  [423] = 7,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_attribute_name,
    ACTIONS(84), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      sym_razor_attribute,
    STATE(14), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_start_tag_repeat1,
  [449] = 7,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_directive_argument_token1,
    STATE(22), 1,
      sym_directive_argument,
    ACTIONS(91), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
    STATE(15), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_directive_repeat1,
  [475] = 9,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(69), 1,
      sym_attribute_name,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(96), 1,
      anon_sym_SLASH_GT,
    STATE(14), 1,
      aux_sym_start_tag_repeat1,
    STATE(16), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(31), 2,
      sym_attribute,
      sym_razor_attribute,
  [505] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      aux_sym_razor_error_token1,
    STATE(39), 1,
      sym_razor_expression_inner,
    ACTIONS(98), 2,
      anon_sym_code,
      anon_sym_functions,
    STATE(17), 2,
      sym_razor_comment,
      sym_html_comment,
  [532] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    STATE(18), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(106), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [555] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(116), 1,
      anon_sym_EQ,
    STATE(19), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(114), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [577] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(118), 1,
      anon_sym_AT,
    ACTIONS(122), 1,
      anon_sym_EQ,
    STATE(20), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(120), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [599] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(126), 4,
      anon_sym_AT,
      aux_sym_directive_argument_token1,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [619] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(130), 4,
      anon_sym_AT,
      aux_sym_directive_argument_token1,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [639] = 5,
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
  [658] = 5,
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
  [677] = 5,
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
  [696] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(146), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [715] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(27), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(148), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [732] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(28), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(150), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [749] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(154), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [768] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(158), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [787] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_AT,
    STATE(31), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(162), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [806] = 5,
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
  [825] = 5,
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
  [844] = 5,
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
  [863] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(35), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(176), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [880] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(36), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(180), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [899] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(184), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [918] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(188), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [937] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(192), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [956] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(196), 2,
      sym_razor_attribute_value_text_double,
      sym_razor_attribute_value_expr_double,
    STATE(40), 2,
      sym_razor_comment,
      sym_html_comment,
  [977] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(46), 1,
      aux_sym_attribute_value_repeat2,
    ACTIONS(198), 2,
      sym_razor_attribute_value_text_single,
      sym_razor_attribute_value_expr_single,
    STATE(41), 2,
      sym_razor_comment,
      sym_html_comment,
  [998] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(200), 1,
      anon_sym_AT,
    STATE(42), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(202), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1017] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(204), 1,
      anon_sym_AT,
    STATE(43), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(206), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1036] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(208), 1,
      anon_sym_AT,
    STATE(44), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(210), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1055] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(196), 2,
      sym_razor_attribute_value_text_double,
      sym_razor_attribute_value_expr_double,
    STATE(45), 2,
      sym_razor_comment,
      sym_html_comment,
  [1076] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      aux_sym_attribute_value_repeat2,
    ACTIONS(198), 2,
      sym_razor_attribute_value_text_single,
      sym_razor_attribute_value_expr_single,
    STATE(46), 2,
      sym_razor_comment,
      sym_html_comment,
  [1097] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(214), 1,
      anon_sym_AT,
    STATE(47), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(216), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1116] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 2,
      sym_razor_attribute_value_text_double,
      sym_razor_attribute_value_expr_double,
    STATE(48), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_attribute_value_repeat1,
  [1135] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 2,
      sym_razor_attribute_value_text_single,
      sym_razor_attribute_value_expr_single,
    STATE(49), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_attribute_value_repeat2,
  [1154] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(50), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(146), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1171] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(51), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(166), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1188] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(52), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(192), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1205] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(53), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(158), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1222] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(54), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(142), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1239] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(55), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(154), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1256] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(56), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(170), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1273] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(57), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(174), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1290] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(58), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(180), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1307] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(59), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(184), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1324] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(60), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(134), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      aux_sym_html_text_token1,
  [1341] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(61), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(230), 3,
      anon_sym_AT,
      anon_sym_LT,
      aux_sym_html_text_token1,
  [1360] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(62), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_expression_argument_list_repeat1,
  [1378] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      sym_expression_argument,
    STATE(85), 1,
      sym_expression_argument_list,
    STATE(63), 2,
      sym_razor_comment,
      sym_html_comment,
  [1398] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(239), 1,
      sym_expression_argument,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_expression_argument_list,
    STATE(64), 2,
      sym_razor_comment,
      sym_html_comment,
  [1418] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(243), 1,
      aux_sym_html_comment_token1,
    ACTIONS(245), 1,
      anon_sym_DASH_DASH_GT,
    STATE(73), 1,
      aux_sym_html_comment_repeat1,
    STATE(65), 2,
      sym_razor_comment,
      sym_html_comment,
  [1438] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(52), 1,
      sym_razor_expression_inner,
    STATE(66), 2,
      sym_razor_comment,
      sym_html_comment,
  [1458] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym_attribute_value,
    STATE(67), 2,
      sym_razor_comment,
      sym_html_comment,
  [1478] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(255), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(258), 1,
      anon_sym_STAR_AT,
    STATE(68), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_comment_repeat1,
  [1496] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(260), 1,
      aux_sym_html_comment_token1,
    ACTIONS(263), 1,
      anon_sym_DASH_DASH_GT,
    STATE(69), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_html_comment_repeat1,
  [1514] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(70), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(265), 3,
      sym_razor_attribute_value_text_double,
      sym_razor_attribute_value_expr_double,
      anon_sym_DQUOTE,
  [1530] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(71), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(267), 3,
      sym_razor_attribute_value_text_single,
      sym_razor_attribute_value_expr_single,
      anon_sym_SQUOTE,
  [1546] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(269), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(271), 1,
      anon_sym_STAR_AT,
    STATE(76), 1,
      aux_sym_razor_comment_repeat1,
    STATE(72), 2,
      sym_razor_comment,
      sym_html_comment,
  [1566] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(243), 1,
      aux_sym_html_comment_token1,
    ACTIONS(273), 1,
      anon_sym_DASH_DASH_GT,
    STATE(69), 1,
      aux_sym_html_comment_repeat1,
    STATE(73), 2,
      sym_razor_comment,
      sym_html_comment,
  [1586] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(74), 2,
      sym_razor_comment,
      sym_html_comment,
  [1606] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(75), 2,
      sym_razor_comment,
      sym_html_comment,
  [1626] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(269), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(281), 1,
      anon_sym_STAR_AT,
    STATE(68), 1,
      aux_sym_razor_comment_repeat1,
    STATE(76), 2,
      sym_razor_comment,
      sym_html_comment,
  [1646] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    STATE(42), 1,
      sym_attribute_value,
    STATE(77), 2,
      sym_razor_comment,
      sym_html_comment,
  [1666] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(239), 1,
      sym_expression_argument,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_expression_argument_list,
    STATE(78), 2,
      sym_razor_comment,
      sym_html_comment,
  [1686] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(239), 1,
      sym_expression_argument,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_expression_argument_list,
    STATE(79), 2,
      sym_razor_comment,
      sym_html_comment,
  [1706] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(80), 2,
      sym_razor_comment,
      sym_html_comment,
  [1721] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(287), 2,
      aux_sym_razor_comment_token1,
      anon_sym_STAR_AT,
    STATE(81), 2,
      sym_razor_comment,
      sym_html_comment,
  [1736] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(289), 2,
      aux_sym_html_comment_token1,
      anon_sym_DASH_DASH_GT,
    STATE(82), 2,
      sym_razor_comment,
      sym_html_comment,
  [1751] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(83), 2,
      sym_razor_comment,
      sym_html_comment,
  [1765] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(84), 2,
      sym_razor_comment,
      sym_html_comment,
  [1779] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_razor_comment,
      sym_html_comment,
  [1793] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(291), 1,
      sym_tag_name,
    STATE(86), 2,
      sym_razor_comment,
      sym_html_comment,
  [1807] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(87), 2,
      sym_razor_comment,
      sym_html_comment,
  [1821] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(88), 2,
      sym_razor_comment,
      sym_html_comment,
  [1835] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(297), 1,
      sym_csharp_code_content,
    STATE(89), 2,
      sym_razor_comment,
      sym_html_comment,
  [1849] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(90), 2,
      sym_razor_comment,
      sym_html_comment,
  [1863] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(301), 1,
      anon_sym_GT,
    STATE(91), 2,
      sym_razor_comment,
      sym_html_comment,
  [1877] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(303), 1,
      sym_tag_name,
    STATE(92), 2,
      sym_razor_comment,
      sym_html_comment,
  [1891] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    STATE(93), 2,
      sym_razor_comment,
      sym_html_comment,
  [1905] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(94), 2,
      sym_razor_comment,
      sym_html_comment,
  [1919] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(95), 2,
      sym_razor_comment,
      sym_html_comment,
  [1933] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(96), 2,
      sym_razor_comment,
      sym_html_comment,
  [1947] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(311), 1,
      sym_expression_argument,
    STATE(97), 2,
      sym_razor_comment,
      sym_html_comment,
  [1961] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(313), 1,
      anon_sym_GT,
    STATE(98), 2,
      sym_razor_comment,
      sym_html_comment,
  [1975] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(315), 1,
      sym_tag_name,
    STATE(99), 2,
      sym_razor_comment,
      sym_html_comment,
  [1989] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(317), 1,
      sym_tag_name,
    STATE(100), 2,
      sym_razor_comment,
      sym_html_comment,
  [2003] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [2007] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [2011] = 1,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
  [2015] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 335,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 393,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 449,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 505,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 555,
  [SMALL_STATE(20)] = 577,
  [SMALL_STATE(21)] = 599,
  [SMALL_STATE(22)] = 619,
  [SMALL_STATE(23)] = 639,
  [SMALL_STATE(24)] = 658,
  [SMALL_STATE(25)] = 677,
  [SMALL_STATE(26)] = 696,
  [SMALL_STATE(27)] = 715,
  [SMALL_STATE(28)] = 732,
  [SMALL_STATE(29)] = 749,
  [SMALL_STATE(30)] = 768,
  [SMALL_STATE(31)] = 787,
  [SMALL_STATE(32)] = 806,
  [SMALL_STATE(33)] = 825,
  [SMALL_STATE(34)] = 844,
  [SMALL_STATE(35)] = 863,
  [SMALL_STATE(36)] = 880,
  [SMALL_STATE(37)] = 899,
  [SMALL_STATE(38)] = 918,
  [SMALL_STATE(39)] = 937,
  [SMALL_STATE(40)] = 956,
  [SMALL_STATE(41)] = 977,
  [SMALL_STATE(42)] = 998,
  [SMALL_STATE(43)] = 1017,
  [SMALL_STATE(44)] = 1036,
  [SMALL_STATE(45)] = 1055,
  [SMALL_STATE(46)] = 1076,
  [SMALL_STATE(47)] = 1097,
  [SMALL_STATE(48)] = 1116,
  [SMALL_STATE(49)] = 1135,
  [SMALL_STATE(50)] = 1154,
  [SMALL_STATE(51)] = 1171,
  [SMALL_STATE(52)] = 1188,
  [SMALL_STATE(53)] = 1205,
  [SMALL_STATE(54)] = 1222,
  [SMALL_STATE(55)] = 1239,
  [SMALL_STATE(56)] = 1256,
  [SMALL_STATE(57)] = 1273,
  [SMALL_STATE(58)] = 1290,
  [SMALL_STATE(59)] = 1307,
  [SMALL_STATE(60)] = 1324,
  [SMALL_STATE(61)] = 1341,
  [SMALL_STATE(62)] = 1360,
  [SMALL_STATE(63)] = 1378,
  [SMALL_STATE(64)] = 1398,
  [SMALL_STATE(65)] = 1418,
  [SMALL_STATE(66)] = 1438,
  [SMALL_STATE(67)] = 1458,
  [SMALL_STATE(68)] = 1478,
  [SMALL_STATE(69)] = 1496,
  [SMALL_STATE(70)] = 1514,
  [SMALL_STATE(71)] = 1530,
  [SMALL_STATE(72)] = 1546,
  [SMALL_STATE(73)] = 1566,
  [SMALL_STATE(74)] = 1586,
  [SMALL_STATE(75)] = 1606,
  [SMALL_STATE(76)] = 1626,
  [SMALL_STATE(77)] = 1646,
  [SMALL_STATE(78)] = 1666,
  [SMALL_STATE(79)] = 1686,
  [SMALL_STATE(80)] = 1706,
  [SMALL_STATE(81)] = 1721,
  [SMALL_STATE(82)] = 1736,
  [SMALL_STATE(83)] = 1751,
  [SMALL_STATE(84)] = 1765,
  [SMALL_STATE(85)] = 1779,
  [SMALL_STATE(86)] = 1793,
  [SMALL_STATE(87)] = 1807,
  [SMALL_STATE(88)] = 1821,
  [SMALL_STATE(89)] = 1835,
  [SMALL_STATE(90)] = 1849,
  [SMALL_STATE(91)] = 1863,
  [SMALL_STATE(92)] = 1877,
  [SMALL_STATE(93)] = 1891,
  [SMALL_STATE(94)] = 1905,
  [SMALL_STATE(95)] = 1919,
  [SMALL_STATE(96)] = 1933,
  [SMALL_STATE(97)] = 1947,
  [SMALL_STATE(98)] = 1961,
  [SMALL_STATE(99)] = 1975,
  [SMALL_STATE(100)] = 1989,
  [SMALL_STATE(101)] = 2003,
  [SMALL_STATE(102)] = 2007,
  [SMALL_STATE(103)] = 2011,
  [SMALL_STATE(104)] = 2015,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_directive, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression_inner, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_attribute, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_attribute, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression_inner, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression_inner, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression_inner, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression_inner, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_text, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_text, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression_inner, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression_inner, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_attribute, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_attribute, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat2, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(71),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_error, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_error, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat2, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 3, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_csharp_code_content = 0,
  ts_external_token_razor_attribute_value_text_double = 1,
  ts_external_token_razor_attribute_value_expr_double = 2,
  ts_external_token_razor_attribute_value_text_single = 3,
  ts_external_token_razor_attribute_value_expr_single = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_csharp_code_content] = sym_csharp_code_content,
  [ts_external_token_razor_attribute_value_text_double] = sym_razor_attribute_value_text_double,
  [ts_external_token_razor_attribute_value_expr_double] = sym_razor_attribute_value_expr_double,
  [ts_external_token_razor_attribute_value_text_single] = sym_razor_attribute_value_text_single,
  [ts_external_token_razor_attribute_value_expr_single] = sym_razor_attribute_value_expr_single,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_csharp_code_content] = true,
    [ts_external_token_razor_attribute_value_text_double] = true,
    [ts_external_token_razor_attribute_value_expr_double] = true,
    [ts_external_token_razor_attribute_value_text_single] = true,
    [ts_external_token_razor_attribute_value_expr_single] = true,
  },
  [2] = {
    [ts_external_token_razor_attribute_value_text_double] = true,
    [ts_external_token_razor_attribute_value_expr_double] = true,
  },
  [3] = {
    [ts_external_token_razor_attribute_value_text_single] = true,
    [ts_external_token_razor_attribute_value_expr_single] = true,
  },
  [4] = {
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
