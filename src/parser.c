#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  aux_sym_statement_token1 = 2,
  aux_sym_statement_token2 = 3,
  anon_sym_loopCount = 4,
  anon_sym_EQ = 5,
  anon_sym_frames = 6,
  anon_sym_introFrames = 7,
  aux_sym_framelist_token1 = 8,
  sym_frameRepeat = 9,
  sym_number = 10,
  sym__eof = 11,
  sym_document = 12,
  sym_statement = 13,
  sym_loopCount = 14,
  sym_frames = 15,
  sym_introFrames = 16,
  sym_framelist = 17,
  aux_sym_document_repeat1 = 18,
  aux_sym_framelist_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [aux_sym_statement_token1] = "statement_token1",
  [aux_sym_statement_token2] = "statement_token2",
  [anon_sym_loopCount] = "loopCount",
  [anon_sym_EQ] = "=",
  [anon_sym_frames] = "frames",
  [anon_sym_introFrames] = "introFrames",
  [aux_sym_framelist_token1] = "framelist_token1",
  [sym_frameRepeat] = "frameRepeat",
  [sym_number] = "number",
  [sym__eof] = "_eof",
  [sym_document] = "document",
  [sym_statement] = "statement",
  [sym_loopCount] = "loopCount",
  [sym_frames] = "frames",
  [sym_introFrames] = "introFrames",
  [sym_framelist] = "framelist",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_framelist_repeat1] = "framelist_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [aux_sym_statement_token2] = aux_sym_statement_token2,
  [anon_sym_loopCount] = anon_sym_loopCount,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_frames] = anon_sym_frames,
  [anon_sym_introFrames] = anon_sym_introFrames,
  [aux_sym_framelist_token1] = aux_sym_framelist_token1,
  [sym_frameRepeat] = sym_frameRepeat,
  [sym_number] = sym_number,
  [sym__eof] = sym__eof,
  [sym_document] = sym_document,
  [sym_statement] = sym_statement,
  [sym_loopCount] = sym_loopCount,
  [sym_frames] = sym_frames,
  [sym_introFrames] = sym_introFrames,
  [sym_framelist] = sym_framelist,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_framelist_repeat1] = aux_sym_framelist_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_loopCount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_introFrames] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_framelist_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_frameRepeat] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loopCount] = {
    .visible = true,
    .named = true,
  },
  [sym_frames] = {
    .visible = true,
    .named = true,
  },
  [sym_introFrames] = {
    .visible = true,
    .named = true,
  },
  [sym_framelist] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_framelist_repeat1] = {
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
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (eof) ADVANCE(28);
      if ((!eof && lookahead == 00)) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '=') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 26:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        0, 39,
        '\n', 31,
        '\r', 2,
        ' ', 30,
        ',', 36,
        '=', 33,
        'f', 18,
        'i', 11,
        'l', 16,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == ',') ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_statement_token2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_loopCount);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_frames);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_introFrames);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_framelist_token1);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_frameRepeat);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__eof);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 27},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [aux_sym_statement_token1] = ACTIONS(1),
    [aux_sym_statement_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_framelist_token1] = ACTIONS(1),
    [sym_frameRepeat] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(40),
    [aux_sym_document_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_loopCount,
    ACTIONS(9), 1,
      anon_sym_frames,
    ACTIONS(11), 1,
      anon_sym_introFrames,
    STATE(3), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(16), 3,
      sym_loopCount,
      sym_frames,
      sym_introFrames,
  [22] = 6,
    ACTIONS(7), 1,
      anon_sym_loopCount,
    ACTIONS(9), 1,
      anon_sym_frames,
    ACTIONS(11), 1,
      anon_sym_introFrames,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(16), 3,
      sym_loopCount,
      sym_frames,
      sym_introFrames,
  [44] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_loopCount,
    ACTIONS(20), 1,
      anon_sym_frames,
    ACTIONS(23), 1,
      anon_sym_introFrames,
    STATE(4), 2,
      sym_statement,
      aux_sym_document_repeat1,
    STATE(16), 3,
      sym_loopCount,
      sym_frames,
      sym_introFrames,
  [66] = 4,
    ACTIONS(26), 1,
      aux_sym_statement_token1,
    ACTIONS(30), 1,
      aux_sym_framelist_token1,
    STATE(5), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(28), 2,
      aux_sym_statement_token2,
      sym__eof,
  [80] = 4,
    ACTIONS(33), 1,
      aux_sym_statement_token1,
    ACTIONS(37), 1,
      aux_sym_framelist_token1,
    STATE(5), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(35), 2,
      aux_sym_statement_token2,
      sym__eof,
  [94] = 4,
    ACTIONS(37), 1,
      aux_sym_framelist_token1,
    ACTIONS(39), 1,
      aux_sym_statement_token1,
    STATE(6), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(41), 2,
      aux_sym_statement_token2,
      sym__eof,
  [108] = 4,
    ACTIONS(43), 1,
      aux_sym_statement_token1,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    STATE(25), 1,
      sym_framelist,
  [121] = 2,
    ACTIONS(26), 1,
      aux_sym_statement_token1,
    ACTIONS(28), 3,
      aux_sym_statement_token2,
      aux_sym_framelist_token1,
      sym__eof,
  [130] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [137] = 4,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(51), 1,
      aux_sym_statement_token1,
    STATE(20), 1,
      sym_framelist,
  [150] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [157] = 4,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(55), 1,
      aux_sym_statement_token1,
    STATE(24), 1,
      sym_framelist,
  [170] = 4,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(57), 1,
      aux_sym_statement_token1,
    STATE(27), 1,
      sym_framelist,
  [183] = 1,
    ACTIONS(59), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [189] = 2,
    ACTIONS(61), 1,
      aux_sym_statement_token1,
    ACTIONS(63), 2,
      aux_sym_statement_token2,
      sym__eof,
  [197] = 1,
    ACTIONS(65), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [203] = 1,
    ACTIONS(67), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [209] = 1,
    ACTIONS(69), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [215] = 1,
    ACTIONS(71), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [221] = 1,
    ACTIONS(73), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [227] = 3,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    STATE(25), 1,
      sym_framelist,
  [237] = 3,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    STATE(17), 1,
      sym_framelist,
  [247] = 1,
    ACTIONS(75), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [253] = 1,
    ACTIONS(77), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [259] = 3,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    STATE(20), 1,
      sym_framelist,
  [269] = 1,
    ACTIONS(79), 3,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      sym__eof,
  [275] = 3,
    ACTIONS(45), 1,
      sym_frameRepeat,
    ACTIONS(47), 1,
      sym_number,
    STATE(18), 1,
      sym_framelist,
  [285] = 2,
    ACTIONS(81), 1,
      aux_sym_statement_token1,
    ACTIONS(83), 1,
      anon_sym_EQ,
  [292] = 2,
    ACTIONS(85), 1,
      sym_frameRepeat,
    ACTIONS(87), 1,
      sym_number,
  [299] = 2,
    ACTIONS(89), 1,
      aux_sym_statement_token1,
    ACTIONS(91), 1,
      sym_number,
  [306] = 2,
    ACTIONS(93), 1,
      aux_sym_statement_token1,
    ACTIONS(95), 1,
      sym_number,
  [313] = 2,
    ACTIONS(97), 1,
      aux_sym_statement_token1,
    ACTIONS(99), 1,
      anon_sym_EQ,
  [320] = 2,
    ACTIONS(101), 1,
      aux_sym_statement_token1,
    ACTIONS(103), 1,
      anon_sym_EQ,
  [327] = 1,
    ACTIONS(105), 2,
      aux_sym_statement_token2,
      sym__eof,
  [332] = 1,
    ACTIONS(107), 1,
      sym_number,
  [336] = 1,
    ACTIONS(109), 1,
      anon_sym_EQ,
  [340] = 1,
    ACTIONS(111), 1,
      anon_sym_EQ,
  [344] = 1,
    ACTIONS(113), 1,
      anon_sym_EQ,
  [348] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [352] = 1,
    ACTIONS(95), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 130,
  [SMALL_STATE(11)] = 137,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 197,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 209,
  [SMALL_STATE(20)] = 215,
  [SMALL_STATE(21)] = 221,
  [SMALL_STATE(22)] = 227,
  [SMALL_STATE(23)] = 237,
  [SMALL_STATE(24)] = 247,
  [SMALL_STATE(25)] = 253,
  [SMALL_STATE(26)] = 259,
  [SMALL_STATE(27)] = 269,
  [SMALL_STATE(28)] = 275,
  [SMALL_STATE(29)] = 285,
  [SMALL_STATE(30)] = 292,
  [SMALL_STATE(31)] = 299,
  [SMALL_STATE(32)] = 306,
  [SMALL_STATE(33)] = 313,
  [SMALL_STATE(34)] = 320,
  [SMALL_STATE(35)] = 327,
  [SMALL_STATE(36)] = 332,
  [SMALL_STATE(37)] = 336,
  [SMALL_STATE(38)] = 340,
  [SMALL_STATE(39)] = 344,
  [SMALL_STATE(40)] = 348,
  [SMALL_STATE(41)] = 352,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_framelist_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_framelist_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_framelist_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_framelist, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_framelist, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_framelist, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_framelist, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 5, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_playdateanimation(void) {
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
