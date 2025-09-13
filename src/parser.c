#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  sym_tag_name = 5,
  anon_sym_EQ = 6,
  sym_attribute_name = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_SQUOTE = 9,
  sym_attribute_value_content = 10,
  anon_sym_AT_STAR = 11,
  aux_sym_razor_comment_token1 = 12,
  anon_sym_STAR_AT = 13,
  anon_sym_LT_BANG_DASH_DASH = 14,
  aux_sym_html_comment_token1 = 15,
  anon_sym_DASH_DASH_GT = 16,
  sym_text = 17,
  sym_razor_code_block = 18,
  sym_razor_directive = 19,
  sym_razor_expression = 20,
  sym_razor_expression_content = 21,
  sym_source_file = 22,
  sym_element = 23,
  sym_attribute = 24,
  sym_attribute_value = 25,
  sym_razor_comment = 26,
  sym_html_comment = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_element_repeat1 = 29,
  aux_sym_attribute_value_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_AT_STAR] = "@*",
  [aux_sym_razor_comment_token1] = "razor_comment_token1",
  [anon_sym_STAR_AT] = "*@",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym_html_comment_token1] = "html_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_text] = "text",
  [sym_razor_code_block] = "razor_code_block",
  [sym_razor_directive] = "razor_directive",
  [sym_razor_expression] = "razor_expression",
  [sym_razor_expression_content] = "razor_expression_content",
  [sym_source_file] = "source_file",
  [sym_element] = "element",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_razor_comment] = "razor_comment",
  [sym_html_comment] = "html_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_attribute_value_repeat1] = "attribute_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_AT_STAR] = anon_sym_AT_STAR,
  [aux_sym_razor_comment_token1] = aux_sym_razor_comment_token1,
  [anon_sym_STAR_AT] = anon_sym_STAR_AT,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym_html_comment_token1] = aux_sym_html_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_text] = sym_text,
  [sym_razor_code_block] = sym_razor_code_block,
  [sym_razor_directive] = sym_razor_directive,
  [sym_razor_expression] = sym_razor_expression,
  [sym_razor_expression_content] = sym_razor_expression_content,
  [sym_source_file] = sym_source_file,
  [sym_element] = sym_element,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_razor_comment] = sym_razor_comment,
  [sym_html_comment] = sym_html_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_attribute_value_repeat1] = aux_sym_attribute_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_razor_expression_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
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
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '"', 23,
        '\'', 24,
        '*', 11,
        '-', 6,
        '/', 9,
        '<', 16,
        '=', 21,
        '>', 17,
        '@', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '@') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '@') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(33);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '@') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '@') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '@') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR_AT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14, .external_lex_state = 2},
  [2] = {.lex_state = 14, .external_lex_state = 2},
  [3] = {.lex_state = 14, .external_lex_state = 2},
  [4] = {.lex_state = 14, .external_lex_state = 2},
  [5] = {.lex_state = 14, .external_lex_state = 2},
  [6] = {.lex_state = 14, .external_lex_state = 2},
  [7] = {.lex_state = 14, .external_lex_state = 2},
  [8] = {.lex_state = 14, .external_lex_state = 2},
  [9] = {.lex_state = 14, .external_lex_state = 2},
  [10] = {.lex_state = 14, .external_lex_state = 2},
  [11] = {.lex_state = 14, .external_lex_state = 2},
  [12] = {.lex_state = 14, .external_lex_state = 2},
  [13] = {.lex_state = 14, .external_lex_state = 2},
  [14] = {.lex_state = 14, .external_lex_state = 2},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 1, .external_lex_state = 3},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 1, .external_lex_state = 3},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_AT_STAR] = ACTIONS(1),
    [anon_sym_STAR_AT] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_razor_code_block] = ACTIONS(1),
    [sym_razor_directive] = ACTIONS(1),
    [sym_razor_expression] = ACTIONS(1),
    [sym_razor_expression_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_element] = STATE(5),
    [sym_razor_comment] = STATE(5),
    [sym_html_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_AT_STAR] = ACTIONS(7),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
    [sym_razor_code_block] = ACTIONS(11),
    [sym_razor_directive] = ACTIONS(11),
    [sym_razor_expression] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
      anon_sym_LT_SLASH,
    ACTIONS(20), 1,
      anon_sym_AT_STAR,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(26), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
    STATE(2), 4,
      sym_element,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [28] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(31), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
    STATE(7), 4,
      sym_element,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [53] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
    STATE(6), 4,
      sym_element,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [78] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
    STATE(2), 4,
      sym_element,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [103] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
    STATE(2), 4,
      sym_element,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [128] = 6,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
    STATE(2), 4,
      sym_element,
      sym_razor_comment,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [153] = 2,
    ACTIONS(45), 4,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [167] = 2,
    ACTIONS(49), 4,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(47), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [181] = 2,
    ACTIONS(53), 4,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(51), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [195] = 2,
    ACTIONS(57), 4,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(55), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [209] = 2,
    ACTIONS(61), 4,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(59), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [223] = 2,
    ACTIONS(65), 4,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(63), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [237] = 2,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(67), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [251] = 4,
    ACTIONS(71), 1,
      anon_sym_GT,
    ACTIONS(73), 1,
      anon_sym_SLASH_GT,
    ACTIONS(75), 1,
      sym_attribute_name,
    STATE(16), 2,
      sym_attribute,
      aux_sym_element_repeat1,
  [265] = 4,
    ACTIONS(75), 1,
      sym_attribute_name,
    ACTIONS(77), 1,
      anon_sym_GT,
    ACTIONS(79), 1,
      anon_sym_SLASH_GT,
    STATE(17), 2,
      sym_attribute,
      aux_sym_element_repeat1,
  [279] = 3,
    ACTIONS(83), 1,
      sym_attribute_name,
    ACTIONS(81), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(17), 2,
      sym_attribute,
      aux_sym_element_repeat1,
  [291] = 3,
    STATE(18), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(86), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(88), 2,
      sym_razor_expression,
      sym_attribute_value_content,
  [303] = 2,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(91), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [312] = 3,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(97), 2,
      sym_razor_expression,
      sym_attribute_value_content,
  [323] = 3,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(101), 2,
      sym_razor_expression,
      sym_attribute_value_content,
  [334] = 3,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(103), 2,
      sym_razor_expression,
      sym_attribute_value_content,
  [345] = 3,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(97), 2,
      sym_razor_expression,
      sym_attribute_value_content,
  [356] = 3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_attribute_value,
  [366] = 1,
    ACTIONS(109), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [372] = 1,
    ACTIONS(111), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [378] = 1,
    ACTIONS(113), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [384] = 1,
    ACTIONS(115), 1,
      aux_sym_razor_comment_token1,
  [388] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [392] = 1,
    ACTIONS(119), 1,
      anon_sym_GT,
  [396] = 1,
    ACTIONS(121), 1,
      anon_sym_GT,
  [400] = 1,
    ACTIONS(123), 1,
      sym_tag_name,
  [404] = 1,
    ACTIONS(125), 1,
      anon_sym_STAR_AT,
  [408] = 1,
    ACTIONS(127), 1,
      sym_tag_name,
  [412] = 1,
    ACTIONS(129), 1,
      anon_sym_DASH_DASH_GT,
  [416] = 1,
    ACTIONS(131), 1,
      aux_sym_html_comment_token1,
  [420] = 1,
    ACTIONS(133), 1,
      sym_tag_name,
  [424] = 1,
    ACTIONS(135), 1,
      anon_sym_GT,
  [428] = 1,
    ACTIONS(137), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 279,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 312,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 334,
  [SMALL_STATE(23)] = 345,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 366,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 378,
  [SMALL_STATE(28)] = 384,
  [SMALL_STATE(29)] = 388,
  [SMALL_STATE(30)] = 392,
  [SMALL_STATE(31)] = 396,
  [SMALL_STATE(32)] = 400,
  [SMALL_STATE(33)] = 404,
  [SMALL_STATE(34)] = 408,
  [SMALL_STATE(35)] = 412,
  [SMALL_STATE(36)] = 416,
  [SMALL_STATE(37)] = 420,
  [SMALL_STATE(38)] = 424,
  [SMALL_STATE(39)] = 428,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 8, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 8, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_comment, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_razor_code_block = 0,
  ts_external_token_razor_directive = 1,
  ts_external_token_razor_expression = 2,
  ts_external_token_razor_expression_content = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_razor_code_block] = sym_razor_code_block,
  [ts_external_token_razor_directive] = sym_razor_directive,
  [ts_external_token_razor_expression] = sym_razor_expression,
  [ts_external_token_razor_expression_content] = sym_razor_expression_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_razor_code_block] = true,
    [ts_external_token_razor_directive] = true,
    [ts_external_token_razor_expression] = true,
    [ts_external_token_razor_expression_content] = true,
  },
  [2] = {
    [ts_external_token_razor_code_block] = true,
    [ts_external_token_razor_directive] = true,
    [ts_external_token_razor_expression] = true,
  },
  [3] = {
    [ts_external_token_razor_expression] = true,
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
