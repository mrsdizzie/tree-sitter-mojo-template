#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT_PERCENT = 1,
  anon_sym_PERCENT_GT = 2,
  anon_sym_EQ_PERCENT_GT = 3,
  anon_sym_LT_PERCENT_EQ = 4,
  anon_sym_LT_PERCENT_EQ_EQ = 5,
  anon_sym_LT_PERCENT_POUND = 6,
  anon_sym_PERCENT = 7,
  anon_sym_PERCENT_EQ = 8,
  anon_sym_PERCENT_EQ_EQ = 9,
  anon_sym_PERCENT_POUND = 10,
  aux_sym_perl_code_token1 = 11,
  aux_sym_perl_code_token2 = 12,
  aux_sym_perl_code_token3 = 13,
  sym_content = 14,
  sym_template = 15,
  sym_bracketed_perl_code = 16,
  sym_bracketed_perl_expression = 17,
  sym_bracketed_perl_expression_escaped = 18,
  sym_bracketed_comment = 19,
  sym_shorthand_perl_code = 20,
  sym_shorthand_perl_expression = 21,
  sym_shorthand_perl_expression_escaped = 22,
  sym_shorthand_comment = 23,
  sym_perl_code = 24,
  aux_sym_template_repeat1 = 25,
  aux_sym_perl_code_repeat1 = 26,
  alias_sym_comment = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_EQ_PERCENT_GT] = "=%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_EQ_EQ] = "<%==",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PERCENT_EQ_EQ] = "%==",
  [anon_sym_PERCENT_POUND] = "%#",
  [aux_sym_perl_code_token1] = "perl_code_token1",
  [aux_sym_perl_code_token2] = "perl_code_token2",
  [aux_sym_perl_code_token3] = "perl_code_token3",
  [sym_content] = "content",
  [sym_template] = "template",
  [sym_bracketed_perl_code] = "bracketed_perl_code",
  [sym_bracketed_perl_expression] = "bracketed_perl_expression",
  [sym_bracketed_perl_expression_escaped] = "bracketed_perl_expression_escaped",
  [sym_bracketed_comment] = "bracketed_comment",
  [sym_shorthand_perl_code] = "shorthand_perl_code",
  [sym_shorthand_perl_expression] = "shorthand_perl_expression",
  [sym_shorthand_perl_expression_escaped] = "shorthand_perl_expression_escaped",
  [sym_shorthand_comment] = "shorthand_comment",
  [sym_perl_code] = "perl_code",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_perl_code_repeat1] = "perl_code_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_EQ_PERCENT_GT] = anon_sym_EQ_PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_EQ_EQ] = anon_sym_LT_PERCENT_EQ_EQ,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PERCENT_EQ_EQ] = anon_sym_PERCENT_EQ_EQ,
  [anon_sym_PERCENT_POUND] = anon_sym_PERCENT_POUND,
  [aux_sym_perl_code_token1] = aux_sym_perl_code_token1,
  [aux_sym_perl_code_token2] = aux_sym_perl_code_token2,
  [aux_sym_perl_code_token3] = aux_sym_perl_code_token3,
  [sym_content] = sym_content,
  [sym_template] = sym_template,
  [sym_bracketed_perl_code] = sym_bracketed_perl_code,
  [sym_bracketed_perl_expression] = sym_bracketed_perl_expression,
  [sym_bracketed_perl_expression_escaped] = sym_bracketed_perl_expression_escaped,
  [sym_bracketed_comment] = sym_bracketed_comment,
  [sym_shorthand_perl_code] = sym_shorthand_perl_code,
  [sym_shorthand_perl_expression] = sym_shorthand_perl_expression,
  [sym_shorthand_perl_expression_escaped] = sym_shorthand_perl_expression_escaped,
  [sym_shorthand_comment] = sym_shorthand_comment,
  [sym_perl_code] = sym_perl_code,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_perl_code_repeat1] = aux_sym_perl_code_repeat1,
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
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_PERCENT_GT] = {
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
  [aux_sym_perl_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_perl_code_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_perl_code_token3] = {
    .visible = false,
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
  [sym_bracketed_perl_code] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_perl_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_perl_expression_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketed_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_perl_code] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_perl_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_perl_expression_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_perl_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_perl_code_repeat1] = {
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
  sym_perl_code, 2,
    sym_perl_code,
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 5,
  [23] = 4,
  [24] = 24,
  [25] = 25,
  [26] = 5,
  [27] = 4,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_content);
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(8);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(27);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PERCENT_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_perl_code_token2);
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_perl_code_token2);
      if (lookahead == '>') ADVANCE(9);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_perl_code_token3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_content);
      if (eof) ADVANCE(7);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_POUND] = ACTIONS(1),
    [aux_sym_perl_code_token1] = ACTIONS(1),
    [aux_sym_perl_code_token2] = ACTIONS(1),
    [aux_sym_perl_code_token3] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(34),
    [sym_bracketed_perl_code] = STATE(3),
    [sym_bracketed_perl_expression] = STATE(3),
    [sym_bracketed_perl_expression_escaped] = STATE(3),
    [sym_bracketed_comment] = STATE(3),
    [sym_shorthand_perl_code] = STATE(3),
    [sym_shorthand_perl_expression] = STATE(3),
    [sym_shorthand_perl_expression_escaped] = STATE(3),
    [sym_shorthand_comment] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_PERCENT_EQ] = ACTIONS(15),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_POUND] = ACTIONS(19),
    [sym_content] = ACTIONS(21),
  },
  [2] = {
    [sym_bracketed_perl_code] = STATE(2),
    [sym_bracketed_perl_expression] = STATE(2),
    [sym_bracketed_perl_expression_escaped] = STATE(2),
    [sym_bracketed_comment] = STATE(2),
    [sym_shorthand_perl_code] = STATE(2),
    [sym_shorthand_perl_expression] = STATE(2),
    [sym_shorthand_perl_expression_escaped] = STATE(2),
    [sym_shorthand_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LT_PERCENT] = ACTIONS(25),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(28),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(31),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(34),
    [anon_sym_PERCENT] = ACTIONS(37),
    [anon_sym_PERCENT_EQ] = ACTIONS(40),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(43),
    [anon_sym_PERCENT_POUND] = ACTIONS(46),
    [sym_content] = ACTIONS(49),
  },
  [3] = {
    [sym_bracketed_perl_code] = STATE(2),
    [sym_bracketed_perl_expression] = STATE(2),
    [sym_bracketed_perl_expression_escaped] = STATE(2),
    [sym_bracketed_comment] = STATE(2),
    [sym_shorthand_perl_code] = STATE(2),
    [sym_shorthand_perl_expression] = STATE(2),
    [sym_shorthand_perl_expression_escaped] = STATE(2),
    [sym_shorthand_comment] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_PERCENT_EQ] = ACTIONS(15),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(17),
    [anon_sym_PERCENT_POUND] = ACTIONS(19),
    [sym_content] = ACTIONS(54),
  },
  [4] = {
    [aux_sym_perl_code_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_LT_PERCENT] = ACTIONS(58),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(58),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(56),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_PERCENT_EQ] = ACTIONS(58),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(56),
    [anon_sym_PERCENT_POUND] = ACTIONS(56),
    [aux_sym_perl_code_token1] = ACTIONS(60),
    [aux_sym_perl_code_token2] = ACTIONS(60),
    [aux_sym_perl_code_token3] = ACTIONS(63),
    [sym_content] = ACTIONS(58),
  },
  [5] = {
    [aux_sym_perl_code_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LT_PERCENT] = ACTIONS(68),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(68),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(66),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(66),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_PERCENT_EQ] = ACTIONS(68),
    [anon_sym_PERCENT_EQ_EQ] = ACTIONS(66),
    [anon_sym_PERCENT_POUND] = ACTIONS(66),
    [aux_sym_perl_code_token1] = ACTIONS(70),
    [aux_sym_perl_code_token2] = ACTIONS(70),
    [aux_sym_perl_code_token3] = ACTIONS(72),
    [sym_content] = ACTIONS(68),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(76), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [15] = 2,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(80), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [30] = 2,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(84), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [45] = 2,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(88), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [60] = 2,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(92), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [75] = 2,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(96), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [90] = 2,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(100), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [105] = 2,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(104), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [120] = 2,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(108), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [135] = 2,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(112), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [150] = 2,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(116), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [165] = 2,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(120), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [180] = 4,
    STATE(22), 1,
      aux_sym_perl_code_repeat1,
    STATE(32), 1,
      sym_perl_code,
    ACTIONS(122), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(124), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [196] = 4,
    STATE(22), 1,
      aux_sym_perl_code_repeat1,
    STATE(30), 1,
      sym_perl_code,
    ACTIONS(126), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(124), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [212] = 4,
    STATE(22), 1,
      aux_sym_perl_code_repeat1,
    STATE(31), 1,
      sym_perl_code,
    ACTIONS(128), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(124), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [228] = 5,
    ACTIONS(130), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(132), 1,
      aux_sym_perl_code_token1,
    STATE(26), 1,
      aux_sym_perl_code_repeat1,
    STATE(33), 1,
      sym_perl_code,
    ACTIONS(134), 2,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [245] = 3,
    STATE(23), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(66), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(136), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [258] = 3,
    STATE(23), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(56), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(138), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [271] = 4,
    ACTIONS(143), 1,
      aux_sym_perl_code_token2,
    STATE(5), 1,
      aux_sym_perl_code_repeat1,
    STATE(16), 1,
      sym_perl_code,
    ACTIONS(141), 2,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token3,
  [285] = 4,
    ACTIONS(143), 1,
      aux_sym_perl_code_token2,
    STATE(5), 1,
      aux_sym_perl_code_repeat1,
    STATE(14), 1,
      sym_perl_code,
    ACTIONS(141), 2,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token3,
  [299] = 4,
    ACTIONS(66), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(145), 1,
      aux_sym_perl_code_token1,
    STATE(27), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(147), 2,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [313] = 4,
    ACTIONS(56), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(149), 1,
      aux_sym_perl_code_token1,
    STATE(27), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(152), 2,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [327] = 4,
    ACTIONS(143), 1,
      aux_sym_perl_code_token2,
    STATE(5), 1,
      aux_sym_perl_code_repeat1,
    STATE(17), 1,
      sym_perl_code,
    ACTIONS(141), 2,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token3,
  [341] = 4,
    ACTIONS(143), 1,
      aux_sym_perl_code_token2,
    STATE(5), 1,
      aux_sym_perl_code_repeat1,
    STATE(15), 1,
      sym_perl_code,
    ACTIONS(141), 2,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token3,
  [355] = 1,
    ACTIONS(155), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [360] = 1,
    ACTIONS(157), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [365] = 1,
    ACTIONS(159), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [370] = 1,
    ACTIONS(161), 1,
      anon_sym_PERCENT_GT,
  [374] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 15,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 45,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 135,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 165,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 196,
  [SMALL_STATE(20)] = 212,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 245,
  [SMALL_STATE(23)] = 258,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 285,
  [SMALL_STATE(26)] = 299,
  [SMALL_STATE(27)] = 313,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 355,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 370,
  [SMALL_STATE(34)] = 374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(19),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(21),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(25),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(29),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(24),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_perl_code_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_perl_code_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_perl_code, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_perl_code, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_code, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_code, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_comment, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_comment, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression_escaped, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression_escaped, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression_escaped, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression_escaped, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_code, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_code, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_comment, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_comment, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_perl_code, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_perl_code, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_perl_expression, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_perl_expression, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_perl_expression_escaped, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_perl_expression_escaped, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_comment, 2, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_comment, 2, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(23),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(27),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
