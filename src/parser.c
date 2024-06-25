#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_animationtxt_token1 = 1,
  anon_sym_loopCount = 2,
  aux_sym_loopCount_token1 = 3,
  anon_sym_EQ = 4,
  anon_sym_frames = 5,
  anon_sym_introFrames = 6,
  anon_sym_COMMA = 7,
  aux_sym_frameNonRepeat_token1 = 8,
  sym_frameRepeat = 9,
  sym_animationtxt = 10,
  sym_loopCount = 11,
  sym_frames = 12,
  sym_introFrames = 13,
  sym_framelist = 14,
  sym_frameNonRepeat = 15,
  sym_positiveInt = 16,
  aux_sym_animationtxt_repeat1 = 17,
  aux_sym_framelist_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_animationtxt_token1] = "animationtxt_token1",
  [anon_sym_loopCount] = "loopCount",
  [aux_sym_loopCount_token1] = "loopCount_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_frames] = "frames",
  [anon_sym_introFrames] = "introFrames",
  [anon_sym_COMMA] = ",",
  [aux_sym_frameNonRepeat_token1] = "frameNonRepeat_token1",
  [sym_frameRepeat] = "frameRepeat",
  [sym_animationtxt] = "animationtxt",
  [sym_loopCount] = "loopCount",
  [sym_frames] = "frames",
  [sym_introFrames] = "introFrames",
  [sym_framelist] = "framelist",
  [sym_frameNonRepeat] = "frameNonRepeat",
  [sym_positiveInt] = "positiveInt",
  [aux_sym_animationtxt_repeat1] = "animationtxt_repeat1",
  [aux_sym_framelist_repeat1] = "framelist_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_animationtxt_token1] = aux_sym_animationtxt_token1,
  [anon_sym_loopCount] = anon_sym_loopCount,
  [aux_sym_loopCount_token1] = aux_sym_loopCount_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_frames] = anon_sym_frames,
  [anon_sym_introFrames] = anon_sym_introFrames,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_frameNonRepeat_token1] = aux_sym_frameNonRepeat_token1,
  [sym_frameRepeat] = sym_frameRepeat,
  [sym_animationtxt] = sym_animationtxt,
  [sym_loopCount] = sym_loopCount,
  [sym_frames] = sym_frames,
  [sym_introFrames] = sym_introFrames,
  [sym_framelist] = sym_framelist,
  [sym_frameNonRepeat] = sym_frameNonRepeat,
  [sym_positiveInt] = sym_positiveInt,
  [aux_sym_animationtxt_repeat1] = aux_sym_animationtxt_repeat1,
  [aux_sym_framelist_repeat1] = aux_sym_framelist_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_animationtxt_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_loopCount] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_loopCount_token1] = {
    .visible = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_frameNonRepeat_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_frameRepeat] = {
    .visible = true,
    .named = true,
  },
  [sym_animationtxt] = {
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
  [sym_frameNonRepeat] = {
    .visible = true,
    .named = true,
  },
  [sym_positiveInt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_animationtxt_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '\n', 27,
        '\r', 1,
        ' ', 29,
        ',', 33,
        '=', 30,
        'f', 17,
        'i', 10,
        'l', 15,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'F') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 25:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_animationtxt_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_loopCount);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_loopCount_token1);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_frames);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_introFrames);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_frameNonRepeat_token1);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_frameRepeat);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_animationtxt_token1] = ACTIONS(1),
    [anon_sym_loopCount] = ACTIONS(1),
    [aux_sym_loopCount_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_frames] = ACTIONS(1),
    [anon_sym_introFrames] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_frameNonRepeat_token1] = ACTIONS(1),
    [sym_frameRepeat] = ACTIONS(1),
  },
  [1] = {
    [sym_animationtxt] = STATE(59),
    [sym_loopCount] = STATE(2),
    [sym_frames] = STATE(2),
    [sym_introFrames] = STATE(2),
    [aux_sym_animationtxt_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_animationtxt_token1] = ACTIONS(5),
    [anon_sym_loopCount] = ACTIONS(7),
    [anon_sym_frames] = ACTIONS(9),
    [anon_sym_introFrames] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_loopCount,
    ACTIONS(9), 1,
      anon_sym_frames,
    ACTIONS(11), 1,
      anon_sym_introFrames,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_animationtxt_token1,
    STATE(3), 4,
      sym_loopCount,
      sym_frames,
      sym_introFrames,
      aux_sym_animationtxt_repeat1,
  [22] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(22), 1,
      anon_sym_loopCount,
    ACTIONS(25), 1,
      anon_sym_frames,
    ACTIONS(28), 1,
      anon_sym_introFrames,
    STATE(3), 4,
      sym_loopCount,
      sym_frames,
      sym_introFrames,
      aux_sym_animationtxt_repeat1,
  [44] = 1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [52] = 1,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [60] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [68] = 1,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [76] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [84] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [92] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [100] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [108] = 5,
    ACTIONS(47), 1,
      aux_sym_loopCount_token1,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(48), 1,
      sym_framelist,
  [124] = 1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [132] = 5,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    ACTIONS(55), 1,
      aux_sym_loopCount_token1,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(47), 1,
      sym_framelist,
  [148] = 1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [156] = 1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [164] = 1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      aux_sym_animationtxt_token1,
      anon_sym_loopCount,
      anon_sym_frames,
      anon_sym_introFrames,
  [172] = 5,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    ACTIONS(63), 1,
      aux_sym_loopCount_token1,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(38), 1,
      sym_framelist,
  [188] = 5,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    ACTIONS(65), 1,
      aux_sym_loopCount_token1,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(37), 1,
      sym_framelist,
  [204] = 4,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(37), 1,
      sym_framelist,
  [217] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(67), 2,
      aux_sym_animationtxt_token1,
      aux_sym_loopCount_token1,
  [228] = 4,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(38), 1,
      sym_framelist,
  [241] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(71), 2,
      aux_sym_animationtxt_token1,
      aux_sym_loopCount_token1,
  [252] = 4,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(43), 1,
      sym_framelist,
  [265] = 4,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(51), 1,
      sym_frameRepeat,
    STATE(21), 1,
      sym_frameNonRepeat,
    STATE(35), 1,
      sym_framelist,
  [278] = 4,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(76), 1,
      aux_sym_loopCount_token1,
    ACTIONS(78), 1,
      sym_frameRepeat,
    STATE(28), 1,
      sym_frameNonRepeat,
  [291] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_framelist_repeat1,
    ACTIONS(80), 2,
      aux_sym_animationtxt_token1,
      aux_sym_loopCount_token1,
  [302] = 1,
    ACTIONS(71), 3,
      aux_sym_animationtxt_token1,
      aux_sym_loopCount_token1,
      anon_sym_COMMA,
  [308] = 1,
    ACTIONS(82), 3,
      aux_sym_animationtxt_token1,
      aux_sym_loopCount_token1,
      anon_sym_COMMA,
  [314] = 3,
    ACTIONS(49), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(84), 1,
      sym_frameRepeat,
    STATE(31), 1,
      sym_frameNonRepeat,
  [324] = 1,
    ACTIONS(86), 3,
      aux_sym_animationtxt_token1,
      aux_sym_loopCount_token1,
      anon_sym_COMMA,
  [330] = 3,
    ACTIONS(88), 1,
      aux_sym_loopCount_token1,
    ACTIONS(90), 1,
      aux_sym_frameNonRepeat_token1,
    STATE(44), 1,
      sym_positiveInt,
  [340] = 3,
    ACTIONS(90), 1,
      aux_sym_frameNonRepeat_token1,
    ACTIONS(92), 1,
      aux_sym_loopCount_token1,
    STATE(45), 1,
      sym_positiveInt,
  [350] = 2,
    ACTIONS(90), 1,
      aux_sym_frameNonRepeat_token1,
    STATE(44), 1,
      sym_positiveInt,
  [357] = 2,
    ACTIONS(94), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(96), 1,
      aux_sym_loopCount_token1,
  [364] = 2,
    ACTIONS(98), 1,
      aux_sym_loopCount_token1,
    ACTIONS(100), 1,
      anon_sym_EQ,
  [371] = 2,
    ACTIONS(102), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(104), 1,
      aux_sym_loopCount_token1,
  [378] = 2,
    ACTIONS(106), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(108), 1,
      aux_sym_loopCount_token1,
  [385] = 2,
    ACTIONS(110), 1,
      aux_sym_loopCount_token1,
    ACTIONS(112), 1,
      anon_sym_EQ,
  [392] = 2,
    ACTIONS(114), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(116), 1,
      aux_sym_loopCount_token1,
  [399] = 2,
    ACTIONS(118), 1,
      aux_sym_loopCount_token1,
    ACTIONS(120), 1,
      anon_sym_EQ,
  [406] = 1,
    ACTIONS(122), 2,
      aux_sym_animationtxt_token1,
      aux_sym_loopCount_token1,
  [411] = 2,
    ACTIONS(124), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(126), 1,
      aux_sym_loopCount_token1,
  [418] = 2,
    ACTIONS(128), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(130), 1,
      aux_sym_loopCount_token1,
  [425] = 2,
    ACTIONS(132), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(134), 1,
      aux_sym_loopCount_token1,
  [432] = 2,
    ACTIONS(90), 1,
      aux_sym_frameNonRepeat_token1,
    STATE(40), 1,
      sym_positiveInt,
  [439] = 2,
    ACTIONS(136), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(138), 1,
      aux_sym_loopCount_token1,
  [446] = 2,
    ACTIONS(140), 1,
      aux_sym_animationtxt_token1,
    ACTIONS(142), 1,
      aux_sym_loopCount_token1,
  [453] = 1,
    ACTIONS(128), 1,
      aux_sym_animationtxt_token1,
  [457] = 1,
    ACTIONS(102), 1,
      aux_sym_animationtxt_token1,
  [461] = 1,
    ACTIONS(94), 1,
      aux_sym_animationtxt_token1,
  [465] = 1,
    ACTIONS(124), 1,
      aux_sym_animationtxt_token1,
  [469] = 1,
    ACTIONS(144), 1,
      aux_sym_animationtxt_token1,
  [473] = 1,
    ACTIONS(146), 1,
      anon_sym_EQ,
  [477] = 1,
    ACTIONS(148), 1,
      aux_sym_animationtxt_token1,
  [481] = 1,
    ACTIONS(150), 1,
      anon_sym_EQ,
  [485] = 1,
    ACTIONS(152), 1,
      anon_sym_EQ,
  [489] = 1,
    ACTIONS(154), 1,
      aux_sym_animationtxt_token1,
  [493] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [497] = 1,
    ACTIONS(114), 1,
      aux_sym_animationtxt_token1,
  [501] = 1,
    ACTIONS(106), 1,
      aux_sym_animationtxt_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 108,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 164,
  [SMALL_STATE(18)] = 172,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 217,
  [SMALL_STATE(22)] = 228,
  [SMALL_STATE(23)] = 241,
  [SMALL_STATE(24)] = 252,
  [SMALL_STATE(25)] = 265,
  [SMALL_STATE(26)] = 278,
  [SMALL_STATE(27)] = 291,
  [SMALL_STATE(28)] = 302,
  [SMALL_STATE(29)] = 308,
  [SMALL_STATE(30)] = 314,
  [SMALL_STATE(31)] = 324,
  [SMALL_STATE(32)] = 330,
  [SMALL_STATE(33)] = 340,
  [SMALL_STATE(34)] = 350,
  [SMALL_STATE(35)] = 357,
  [SMALL_STATE(36)] = 364,
  [SMALL_STATE(37)] = 371,
  [SMALL_STATE(38)] = 378,
  [SMALL_STATE(39)] = 385,
  [SMALL_STATE(40)] = 392,
  [SMALL_STATE(41)] = 399,
  [SMALL_STATE(42)] = 406,
  [SMALL_STATE(43)] = 411,
  [SMALL_STATE(44)] = 418,
  [SMALL_STATE(45)] = 425,
  [SMALL_STATE(46)] = 432,
  [SMALL_STATE(47)] = 439,
  [SMALL_STATE(48)] = 446,
  [SMALL_STATE(49)] = 453,
  [SMALL_STATE(50)] = 457,
  [SMALL_STATE(51)] = 461,
  [SMALL_STATE(52)] = 465,
  [SMALL_STATE(53)] = 469,
  [SMALL_STATE(54)] = 473,
  [SMALL_STATE(55)] = 477,
  [SMALL_STATE(56)] = 481,
  [SMALL_STATE(57)] = 485,
  [SMALL_STATE(58)] = 489,
  [SMALL_STATE(59)] = 493,
  [SMALL_STATE(60)] = 497,
  [SMALL_STATE(61)] = 501,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animationtxt, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_animationtxt, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_animationtxt_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animationtxt_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animationtxt_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animationtxt_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_animationtxt_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 4, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 7, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 7, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 7, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 6, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 6, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 6, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loopCount, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introFrames, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frames, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_framelist, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_framelist_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_framelist_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_framelist, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frameNonRepeat, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_framelist_repeat1, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positiveInt, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
