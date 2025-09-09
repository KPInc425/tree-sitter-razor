#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  sym_directive_argument = 2,
  anon_sym_code = 3,
  anon_sym_functions = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_csharp_code_content = 7,
  anon_sym_DOT = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COMMA = 11,
  sym_expression_argument = 12,
  anon_sym_LT = 13,
  anon_sym_GT = 14,
  anon_sym_LT_SLASH = 15,
  anon_sym_SLASH_GT = 16,
  sym_tag_name = 17,
  anon_sym_EQ = 18,
  sym_attribute_name = 19,
  anon_sym_DQUOTE = 20,
  anon_sym_SQUOTE = 21,
  sym_attribute_value_content = 22,
  sym_html_text = 23,
  anon_sym_AT_STAR = 24,
  aux_sym_razor_comment_token1 = 25,
  anon_sym_STAR_AT = 26,
  anon_sym_LT_BANG_DASH_DASH = 27,
  aux_sym_html_comment_token1 = 28,
  anon_sym_DASH_DASH_GT = 29,
  sym_identifier = 30,
  sym_source_file = 31,
  sym_razor_directive = 32,
  sym_razor_code_block = 33,
  sym_razor_expression = 34,
  sym_expression_argument_list = 35,
  sym_element = 36,
  sym_start_tag = 37,
  sym_end_tag = 38,
  sym_self_closing_tag = 39,
  sym_attribute = 40,
  sym_attribute_value = 41,
  sym_razor_comment = 42,
  sym_html_comment = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_razor_directive_repeat1 = 45,
  aux_sym_expression_argument_list_repeat1 = 46,
  aux_sym_element_repeat1 = 47,
  aux_sym_start_tag_repeat1 = 48,
  aux_sym_attribute_value_repeat1 = 49,
  aux_sym_razor_comment_repeat1 = 50,
  aux_sym_html_comment_repeat1 = 51,
  alias_sym_directive_name = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [sym_directive_argument] = "directive_argument",
  [anon_sym_code] = "code",
  [anon_sym_functions] = "functions",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_csharp_code_content] = "csharp_code_content",
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
  [sym_attribute_value_content] = "attribute_value_content",
  [sym_html_text] = "html_text",
  [anon_sym_AT_STAR] = "@*",
  [aux_sym_razor_comment_token1] = "razor_comment_token1",
  [anon_sym_STAR_AT] = "*@",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym_html_comment_token1] = "html_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_razor_directive] = "razor_directive",
  [sym_razor_code_block] = "razor_code_block",
  [sym_razor_expression] = "razor_expression",
  [sym_expression_argument_list] = "expression_argument_list",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_razor_comment] = "razor_comment",
  [sym_html_comment] = "html_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_razor_directive_repeat1] = "razor_directive_repeat1",
  [aux_sym_expression_argument_list_repeat1] = "expression_argument_list_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_attribute_value_repeat1] = "attribute_value_repeat1",
  [aux_sym_razor_comment_repeat1] = "razor_comment_repeat1",
  [aux_sym_html_comment_repeat1] = "html_comment_repeat1",
  [alias_sym_directive_name] = "directive_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [sym_directive_argument] = sym_directive_argument,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_csharp_code_content] = sym_csharp_code_content,
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
  [sym_attribute_value_content] = sym_attribute_value_content,
  [sym_html_text] = sym_html_text,
  [anon_sym_AT_STAR] = anon_sym_AT_STAR,
  [aux_sym_razor_comment_token1] = aux_sym_razor_comment_token1,
  [anon_sym_STAR_AT] = anon_sym_STAR_AT,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym_html_comment_token1] = aux_sym_html_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_razor_directive] = sym_razor_directive,
  [sym_razor_code_block] = sym_razor_code_block,
  [sym_razor_expression] = sym_razor_expression,
  [sym_expression_argument_list] = sym_expression_argument_list,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_razor_comment] = sym_razor_comment,
  [sym_html_comment] = sym_html_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_razor_directive_repeat1] = aux_sym_razor_directive_repeat1,
  [aux_sym_expression_argument_list_repeat1] = aux_sym_expression_argument_list_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_attribute_value_repeat1] = aux_sym_attribute_value_repeat1,
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
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
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
  [sym_csharp_code_content] = {
    .visible = true,
    .named = true,
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
  [sym_attribute_value_content] = {
    .visible = true,
    .named = true,
  },
  [sym_html_text] = {
    .visible = true,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_directive] = {
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
  [sym_attribute_value] = {
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
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 17,
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
  [33] = 20,
  [34] = 24,
  [35] = 22,
  [36] = 26,
  [37] = 28,
  [38] = 29,
  [39] = 19,
  [40] = 31,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 50,
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
  [63] = 59,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 73,
  [82] = 72,
  [83] = 80,
  [84] = 75,
  [85] = 77,
  [86] = 71,
  [87] = 74,
  [88] = 79,
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
        '"', 40,
        '\'', 40,
        '(', 40,
        ')', 40,
        '*', 40,
        ',', 40,
        '-', 27,
        '.', 40,
        '/', 40,
        '<', 60,
        '=', 40,
        '>', 61,
        '@', 26,
        'c', 34,
        'f', 38,
        '{', 43,
        '}', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(14);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 67,
        '\'', 68,
        ')', 53,
        ',', 54,
        '/', 21,
        '<', 1,
        '=', 65,
        '>', 61,
        '@', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '@') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '*') ADVANCE(78);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '@' || 'Z' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_directive_argument);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_code);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_csharp_code_content);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_csharp_code_content);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_csharp_code_content);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_csharp_code_content);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_csharp_code_content);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '@') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_csharp_code_content);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '@') ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '@') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '@') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '@') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR_AT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(86);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '@') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 0},
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
    [sym_directive_argument] = ACTIONS(1),
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
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_AT_STAR] = ACTIONS(3),
    [anon_sym_STAR_AT] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(5),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_razor_directive] = STATE(23),
    [sym_razor_code_block] = STATE(23),
    [sym_razor_expression] = STATE(23),
    [sym_element] = STATE(23),
    [sym_start_tag] = STATE(2),
    [sym_self_closing_tag] = STATE(24),
    [sym_razor_comment] = STATE(1),
    [sym_html_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_html_text] = ACTIONS(13),
    [anon_sym_AT_STAR] = ACTIONS(15),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_html_text,
    STATE(5), 1,
      aux_sym_element_repeat1,
    STATE(7), 1,
      sym_start_tag,
    STATE(22), 1,
      sym_end_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(2), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(21), 3,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [40] = 11,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_html_text,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(24), 1,
      sym_self_closing_tag,
    STATE(3), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(23), 4,
      sym_razor_directive,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [78] = 10,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_html_text,
    STATE(2), 1,
      sym_start_tag,
    STATE(24), 1,
      sym_self_closing_tag,
    STATE(4), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
    STATE(23), 4,
      sym_razor_directive,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [114] = 12,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_html_text,
    STATE(7), 1,
      sym_start_tag,
    STATE(8), 1,
      aux_sym_element_repeat1,
    STATE(28), 1,
      sym_end_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(5), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(21), 3,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [154] = 12,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_html_text,
    ACTIONS(40), 1,
      anon_sym_LT_SLASH,
    STATE(7), 1,
      sym_start_tag,
    STATE(8), 1,
      aux_sym_element_repeat1,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(37), 1,
      sym_end_tag,
    STATE(6), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(21), 3,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [194] = 11,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_html_text,
    ACTIONS(40), 1,
      anon_sym_LT_SLASH,
    STATE(6), 1,
      aux_sym_element_repeat1,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(35), 1,
      sym_end_tag,
    STATE(7), 3,
      sym_start_tag,
      sym_razor_comment,
      sym_html_comment,
    STATE(21), 3,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [232] = 10,
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
      sym_html_text,
    STATE(7), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(8), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_element_repeat1,
    STATE(21), 3,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [267] = 9,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_directive_argument,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      aux_sym_razor_directive_repeat1,
    STATE(9), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(56), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [298] = 7,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(59), 1,
      sym_directive_argument,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_razor_directive_repeat1,
    STATE(10), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(67), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [323] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_directive_argument,
    ACTIONS(71), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
    STATE(11), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_directive_repeat1,
  [346] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(12), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(76), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [369] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(84), 4,
      anon_sym_AT,
      sym_directive_argument,
      anon_sym_LT,
      sym_html_text,
  [389] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(88), 1,
      anon_sym_SLASH_GT,
    ACTIONS(90), 1,
      sym_attribute_name,
    STATE(17), 1,
      aux_sym_start_tag_repeat1,
    STATE(61), 1,
      sym_attribute,
    STATE(14), 2,
      sym_razor_comment,
      sym_html_comment,
  [415] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(94), 1,
      sym_attribute_name,
    STATE(61), 1,
      sym_attribute,
    ACTIONS(92), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(15), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_start_tag_repeat1,
  [437] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(90), 1,
      sym_attribute_name,
    ACTIONS(97), 1,
      anon_sym_SLASH_GT,
    STATE(18), 1,
      aux_sym_start_tag_repeat1,
    STATE(61), 1,
      sym_attribute,
    STATE(16), 2,
      sym_razor_comment,
      sym_html_comment,
  [463] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(90), 1,
      sym_attribute_name,
    ACTIONS(99), 1,
      anon_sym_GT,
    ACTIONS(101), 1,
      anon_sym_SLASH_GT,
    STATE(15), 1,
      aux_sym_start_tag_repeat1,
    STATE(61), 1,
      sym_attribute,
    STATE(17), 2,
      sym_razor_comment,
      sym_html_comment,
  [489] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(90), 1,
      sym_attribute_name,
    ACTIONS(99), 1,
      anon_sym_GT,
    ACTIONS(103), 1,
      anon_sym_SLASH_GT,
    STATE(15), 1,
      aux_sym_start_tag_repeat1,
    STATE(61), 1,
      sym_attribute,
    STATE(18), 2,
      sym_razor_comment,
      sym_html_comment,
  [515] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(107), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [534] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(20), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(109), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [551] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(21), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(111), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [568] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(115), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [587] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(119), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [606] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(123), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [625] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(25), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(125), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [642] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(129), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [661] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(133), 1,
      anon_sym_EQ,
    STATE(27), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(131), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [680] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(137), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [699] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(141), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [718] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(30), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(143), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [735] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(147), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [754] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(151), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [773] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(109), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [792] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(34), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(123), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [809] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(35), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(115), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [826] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(36), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(129), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [843] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(37), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(137), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [860] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(38), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(141), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [877] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(39), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(107), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [894] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(40), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(147), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [911] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(41), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(151), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [928] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(155), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(158), 1,
      anon_sym_STAR_AT,
    STATE(42), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_comment_repeat1,
  [946] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      sym_expression_argument,
    STATE(85), 1,
      sym_expression_argument_list,
    STATE(43), 2,
      sym_razor_comment,
      sym_html_comment,
  [966] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(44), 2,
      sym_razor_comment,
      sym_html_comment,
  [986] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(168), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(170), 1,
      anon_sym_STAR_AT,
    STATE(42), 1,
      aux_sym_razor_comment_repeat1,
    STATE(45), 2,
      sym_razor_comment,
      sym_html_comment,
  [1006] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_attribute_value,
    STATE(46), 2,
      sym_razor_comment,
      sym_html_comment,
  [1026] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(168), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(176), 1,
      anon_sym_STAR_AT,
    STATE(45), 1,
      aux_sym_razor_comment_repeat1,
    STATE(47), 2,
      sym_razor_comment,
      sym_html_comment,
  [1046] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      sym_attribute_value_content,
    STATE(57), 1,
      aux_sym_attribute_value_repeat1,
    STATE(48), 2,
      sym_razor_comment,
      sym_html_comment,
  [1066] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(162), 1,
      sym_expression_argument,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_expression_argument_list,
    STATE(49), 2,
      sym_razor_comment,
      sym_html_comment,
  [1086] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(50), 2,
      sym_razor_comment,
      sym_html_comment,
  [1106] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_attribute_value_content,
    STATE(56), 1,
      aux_sym_attribute_value_repeat1,
    STATE(51), 2,
      sym_razor_comment,
      sym_html_comment,
  [1126] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(52), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(188), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1142] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(53), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_expression_argument_list_repeat1,
  [1160] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(54), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(195), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1176] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(197), 1,
      aux_sym_html_comment_token1,
    ACTIONS(199), 1,
      anon_sym_DASH_DASH_GT,
    STATE(64), 1,
      aux_sym_html_comment_repeat1,
    STATE(55), 2,
      sym_razor_comment,
      sym_html_comment,
  [1196] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(186), 1,
      sym_attribute_value_content,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_attribute_value_repeat1,
    STATE(56), 2,
      sym_razor_comment,
      sym_html_comment,
  [1216] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(180), 1,
      sym_attribute_value_content,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_attribute_value_repeat1,
    STATE(57), 2,
      sym_razor_comment,
      sym_html_comment,
  [1236] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(58), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(203), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1252] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_attribute_value_content,
    STATE(59), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_attribute_value_repeat1,
  [1270] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(210), 2,
      anon_sym_code,
      anon_sym_functions,
    STATE(60), 2,
      sym_razor_comment,
      sym_html_comment,
  [1288] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(61), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(214), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1304] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(197), 1,
      aux_sym_html_comment_token1,
    ACTIONS(216), 1,
      anon_sym_DASH_DASH_GT,
    STATE(55), 1,
      aux_sym_html_comment_repeat1,
    STATE(62), 2,
      sym_razor_comment,
      sym_html_comment,
  [1324] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_attribute_value_content,
    STATE(63), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_attribute_value_repeat1,
  [1342] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(221), 1,
      aux_sym_html_comment_token1,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH_GT,
    STATE(64), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_html_comment_repeat1,
  [1360] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(226), 2,
      anon_sym_code,
      anon_sym_functions,
    STATE(65), 2,
      sym_razor_comment,
      sym_html_comment,
  [1378] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(230), 2,
      aux_sym_html_comment_token1,
      anon_sym_DASH_DASH_GT,
    STATE(66), 2,
      sym_razor_comment,
      sym_html_comment,
  [1393] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(67), 2,
      sym_razor_comment,
      sym_html_comment,
  [1408] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(232), 2,
      anon_sym_SQUOTE,
      sym_attribute_value_content,
    STATE(68), 2,
      sym_razor_comment,
      sym_html_comment,
  [1423] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(234), 2,
      aux_sym_razor_comment_token1,
      anon_sym_STAR_AT,
    STATE(69), 2,
      sym_razor_comment,
      sym_html_comment,
  [1438] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(232), 2,
      anon_sym_DQUOTE,
      sym_attribute_value_content,
    STATE(70), 2,
      sym_razor_comment,
      sym_html_comment,
  [1453] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(236), 1,
      sym_tag_name,
    STATE(71), 2,
      sym_razor_comment,
      sym_html_comment,
  [1467] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(72), 2,
      sym_razor_comment,
      sym_html_comment,
  [1481] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(73), 2,
      sym_razor_comment,
      sym_html_comment,
  [1495] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(240), 1,
      sym_csharp_code_content,
    STATE(74), 2,
      sym_razor_comment,
      sym_html_comment,
  [1509] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(242), 1,
      anon_sym_GT,
    STATE(75), 2,
      sym_razor_comment,
      sym_html_comment,
  [1523] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(244), 1,
      sym_expression_argument,
    STATE(76), 2,
      sym_razor_comment,
      sym_html_comment,
  [1537] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(77), 2,
      sym_razor_comment,
      sym_html_comment,
  [1551] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(78), 2,
      sym_razor_comment,
      sym_html_comment,
  [1565] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    STATE(79), 2,
      sym_razor_comment,
      sym_html_comment,
  [1579] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(252), 1,
      sym_tag_name,
    STATE(80), 2,
      sym_razor_comment,
      sym_html_comment,
  [1593] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(81), 2,
      sym_razor_comment,
      sym_html_comment,
  [1607] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(82), 2,
      sym_razor_comment,
      sym_html_comment,
  [1621] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(256), 1,
      sym_tag_name,
    STATE(83), 2,
      sym_razor_comment,
      sym_html_comment,
  [1635] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(84), 2,
      sym_razor_comment,
      sym_html_comment,
  [1649] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(85), 2,
      sym_razor_comment,
      sym_html_comment,
  [1663] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(262), 1,
      sym_tag_name,
    STATE(86), 2,
      sym_razor_comment,
      sym_html_comment,
  [1677] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(264), 1,
      sym_csharp_code_content,
    STATE(87), 2,
      sym_razor_comment,
      sym_html_comment,
  [1691] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(88), 2,
      sym_razor_comment,
      sym_html_comment,
  [1705] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1709] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1713] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [1717] = 1,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 323,
  [SMALL_STATE(12)] = 346,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 389,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 463,
  [SMALL_STATE(18)] = 489,
  [SMALL_STATE(19)] = 515,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 606,
  [SMALL_STATE(25)] = 625,
  [SMALL_STATE(26)] = 642,
  [SMALL_STATE(27)] = 661,
  [SMALL_STATE(28)] = 680,
  [SMALL_STATE(29)] = 699,
  [SMALL_STATE(30)] = 718,
  [SMALL_STATE(31)] = 735,
  [SMALL_STATE(32)] = 754,
  [SMALL_STATE(33)] = 773,
  [SMALL_STATE(34)] = 792,
  [SMALL_STATE(35)] = 809,
  [SMALL_STATE(36)] = 826,
  [SMALL_STATE(37)] = 843,
  [SMALL_STATE(38)] = 860,
  [SMALL_STATE(39)] = 877,
  [SMALL_STATE(40)] = 894,
  [SMALL_STATE(41)] = 911,
  [SMALL_STATE(42)] = 928,
  [SMALL_STATE(43)] = 946,
  [SMALL_STATE(44)] = 966,
  [SMALL_STATE(45)] = 986,
  [SMALL_STATE(46)] = 1006,
  [SMALL_STATE(47)] = 1026,
  [SMALL_STATE(48)] = 1046,
  [SMALL_STATE(49)] = 1066,
  [SMALL_STATE(50)] = 1086,
  [SMALL_STATE(51)] = 1106,
  [SMALL_STATE(52)] = 1126,
  [SMALL_STATE(53)] = 1142,
  [SMALL_STATE(54)] = 1160,
  [SMALL_STATE(55)] = 1176,
  [SMALL_STATE(56)] = 1196,
  [SMALL_STATE(57)] = 1216,
  [SMALL_STATE(58)] = 1236,
  [SMALL_STATE(59)] = 1252,
  [SMALL_STATE(60)] = 1270,
  [SMALL_STATE(61)] = 1288,
  [SMALL_STATE(62)] = 1304,
  [SMALL_STATE(63)] = 1324,
  [SMALL_STATE(64)] = 1342,
  [SMALL_STATE(65)] = 1360,
  [SMALL_STATE(66)] = 1378,
  [SMALL_STATE(67)] = 1393,
  [SMALL_STATE(68)] = 1408,
  [SMALL_STATE(69)] = 1423,
  [SMALL_STATE(70)] = 1438,
  [SMALL_STATE(71)] = 1453,
  [SMALL_STATE(72)] = 1467,
  [SMALL_STATE(73)] = 1481,
  [SMALL_STATE(74)] = 1495,
  [SMALL_STATE(75)] = 1509,
  [SMALL_STATE(76)] = 1523,
  [SMALL_STATE(77)] = 1537,
  [SMALL_STATE(78)] = 1551,
  [SMALL_STATE(79)] = 1565,
  [SMALL_STATE(80)] = 1579,
  [SMALL_STATE(81)] = 1593,
  [SMALL_STATE(82)] = 1607,
  [SMALL_STATE(83)] = 1621,
  [SMALL_STATE(84)] = 1635,
  [SMALL_STATE(85)] = 1649,
  [SMALL_STATE(86)] = 1663,
  [SMALL_STATE(87)] = 1677,
  [SMALL_STATE(88)] = 1691,
  [SMALL_STATE(89)] = 1705,
  [SMALL_STATE(90)] = 1709,
  [SMALL_STATE(91)] = 1713,
  [SMALL_STATE(92)] = 1717,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_razor_directive, 2, 0, 0), REDUCE(sym_razor_expression, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_razor_directive, 2, 0, 0), REDUCE(sym_razor_expression, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression, 5, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [248] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
