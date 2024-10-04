#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  anon_sym_A = 2,
  anon_sym_M = 3,
  anon_sym_D = 4,
  anon_sym_SPACE = 5,
  aux_sym_filepath_token1 = 6,
  anon_sym_JJ_COLON = 7,
  aux_sym__change_comment_token1 = 8,
  aux_sym__text_comment_token1 = 9,
  aux_sym_text_token1 = 10,
  anon_sym_J = 11,
  anon_sym_JJ = 12,
  aux_sym_text_token2 = 13,
  sym_document = 14,
  sym_change = 15,
  sym_filepath = 16,
  sym_comment = 17,
  sym__change_comment = 18,
  sym__text_comment = 19,
  sym_text = 20,
  aux_sym_document_repeat1 = 21,
  alias_sym_comment_text = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_A] = "A",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_SPACE] = " ",
  [aux_sym_filepath_token1] = "filepath_token1",
  [anon_sym_JJ_COLON] = "JJ:",
  [aux_sym__change_comment_token1] = "_change_comment_token1",
  [aux_sym__text_comment_token1] = "_text_comment_token1",
  [aux_sym_text_token1] = "text_token1",
  [anon_sym_J] = "J",
  [anon_sym_JJ] = "JJ",
  [aux_sym_text_token2] = "text_token2",
  [sym_document] = "document",
  [sym_change] = "change",
  [sym_filepath] = "filepath",
  [sym_comment] = "comment",
  [sym__change_comment] = "_change_comment",
  [sym__text_comment] = "_text_comment",
  [sym_text] = "text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [alias_sym_comment_text] = "comment_text",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [aux_sym_filepath_token1] = aux_sym_filepath_token1,
  [anon_sym_JJ_COLON] = anon_sym_JJ_COLON,
  [aux_sym__change_comment_token1] = aux_sym__change_comment_token1,
  [aux_sym__text_comment_token1] = aux_sym__text_comment_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [anon_sym_J] = anon_sym_J,
  [anon_sym_JJ] = anon_sym_JJ,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [sym_document] = sym_document,
  [sym_change] = sym_change,
  [sym_filepath] = sym_filepath,
  [sym_comment] = sym_comment,
  [sym__change_comment] = sym__change_comment,
  [sym__text_comment] = sym__text_comment,
  [sym_text] = sym_text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [alias_sym_comment_text] = alias_sym_comment_text,
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
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_filepath_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_JJ_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__change_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_J] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JJ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_change] = {
    .visible = true,
    .named = true,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__change_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__text_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment_text] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_type = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment_text,
  },
  [2] = {
    [2] = alias_sym_comment_text,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\n', 8,
        '\r', 17,
        ' ', 12,
        ':', 16,
        'A', 9,
        'D', 11,
        'J', 20,
        'M', 10,
      );
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != 'A' &&
          lookahead != 'D' &&
          lookahead != 'M') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == 'J') ADVANCE(21);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_JJ_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__change_comment_token1);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_J);
      if (lookahead == 'J') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_JJ);
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [aux_sym__text_comment_token1] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [anon_sym_J] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(14),
    [sym_comment] = STATE(21),
    [sym_text] = STATE(21),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [anon_sym_JJ_COLON] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [anon_sym_J] = ACTIONS(11),
    [anon_sym_JJ] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_document_token1,
    ACTIONS(20), 1,
      anon_sym_JJ_COLON,
    ACTIONS(23), 1,
      aux_sym_text_token1,
    ACTIONS(26), 1,
      anon_sym_J,
    ACTIONS(29), 1,
      anon_sym_JJ,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(21), 2,
      sym_comment,
      sym_text,
  [26] = 8,
    ACTIONS(7), 1,
      anon_sym_JJ_COLON,
    ACTIONS(9), 1,
      aux_sym_text_token1,
    ACTIONS(11), 1,
      anon_sym_J,
    ACTIONS(13), 1,
      anon_sym_JJ,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_document_token1,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(21), 2,
      sym_comment,
      sym_text,
  [52] = 2,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_JJ_COLON,
    ACTIONS(36), 3,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [63] = 4,
    ACTIONS(38), 1,
      aux_sym_document_token1,
    ACTIONS(40), 1,
      aux_sym__change_comment_token1,
    ACTIONS(42), 1,
      aux_sym__text_comment_token1,
    STATE(13), 2,
      sym__change_comment,
      sym__text_comment,
  [77] = 3,
    ACTIONS(46), 1,
      aux_sym__text_comment_token1,
    STATE(18), 1,
      sym_change,
    ACTIONS(44), 3,
      anon_sym_A,
      anon_sym_M,
      anon_sym_D,
  [89] = 2,
    ACTIONS(48), 1,
      aux_sym_document_token1,
    ACTIONS(50), 1,
      aux_sym_filepath_token1,
  [96] = 2,
    ACTIONS(48), 1,
      aux_sym_document_token1,
    ACTIONS(52), 1,
      aux_sym_text_token1,
  [103] = 2,
    ACTIONS(48), 1,
      aux_sym_document_token1,
    ACTIONS(52), 1,
      aux_sym_text_token2,
  [110] = 2,
    ACTIONS(54), 1,
      aux_sym_filepath_token1,
    STATE(24), 1,
      sym_filepath,
  [117] = 2,
    ACTIONS(56), 1,
      aux_sym_document_token1,
    ACTIONS(58), 1,
      aux_sym_filepath_token1,
  [124] = 1,
    ACTIONS(56), 1,
      aux_sym_document_token1,
  [128] = 1,
    ACTIONS(60), 1,
      aux_sym_document_token1,
  [132] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(64), 1,
      aux_sym_filepath_token1,
  [140] = 1,
    ACTIONS(66), 1,
      anon_sym_SPACE,
  [144] = 1,
    ACTIONS(68), 1,
      aux_sym_filepath_token1,
  [148] = 1,
    ACTIONS(70), 1,
      aux_sym_document_token1,
  [152] = 1,
    ACTIONS(72), 1,
      aux_sym_document_token1,
  [156] = 1,
    ACTIONS(74), 1,
      aux_sym_document_token1,
  [160] = 1,
    ACTIONS(76), 1,
      aux_sym_document_token1,
  [164] = 1,
    ACTIONS(78), 1,
      aux_sym_document_token1,
  [168] = 1,
    ACTIONS(80), 1,
      aux_sym_document_token1,
  [172] = 1,
    ACTIONS(82), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 152,
  [SMALL_STATE(20)] = 156,
  [SMALL_STATE(21)] = 160,
  [SMALL_STATE(22)] = 164,
  [SMALL_STATE(23)] = 168,
  [SMALL_STATE(24)] = 172,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_comment, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_comment, 2, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_comment, 3, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, 0, 3),
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

TS_PUBLIC const TSLanguage *tree_sitter_jjdescription(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
