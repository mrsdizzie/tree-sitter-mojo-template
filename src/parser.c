#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 1
#define TOKEN_COUNT 17
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
  aux_sym_perl_code_token4 = 14,
  aux_sym_short_perl_code_token1 = 15,
  sym_content = 16,
  sym_template = 17,
  sym_bracketed_perl_code = 18,
  sym_bracketed_perl_expression = 19,
  sym_bracketed_perl_expression_escaped = 20,
  sym_bracketed_comment = 21,
  sym_shorthand_perl_code = 22,
  sym_shorthand_perl_expression = 23,
  sym_shorthand_perl_expression_escaped = 24,
  sym_shorthand_comment = 25,
  sym_perl_code = 26,
  sym_short_perl_code = 27,
  aux_sym_template_repeat1 = 28,
  aux_sym_perl_code_repeat1 = 29,
  aux_sym_short_perl_code_repeat1 = 30,
  alias_sym_comment = 31,
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
  [aux_sym_perl_code_token4] = "perl_code_token4",
  [aux_sym_short_perl_code_token1] = "short_perl_code_token1",
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
  [sym_short_perl_code] = "short_perl_code",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_perl_code_repeat1] = "perl_code_repeat1",
  [aux_sym_short_perl_code_repeat1] = "short_perl_code_repeat1",
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
  [aux_sym_perl_code_token4] = aux_sym_perl_code_token4,
  [aux_sym_short_perl_code_token1] = aux_sym_short_perl_code_token1,
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
  [sym_short_perl_code] = sym_short_perl_code,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_perl_code_repeat1] = aux_sym_perl_code_repeat1,
  [aux_sym_short_perl_code_repeat1] = aux_sym_short_perl_code_repeat1,
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
  [aux_sym_perl_code_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_short_perl_code_token1] = {
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
  [sym_short_perl_code] = {
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
  [aux_sym_short_perl_code_repeat1] = {
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
  [22] = 22,
  [23] = 23,
  [24] = 5,
  [25] = 4,
  [26] = 26,
  [27] = 5,
  [28] = 4,
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
      ACCEPT_TOKEN(sym_content);
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENT_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PERCENT_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_perl_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_perl_code_token2);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_perl_code_token2);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_perl_code_token3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_perl_code_token4);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_short_perl_code_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_short_perl_code_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_short_perl_code_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_short_perl_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_content);
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_content);
      if (eof) ADVANCE(9);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
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
    [aux_sym_perl_code_token4] = ACTIONS(1),
    [sym_content] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(36),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(63), 1,
      aux_sym_perl_code_token3,
    STATE(4), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(60), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token4,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(58), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [26] = 5,
    ACTIONS(72), 1,
      aux_sym_perl_code_token3,
    STATE(4), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(70), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token4,
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
  [52] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym_short_perl_code_token1,
    STATE(6), 1,
      aux_sym_short_perl_code_repeat1,
    ACTIONS(76), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
      sym_content,
  [73] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym_short_perl_code_token1,
    STATE(6), 1,
      aux_sym_short_perl_code_repeat1,
    ACTIONS(83), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
      sym_content,
  [94] = 2,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(89), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [109] = 2,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(93), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [124] = 2,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(97), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [139] = 2,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(101), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [154] = 2,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(105), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [169] = 2,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(109), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [184] = 2,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(113), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [199] = 2,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(117), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [214] = 2,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(121), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [229] = 2,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(125), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [244] = 2,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(129), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [259] = 2,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_PERCENT_EQ_EQ,
      anon_sym_PERCENT_POUND,
    ACTIONS(133), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_PERCENT,
      anon_sym_PERCENT_EQ,
      sym_content,
  [274] = 5,
    ACTIONS(139), 1,
      aux_sym_perl_code_token4,
    STATE(24), 1,
      aux_sym_perl_code_repeat1,
    STATE(32), 1,
      sym_perl_code,
    ACTIONS(135), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(137), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [293] = 5,
    ACTIONS(139), 1,
      aux_sym_perl_code_token4,
    STATE(24), 1,
      aux_sym_perl_code_repeat1,
    STATE(34), 1,
      sym_perl_code,
    ACTIONS(141), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(137), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [312] = 5,
    ACTIONS(139), 1,
      aux_sym_perl_code_token4,
    STATE(24), 1,
      aux_sym_perl_code_repeat1,
    STATE(33), 1,
      sym_perl_code,
    ACTIONS(143), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(137), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [331] = 5,
    ACTIONS(145), 1,
      anon_sym_PERCENT_GT,
    STATE(27), 1,
      aux_sym_perl_code_repeat1,
    STATE(35), 1,
      sym_perl_code,
    ACTIONS(147), 2,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token4,
    ACTIONS(149), 2,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [349] = 4,
    ACTIONS(153), 1,
      aux_sym_perl_code_token4,
    STATE(25), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(66), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(151), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [365] = 4,
    ACTIONS(158), 1,
      aux_sym_perl_code_token4,
    STATE(25), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(56), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
    ACTIONS(155), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [381] = 4,
    ACTIONS(163), 1,
      aux_sym_perl_code_token2,
    STATE(5), 1,
      aux_sym_perl_code_repeat1,
    STATE(19), 1,
      sym_perl_code,
    ACTIONS(161), 3,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token3,
      aux_sym_perl_code_token4,
  [396] = 4,
    ACTIONS(66), 1,
      anon_sym_PERCENT_GT,
    STATE(28), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(165), 2,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token4,
    ACTIONS(167), 2,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [411] = 4,
    ACTIONS(56), 1,
      anon_sym_PERCENT_GT,
    STATE(28), 1,
      aux_sym_perl_code_repeat1,
    ACTIONS(169), 2,
      aux_sym_perl_code_token1,
      aux_sym_perl_code_token4,
    ACTIONS(172), 2,
      aux_sym_perl_code_token2,
      aux_sym_perl_code_token3,
  [426] = 3,
    ACTIONS(175), 1,
      aux_sym_short_perl_code_token1,
    STATE(7), 1,
      aux_sym_short_perl_code_repeat1,
    STATE(16), 1,
      sym_short_perl_code,
  [436] = 3,
    ACTIONS(175), 1,
      aux_sym_short_perl_code_token1,
    STATE(7), 1,
      aux_sym_short_perl_code_repeat1,
    STATE(18), 1,
      sym_short_perl_code,
  [446] = 3,
    ACTIONS(175), 1,
      aux_sym_short_perl_code_token1,
    STATE(7), 1,
      aux_sym_short_perl_code_repeat1,
    STATE(17), 1,
      sym_short_perl_code,
  [456] = 1,
    ACTIONS(177), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [461] = 1,
    ACTIONS(179), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [466] = 1,
    ACTIONS(181), 2,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [471] = 1,
    ACTIONS(183), 1,
      anon_sym_PERCENT_GT,
  [475] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 169,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 259,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 293,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 331,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 365,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 411,
  [SMALL_STATE(29)] = 426,
  [SMALL_STATE(30)] = 436,
  [SMALL_STATE(31)] = 446,
  [SMALL_STATE(32)] = 456,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 466,
  [SMALL_STATE(35)] = 471,
  [SMALL_STATE(36)] = 475,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(21),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(23),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(29),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(31),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(26),
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
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_short_perl_code_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_short_perl_code_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_short_perl_code_repeat1, 2), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_perl_code, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_perl_code, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_code, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_code, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_comment, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_comment, 3, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression_escaped, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression_escaped, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_expression_escaped, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_expression_escaped, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_comment, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_comment, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_perl_code, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_perl_code, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_perl_code, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_perl_code, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_perl_expression, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_perl_expression, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_perl_expression_escaped, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_perl_expression_escaped, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_comment, 2, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_comment, 2, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(25),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(28),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_perl_code_repeat1, 2), SHIFT_REPEAT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
