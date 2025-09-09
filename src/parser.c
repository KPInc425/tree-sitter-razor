#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 1
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
  sym_attribute_value_content = 21,
  sym_html_text = 22,
  anon_sym_AT_STAR = 23,
  aux_sym_razor_comment_token1 = 24,
  anon_sym_STAR_AT = 25,
  anon_sym_LT_BANG_DASH_DASH = 26,
  aux_sym_html_comment_token1 = 27,
  anon_sym_DASH_DASH_GT = 28,
  sym_identifier = 29,
  sym_csharp_code_content = 30,
  sym_source_file = 31,
  sym_razor_directive = 32,
  sym_directive_argument = 33,
  sym_razor_code_block = 34,
  sym_razor_expression = 35,
  sym_expression_argument_list = 36,
  sym_element = 37,
  sym_start_tag = 38,
  sym_end_tag = 39,
  sym_self_closing_tag = 40,
  sym_attribute = 41,
  sym_attribute_value = 42,
  sym_razor_comment = 43,
  sym_html_comment = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_razor_directive_repeat1 = 46,
  aux_sym_expression_argument_list_repeat1 = 47,
  aux_sym_element_repeat1 = 48,
  aux_sym_start_tag_repeat1 = 49,
  aux_sym_attribute_value_repeat1 = 50,
  aux_sym_razor_comment_repeat1 = 51,
  aux_sym_html_comment_repeat1 = 52,
  alias_sym_directive_name = 53,
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
  [sym_attribute_value_content] = "attribute_value_content",
  [sym_html_text] = "html_text",
  [anon_sym_AT_STAR] = "@*",
  [aux_sym_razor_comment_token1] = "razor_comment_token1",
  [anon_sym_STAR_AT] = "*@",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym_html_comment_token1] = "html_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_identifier] = "identifier",
  [sym_csharp_code_content] = "csharp_code_content",
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
  [sym_attribute_value_content] = sym_attribute_value_content,
  [sym_html_text] = sym_html_text,
  [anon_sym_AT_STAR] = anon_sym_AT_STAR,
  [aux_sym_razor_comment_token1] = aux_sym_razor_comment_token1,
  [anon_sym_STAR_AT] = anon_sym_STAR_AT,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym_html_comment_token1] = aux_sym_html_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_csharp_code_content] = sym_csharp_code_content,
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
  [sym_csharp_code_content] = {
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
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 18,
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
  [33] = 23,
  [34] = 21,
  [35] = 25,
  [36] = 27,
  [37] = 28,
  [38] = 29,
  [39] = 30,
  [40] = 31,
  [41] = 32,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
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
  [63] = 55,
  [64] = 64,
  [65] = 44,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 72,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 73,
  [82] = 82,
  [83] = 83,
  [84] = 74,
  [85] = 83,
  [86] = 79,
  [87] = 80,
  [88] = 82,
  [89] = 76,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
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
        '<', 54,
        '=', 40,
        '>', 55,
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
        '"', 61,
        '\'', 62,
        ')', 47,
        ',', 48,
        '/', 21,
        '<', 1,
        '=', 59,
        '>', 55,
        '@', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '@') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_functions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '@') ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '@') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '@') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_expression_argument);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '@') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '@') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_html_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '@') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_STAR_AT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(80);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '@') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
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
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {(TSStateId)(-1)},
  [91] = {(TSStateId)(-1)},
  [92] = {(TSStateId)(-1)},
  [93] = {(TSStateId)(-1)},
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
    [sym_csharp_code_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym_razor_directive] = STATE(22),
    [sym_razor_code_block] = STATE(22),
    [sym_razor_expression] = STATE(22),
    [sym_element] = STATE(22),
    [sym_start_tag] = STATE(2),
    [sym_self_closing_tag] = STATE(23),
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
    STATE(21), 1,
      sym_end_tag,
    STATE(33), 1,
      sym_self_closing_tag,
    STATE(2), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(42), 3,
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
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(3), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(22), 4,
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
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(4), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
    STATE(22), 4,
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
    STATE(27), 1,
      sym_end_tag,
    STATE(33), 1,
      sym_self_closing_tag,
    STATE(5), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(42), 3,
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
    STATE(33), 1,
      sym_self_closing_tag,
    STATE(36), 1,
      sym_end_tag,
    STATE(6), 2,
      sym_razor_comment,
      sym_html_comment,
    STATE(42), 3,
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
    STATE(33), 1,
      sym_self_closing_tag,
    STATE(34), 1,
      sym_end_tag,
    STATE(7), 3,
      sym_start_tag,
      sym_razor_comment,
      sym_html_comment,
    STATE(42), 3,
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
    STATE(33), 1,
      sym_self_closing_tag,
    STATE(8), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_element_repeat1,
    STATE(42), 3,
      sym_razor_code_block,
      sym_razor_expression,
      sym_element,
  [267] = 10,
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
    STATE(10), 1,
      aux_sym_razor_directive_repeat1,
    STATE(15), 1,
      sym_directive_argument,
    STATE(9), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(56), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [301] = 8,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(59), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_razor_directive_repeat1,
    STATE(15), 1,
      sym_directive_argument,
    STATE(10), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(67), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [329] = 7,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_directive_argument_token1,
    STATE(15), 1,
      sym_directive_argument,
    ACTIONS(71), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
    STATE(11), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_directive_repeat1,
  [355] = 6,
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
  [378] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(82), 1,
      anon_sym_GT,
    ACTIONS(84), 1,
      anon_sym_SLASH_GT,
    ACTIONS(86), 1,
      sym_attribute_name,
    STATE(18), 1,
      aux_sym_start_tag_repeat1,
    STATE(46), 1,
      sym_attribute,
    STATE(13), 2,
      sym_razor_comment,
      sym_html_comment,
  [404] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(90), 4,
      anon_sym_AT,
      aux_sym_directive_argument_token1,
      anon_sym_LT,
      sym_html_text,
  [424] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(94), 4,
      anon_sym_AT,
      aux_sym_directive_argument_token1,
      anon_sym_LT,
      sym_html_text,
  [444] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(46), 1,
      sym_attribute,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(16), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_start_tag_repeat1,
  [466] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(82), 1,
      anon_sym_GT,
    ACTIONS(86), 1,
      sym_attribute_name,
    ACTIONS(101), 1,
      anon_sym_SLASH_GT,
    STATE(19), 1,
      aux_sym_start_tag_repeat1,
    STATE(46), 1,
      sym_attribute,
    STATE(17), 2,
      sym_razor_comment,
      sym_html_comment,
  [492] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(86), 1,
      sym_attribute_name,
    ACTIONS(103), 1,
      anon_sym_GT,
    ACTIONS(105), 1,
      anon_sym_SLASH_GT,
    STATE(16), 1,
      aux_sym_start_tag_repeat1,
    STATE(46), 1,
      sym_attribute,
    STATE(18), 2,
      sym_razor_comment,
      sym_html_comment,
  [518] = 8,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(86), 1,
      sym_attribute_name,
    ACTIONS(103), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_SLASH_GT,
    STATE(16), 1,
      aux_sym_start_tag_repeat1,
    STATE(46), 1,
      sym_attribute,
    STATE(19), 2,
      sym_razor_comment,
      sym_html_comment,
  [544] = 4,
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
  [561] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(113), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [580] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(117), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [599] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(121), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [618] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(24), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(123), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [635] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(127), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [654] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(131), 1,
      anon_sym_EQ,
    STATE(26), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(129), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [673] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(135), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [692] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(139), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [711] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(143), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [730] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(147), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [749] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(151), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [768] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(155), 3,
      anon_sym_AT,
      anon_sym_LT,
      sym_html_text,
  [787] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(33), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(121), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [804] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(34), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(113), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [821] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(35), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(127), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [838] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(36), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(135), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [855] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(37), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(139), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [872] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(38), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(143), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [889] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(39), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(147), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [906] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(40), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(151), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [923] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(41), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(155), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [940] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(42), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(157), 4,
      anon_sym_AT,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym_html_text,
  [957] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(159), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(161), 1,
      anon_sym_STAR_AT,
    STATE(58), 1,
      aux_sym_razor_comment_repeat1,
    STATE(43), 2,
      sym_razor_comment,
      sym_html_comment,
  [977] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(165), 1,
      sym_expression_argument,
    STATE(79), 1,
      sym_expression_argument_list,
    STATE(44), 2,
      sym_razor_comment,
      sym_html_comment,
  [997] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(45), 2,
      sym_razor_comment,
      sym_html_comment,
  [1017] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(46), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(171), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1033] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_attribute_value_content,
    STATE(53), 1,
      aux_sym_attribute_value_repeat1,
    STATE(47), 2,
      sym_razor_comment,
      sym_html_comment,
  [1053] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym_attribute_value_content,
    STATE(52), 1,
      aux_sym_attribute_value_repeat1,
    STATE(48), 2,
      sym_razor_comment,
      sym_html_comment,
  [1073] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(49), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(179), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1089] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(50), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(181), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1105] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(51), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_expression_argument_list_repeat1,
  [1123] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(177), 1,
      sym_attribute_value_content,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      aux_sym_attribute_value_repeat1,
    STATE(52), 2,
      sym_razor_comment,
      sym_html_comment,
  [1143] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(175), 1,
      sym_attribute_value_content,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_attribute_value_repeat1,
    STATE(53), 2,
      sym_razor_comment,
      sym_html_comment,
  [1163] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(54), 2,
      sym_razor_comment,
      sym_html_comment,
    ACTIONS(190), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1179] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_attribute_value_content,
    STATE(55), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_attribute_value_repeat1,
  [1197] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(197), 1,
      aux_sym_html_comment_token1,
    ACTIONS(200), 1,
      anon_sym_DASH_DASH_GT,
    STATE(56), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_html_comment_repeat1,
  [1215] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(202), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(205), 1,
      anon_sym_STAR_AT,
    STATE(57), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_razor_comment_repeat1,
  [1233] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(159), 1,
      aux_sym_razor_comment_token1,
    ACTIONS(207), 1,
      anon_sym_STAR_AT,
    STATE(57), 1,
      aux_sym_razor_comment_repeat1,
    STATE(58), 2,
      sym_razor_comment,
      sym_html_comment,
  [1253] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(209), 1,
      aux_sym_html_comment_token1,
    ACTIONS(211), 1,
      anon_sym_DASH_DASH_GT,
    STATE(61), 1,
      aux_sym_html_comment_repeat1,
    STATE(59), 2,
      sym_razor_comment,
      sym_html_comment,
  [1273] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_expression_argument_list_repeat1,
    STATE(60), 2,
      sym_razor_comment,
      sym_html_comment,
  [1293] = 6,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(209), 1,
      aux_sym_html_comment_token1,
    ACTIONS(215), 1,
      anon_sym_DASH_DASH_GT,
    STATE(56), 1,
      aux_sym_html_comment_repeat1,
    STATE(61), 2,
      sym_razor_comment,
      sym_html_comment,
  [1313] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    STATE(49), 1,
      sym_attribute_value,
    STATE(62), 2,
      sym_razor_comment,
      sym_html_comment,
  [1333] = 5,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      sym_attribute_value_content,
    STATE(63), 3,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_attribute_value_repeat1,
  [1351] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(224), 2,
      anon_sym_code,
      anon_sym_functions,
    STATE(64), 2,
      sym_razor_comment,
      sym_html_comment,
  [1369] = 6,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(165), 1,
      sym_expression_argument,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_expression_argument_list,
    STATE(65), 2,
      sym_razor_comment,
      sym_html_comment,
  [1389] = 5,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(230), 2,
      anon_sym_code,
      anon_sym_functions,
    STATE(66), 2,
      sym_razor_comment,
      sym_html_comment,
  [1407] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(183), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(67), 2,
      sym_razor_comment,
      sym_html_comment,
  [1422] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(234), 2,
      anon_sym_DQUOTE,
      sym_attribute_value_content,
    STATE(68), 2,
      sym_razor_comment,
      sym_html_comment,
  [1437] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(236), 2,
      aux_sym_razor_comment_token1,
      anon_sym_STAR_AT,
    STATE(69), 2,
      sym_razor_comment,
      sym_html_comment,
  [1452] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(238), 2,
      aux_sym_html_comment_token1,
      anon_sym_DASH_DASH_GT,
    STATE(70), 2,
      sym_razor_comment,
      sym_html_comment,
  [1467] = 4,
    ACTIONS(15), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(234), 2,
      anon_sym_SQUOTE,
      sym_attribute_value_content,
    STATE(71), 2,
      sym_razor_comment,
      sym_html_comment,
  [1482] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(72), 2,
      sym_razor_comment,
      sym_html_comment,
  [1496] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(73), 2,
      sym_razor_comment,
      sym_html_comment,
  [1510] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(242), 1,
      anon_sym_GT,
    STATE(74), 2,
      sym_razor_comment,
      sym_html_comment,
  [1524] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(75), 2,
      sym_razor_comment,
      sym_html_comment,
  [1538] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    STATE(76), 2,
      sym_razor_comment,
      sym_html_comment,
  [1552] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      sym_razor_comment,
      sym_html_comment,
  [1566] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(250), 1,
      sym_expression_argument,
    STATE(78), 2,
      sym_razor_comment,
      sym_html_comment,
  [1580] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(79), 2,
      sym_razor_comment,
      sym_html_comment,
  [1594] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(254), 1,
      sym_tag_name,
    STATE(80), 2,
      sym_razor_comment,
      sym_html_comment,
  [1608] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(81), 2,
      sym_razor_comment,
      sym_html_comment,
  [1622] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(256), 1,
      sym_csharp_code_content,
    STATE(82), 2,
      sym_razor_comment,
      sym_html_comment,
  [1636] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(258), 1,
      sym_tag_name,
    STATE(83), 2,
      sym_razor_comment,
      sym_html_comment,
  [1650] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(260), 1,
      anon_sym_GT,
    STATE(84), 2,
      sym_razor_comment,
      sym_html_comment,
  [1664] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(262), 1,
      sym_tag_name,
    STATE(85), 2,
      sym_razor_comment,
      sym_html_comment,
  [1678] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(86), 2,
      sym_razor_comment,
      sym_html_comment,
  [1692] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(266), 1,
      sym_tag_name,
    STATE(87), 2,
      sym_razor_comment,
      sym_html_comment,
  [1706] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(268), 1,
      sym_csharp_code_content,
    STATE(88), 2,
      sym_razor_comment,
      sym_html_comment,
  [1720] = 4,
    ACTIONS(3), 1,
      anon_sym_AT_STAR,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    STATE(89), 2,
      sym_razor_comment,
      sym_html_comment,
  [1734] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [1738] = 1,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [1742] = 1,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [1746] = 1,
    ACTIONS(278), 1,
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
  [SMALL_STATE(10)] = 301,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 404,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 444,
  [SMALL_STATE(17)] = 466,
  [SMALL_STATE(18)] = 492,
  [SMALL_STATE(19)] = 518,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 561,
  [SMALL_STATE(22)] = 580,
  [SMALL_STATE(23)] = 599,
  [SMALL_STATE(24)] = 618,
  [SMALL_STATE(25)] = 635,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 673,
  [SMALL_STATE(28)] = 692,
  [SMALL_STATE(29)] = 711,
  [SMALL_STATE(30)] = 730,
  [SMALL_STATE(31)] = 749,
  [SMALL_STATE(32)] = 768,
  [SMALL_STATE(33)] = 787,
  [SMALL_STATE(34)] = 804,
  [SMALL_STATE(35)] = 821,
  [SMALL_STATE(36)] = 838,
  [SMALL_STATE(37)] = 855,
  [SMALL_STATE(38)] = 872,
  [SMALL_STATE(39)] = 889,
  [SMALL_STATE(40)] = 906,
  [SMALL_STATE(41)] = 923,
  [SMALL_STATE(42)] = 940,
  [SMALL_STATE(43)] = 957,
  [SMALL_STATE(44)] = 977,
  [SMALL_STATE(45)] = 997,
  [SMALL_STATE(46)] = 1017,
  [SMALL_STATE(47)] = 1033,
  [SMALL_STATE(48)] = 1053,
  [SMALL_STATE(49)] = 1073,
  [SMALL_STATE(50)] = 1089,
  [SMALL_STATE(51)] = 1105,
  [SMALL_STATE(52)] = 1123,
  [SMALL_STATE(53)] = 1143,
  [SMALL_STATE(54)] = 1163,
  [SMALL_STATE(55)] = 1179,
  [SMALL_STATE(56)] = 1197,
  [SMALL_STATE(57)] = 1215,
  [SMALL_STATE(58)] = 1233,
  [SMALL_STATE(59)] = 1253,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1293,
  [SMALL_STATE(62)] = 1313,
  [SMALL_STATE(63)] = 1333,
  [SMALL_STATE(64)] = 1351,
  [SMALL_STATE(65)] = 1369,
  [SMALL_STATE(66)] = 1389,
  [SMALL_STATE(67)] = 1407,
  [SMALL_STATE(68)] = 1422,
  [SMALL_STATE(69)] = 1437,
  [SMALL_STATE(70)] = 1452,
  [SMALL_STATE(71)] = 1467,
  [SMALL_STATE(72)] = 1482,
  [SMALL_STATE(73)] = 1496,
  [SMALL_STATE(74)] = 1510,
  [SMALL_STATE(75)] = 1524,
  [SMALL_STATE(76)] = 1538,
  [SMALL_STATE(77)] = 1552,
  [SMALL_STATE(78)] = 1566,
  [SMALL_STATE(79)] = 1580,
  [SMALL_STATE(80)] = 1594,
  [SMALL_STATE(81)] = 1608,
  [SMALL_STATE(82)] = 1622,
  [SMALL_STATE(83)] = 1636,
  [SMALL_STATE(84)] = 1650,
  [SMALL_STATE(85)] = 1664,
  [SMALL_STATE(86)] = 1678,
  [SMALL_STATE(87)] = 1692,
  [SMALL_STATE(88)] = 1706,
  [SMALL_STATE(89)] = 1720,
  [SMALL_STATE(90)] = 1734,
  [SMALL_STATE(91)] = 1738,
  [SMALL_STATE(92)] = 1742,
  [SMALL_STATE(93)] = 1746,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_razor_directive, 2, 0, 0), REDUCE(sym_razor_expression, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_razor_directive, 2, 0, 0), REDUCE(sym_razor_expression, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_directive, 3, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_directive_repeat1, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_code_block, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_expression, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_expression, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_argument_list, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_razor_comment_repeat1, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_comment_repeat1, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 2, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_csharp_code_content = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_csharp_code_content] = sym_csharp_code_content,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
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
