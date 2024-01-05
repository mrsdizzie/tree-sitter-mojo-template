#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT_PERCENT = 1,
  anon_sym_LT_PERCENT_EQ = 2,
  anon_sym_LT_PERCENT_EQ_EQ = 3,
  anon_sym_PERCENT_GT = 4,
  anon_sym_EQ_PERCENT_GT = 5,
  anon_sym_LT_PERCENT_POUND = 6,
  anon_sym_PERCENT = 7,
  anon_sym_PERCENT_EQ = 8,
  anon_sym_PERCENT_EQ_EQ = 9,
  anon_sym_PERCENT_POUND = 10,
  aux_sym_percent_code_token1 = 11,
  aux_sym_code_token1 = 12,
  anon_sym_PERCENT_PERCENT_GT = 13,
  sym_content = 14,
  sym_template = 15,
  sym_bracketed_code = 16,
  sym_bracketed_comment = 17,
  sym_shorthand_code = 18,
  sym_shorthand_comment = 19,
  sym_percent_code = 20,
  sym_code = 21,
  aux_sym_template_repeat1 = 22,
  aux_sym_code_repeat1 = 23,
  alias_sym_comment = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_EQ_EQ] = "<%==",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_EQ_PERCENT_GT] = "=%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PERCENT_EQ_EQ] = "%==",
  [anon_sym_PERCENT_POUND] = "%#",
  [aux_sym_percent_code_token1] = "percent_code_token1",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_PERCENT_PERCENT_GT] = "%%>",
  [sym_content] = "content",
  [sym_template] = "template",
  [sym_bracketed_code] = "bracketed_code",
  [sym_bracketed_comment] = "bracketed_comment",
  [sym_shorthand_code] = "shorthand_code",
  [sym_shorthand_comment] = "shorthand_comment",
  [sym_percent_code] = "percent_code",
  [sym_code] = "code",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_EQ_EQ] = anon_sym_LT_PERCENT_EQ_EQ,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_EQ_PERCENT_GT] = anon_sym_EQ_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PERCENT_EQ_EQ] = anon_sym_PERCENT_EQ_EQ,
  [anon_sym_PERCENT_POUND] = anon_sym_PERCENT_POUND,
  [aux_sym_percent_code_token1] = aux_sym_percent_code_token1,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_PERCENT_PERCENT_GT] = anon_sym_PERCENT_PERCENT_GT,
  [sym_content] = sym_content,
  [sym_template] = sym_template,
  [sym_bracketed_code] = sym_bracketed_code,
  [sym_bracketed_comment] = sym_bracketed_comment,
  [sym_shorthand_code] = sym_shorthand_code,
  [sym_shorthand_comment] = sym_shorthand_comment,
  [sym_percent_code] = sym_percent_code,
  [sym_code] = sym_code,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_percent_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_code] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_code] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_percent_code] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_percent_code, 2,
    sym_percent_code,
    alias_sym_comment,
  sym_code, 2,
    sym_code,
    alias_sym_comment,
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
  [15] = 12,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_percent_code_token1);
      if (eof) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(8);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(19);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(19);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(24);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PERCENT_POUND);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_percent_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(4);
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_content);
      if (eof) ADVANCE(7);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_percent_code_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(21),
    [sym_bracketed_code] = STATE(3),
    [sym_bracketed_comment] = STATE(3),
    [sym_shorthand_code] = STATE(3),
    [sym_shorthand_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(7),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(13),
    [anon_sym_PERCENT_POUND] = ACTIONS(15),
    [sym_content] = ACTIONS(17),
  },
  [2] = {
    [sym_bracketed_code] = STATE(2),
    [sym_bracketed_comment] = STATE(2),
    [sym_shorthand_code] = STATE(2),
    [sym_shorthand_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LT_PERCENT] = ACTIONS(21),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(21),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(24),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(30),
    [anon_sym_PERCENT_EQ] = ACTIONS(30),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(33),
    [anon_sym_PERCENT_POUND] = ACTIONS(36),
    [sym_content] = ACTIONS(39),
  },
  [3] = {
    [sym_bracketed_code] = STATE(2),
    [sym_bracketed_comment] = STATE(2),
    [sym_shorthand_code] = STATE(2),
    [sym_shorthand_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(7),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(13),
    [anon_sym_PERCENT_POUND] = ACTIONS(15),
    [sym_content] = ACTIONS(44),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(48), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [15] = 2,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(52), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [30] = 2,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(56), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [45] = 2,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(60), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [60] = 2,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(64), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [75] = 2,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(68), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [90] = 2,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(72), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [105] = 5,
    ACTIONS(76), 1,
      aux_sym_code_token1,
    ACTIONS(78), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(12), 1,
      aux_sym_code_repeat1,
    STATE(17), 1,
      sym_code,
    ACTIONS(74), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [122] = 4,
    ACTIONS(82), 1,
      aux_sym_code_token1,
    ACTIONS(84), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(14), 1,
      aux_sym_code_repeat1,
    ACTIONS(80), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [136] = 5,
    ACTIONS(86), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(88), 1,
      aux_sym_code_token1,
    ACTIONS(90), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(15), 1,
      aux_sym_code_repeat1,
    STATE(20), 1,
      sym_code,
  [152] = 4,
    ACTIONS(94), 1,
      aux_sym_code_token1,
    ACTIONS(97), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(14), 1,
      aux_sym_code_repeat1,
    ACTIONS(92), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [166] = 4,
    ACTIONS(80), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(100), 1,
      aux_sym_code_token1,
    ACTIONS(102), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(16), 1,
      aux_sym_code_repeat1,
  [179] = 4,
    ACTIONS(92), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(104), 1,
      aux_sym_code_token1,
    ACTIONS(107), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(16), 1,
      aux_sym_code_repeat1,
  [192] = 1,
    ACTIONS(110), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [197] = 2,
    ACTIONS(112), 1,
      aux_sym_percent_code_token1,
    STATE(7), 1,
      sym_percent_code,
  [204] = 2,
    ACTIONS(112), 1,
      aux_sym_percent_code_token1,
    STATE(9), 1,
      sym_percent_code,
  [211] = 1,
    ACTIONS(114), 1,
      anon_sym_PERCENT_GT,
  [215] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 152,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 192,
  [SMALL_STATE(18)] = 197,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 211,
  [SMALL_STATE(21)] = 215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(19),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_code, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_code, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_comment, 3, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_comment, 3, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_code, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_code, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_comment, 2, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_comment, 2, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_code, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_code, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_code, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_code, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_comment, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_comment, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(14),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(14),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(16),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mojo_template(void) {
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
