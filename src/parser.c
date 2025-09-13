#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 3
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
  sym_text = 14,
  sym_razor_code_block = 15,
  sym_razor_directive = 16,
  sym_razor_expression = 17,
  sym_source_file = 18,
  sym_element = 19,
  sym_attribute = 20,
  sym_attribute_value = 21,
  sym_razor_comment = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_element_repeat1 = 24,
  aux_sym_attribute_value_repeat1 = 25,
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
  [sym_text] = "text",
  [sym_razor_code_block] = "razor_code_block",
  [sym_razor_directive] = "razor_directive",
  [sym_razor_expression] = "razor_expression",
  [sym_source_file] = "source_file",
  [sym_element] = "element",
  [sym_attribute] = "attribute",
  [sym_attribute_value] = "attribute_value",
  [sym_razor_comment] = "razor_comment",
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
  [sym_text] = sym_text,
  [sym_razor_code_block] = sym_razor_code_block,
  [sym_razor_directive] = sym_razor_directive,
  [sym_razor_expression] = sym_razor_expression,
  [sym_source_file] = sym_source_file,
  [sym_element] = sym_element,
  [sym_attribute] = sym_attribute,
  [sym_attribute_value] = sym_attribute_value,
  [sym_razor_comment] = sym_razor_comment,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 17,
        '\'', 18,
        '*', 6,
        '/', 5,
        '<', 10,
        '=', 15,
        '>', 11,
        '@', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '@') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '@') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_attribute_value_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_razor_comment_token1);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR_AT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 8, .external_lex_state = 1},
  [2] = {.lex_state = 8, .external_lex_state = 1},
  [3] = {.lex_state = 8, .external_lex_state = 1},
  [4] = {.lex_state = 8, .external_lex_state = 1},
  [5] = {.lex_state = 8, .external_lex_state = 1},
  [6] = {.lex_state = 8, .external_lex_state = 1},
  [7] = {.lex_state = 8, .external_lex_state = 1},
  [8] = {.lex_state = 8, .external_lex_state = 1},
  [9] = {.lex_state = 8, .external_lex_state = 1},
  [10] = {.lex_state = 8, .external_lex_state = 1},
  [11] = {.lex_state = 8, .external_lex_state = 1},
  [12] = {.lex_state = 8, .external_lex_state = 1},
  [13] = {.lex_state = 8, .external_lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
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
    [sym_razor_code_block] = ACTIONS(1),
    [sym_razor_directive] = ACTIONS(1),
    [sym_razor_expression] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_element] = STATE(4),
    [sym_razor_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_AT_STAR] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [sym_razor_code_block] = ACTIONS(9),
    [sym_razor_directive] = ACTIONS(9),
    [sym_razor_expression] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(16), 1,
      anon_sym_LT_SLASH,
    ACTIONS(18), 1,
      anon_sym_AT_STAR,
    STATE(2), 3,
      sym_element,
      sym_razor_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(21), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
  [24] = 5,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(24), 1,
      anon_sym_LT_SLASH,
    STATE(5), 3,
      sym_element,
      sym_razor_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(26), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
  [45] = 5,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(2), 3,
      sym_element,
      sym_razor_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(30), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
  [66] = 5,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(32), 1,
      anon_sym_LT_SLASH,
    STATE(2), 3,
      sym_element,
      sym_razor_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(30), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
  [87] = 5,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(34), 1,
      anon_sym_LT_SLASH,
    STATE(2), 3,
      sym_element,
      sym_razor_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(30), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
  [108] = 5,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_AT_STAR,
    ACTIONS(32), 1,
      anon_sym_LT_SLASH,
    STATE(6), 3,
      sym_element,
      sym_razor_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(36), 4,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      sym_text,
  [129] = 2,
    ACTIONS(40), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
    ACTIONS(38), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [142] = 2,
    ACTIONS(44), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
    ACTIONS(42), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [155] = 2,
    ACTIONS(48), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
    ACTIONS(46), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [168] = 2,
    ACTIONS(52), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
    ACTIONS(50), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [181] = 2,
    ACTIONS(56), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
    ACTIONS(54), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [194] = 2,
    ACTIONS(60), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_AT_STAR,
    ACTIONS(58), 5,
      sym_razor_code_block,
      sym_razor_directive,
      sym_razor_expression,
      ts_builtin_sym_end,
      sym_text,
  [207] = 4,
    ACTIONS(62), 1,
      anon_sym_GT,
    ACTIONS(64), 1,
      anon_sym_SLASH_GT,
    ACTIONS(66), 1,
      sym_attribute_name,
    STATE(16), 2,
      sym_attribute,
      aux_sym_element_repeat1,
  [221] = 4,
    ACTIONS(66), 1,
      sym_attribute_name,
    ACTIONS(68), 1,
      anon_sym_GT,
    ACTIONS(70), 1,
      anon_sym_SLASH_GT,
    STATE(14), 2,
      sym_attribute,
      aux_sym_element_repeat1,
  [235] = 3,
    ACTIONS(74), 1,
      sym_attribute_name,
    ACTIONS(72), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(16), 2,
      sym_attribute,
      aux_sym_element_repeat1,
  [247] = 2,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(77), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [256] = 3,
    ACTIONS(83), 1,
      sym_attribute_value_content,
    STATE(18), 1,
      aux_sym_attribute_value_repeat1,
    ACTIONS(81), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [267] = 1,
    ACTIONS(86), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [273] = 1,
    ACTIONS(88), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [279] = 3,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      sym_attribute_value_content,
    STATE(18), 1,
      aux_sym_attribute_value_repeat1,
  [289] = 3,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      sym_attribute_value_content,
    STATE(25), 1,
      aux_sym_attribute_value_repeat1,
  [299] = 3,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      sym_attribute_value_content,
    STATE(21), 1,
      aux_sym_attribute_value_repeat1,
  [309] = 3,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_attribute_value,
  [319] = 3,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      sym_attribute_value_content,
    STATE(18), 1,
      aux_sym_attribute_value_repeat1,
  [329] = 1,
    ACTIONS(104), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [335] = 1,
    ACTIONS(106), 1,
      anon_sym_GT,
  [339] = 1,
    ACTIONS(108), 1,
      sym_tag_name,
  [343] = 1,
    ACTIONS(110), 1,
      aux_sym_razor_comment_token1,
  [347] = 1,
    ACTIONS(112), 1,
      anon_sym_GT,
  [351] = 1,
    ACTIONS(114), 1,
      sym_tag_name,
  [355] = 1,
    ACTIONS(116), 1,
      sym_tag_name,
  [359] = 1,
    ACTIONS(118), 1,
      anon_sym_STAR_AT,
  [363] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [367] = 1,
    ACTIONS(122), 1,
      anon_sym_GT,
  [371] = 1,
    ACTIONS(124), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 155,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 267,
  [SMALL_STATE(20)] = 273,
  [SMALL_STATE(21)] = 279,
  [SMALL_STATE(22)] = 289,
  [SMALL_STATE(23)] = 299,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 319,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 339,
  [SMALL_STATE(29)] = 343,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 351,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 359,
  [SMALL_STATE(34)] = 363,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 371,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_razor_comment, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 8, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 8, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_razor_code_block = 0,
  ts_external_token_razor_directive = 1,
  ts_external_token_razor_expression = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_razor_code_block] = sym_razor_code_block,
  [ts_external_token_razor_directive] = sym_razor_directive,
  [ts_external_token_razor_expression] = sym_razor_expression,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_razor_code_block] = true,
    [ts_external_token_razor_directive] = true,
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
