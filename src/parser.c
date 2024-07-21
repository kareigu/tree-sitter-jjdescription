#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 1
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_A = 1,
  anon_sym_M = 2,
  anon_sym_D = 3,
  anon_sym_SPACE = 4,
  aux_sym_filepath_token1 = 5,
  anon_sym_JJ_COLON = 6,
  aux_sym__change_comment_token1 = 7,
  aux_sym__text_comment_token1 = 8,
  aux_sym_text_token1 = 9,
  sym_document = 10,
  sym_change = 11,
  sym_filepath = 12,
  sym_comment = 13,
  sym__change_comment = 14,
  sym__text_comment = 15,
  sym_text = 16,
  aux_sym_document_repeat1 = 17,
  alias_sym_comment_text = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_A] = "A",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_SPACE] = " ",
  [aux_sym_filepath_token1] = "filepath_token1",
  [anon_sym_JJ_COLON] = "JJ:",
  [aux_sym__change_comment_token1] = "_change_comment_token1",
  [aux_sym__text_comment_token1] = "_text_comment_token1",
  [aux_sym_text_token1] = "text_token1",
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
  [anon_sym_A] = anon_sym_A,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [aux_sym_filepath_token1] = aux_sym_filepath_token1,
  [anon_sym_JJ_COLON] = anon_sym_JJ_COLON,
  [aux_sym__change_comment_token1] = aux_sym__change_comment_token1,
  [aux_sym__text_comment_token1] = aux_sym__text_comment_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(8);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'J') ADVANCE(3);
      if (lookahead == 'M') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(8);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'M') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'J') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == 'J') ADVANCE(3);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\n', 16,
        '\r', 16,
        ' ', 14,
        'J', 17,
        0x0b, 14,
        '\f', 14,
        'A', 19,
        'D', 19,
        'M', 19,
      );
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_JJ_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__change_comment_token1);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == 'J') ADVANCE(17);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != 'D' &&
          lookahead != 'M') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      if (lookahead == 'J') ADVANCE(1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != 'D' &&
          lookahead != 'M') ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 'J') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_JJ_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(15),
    [sym_comment] = STATE(3),
    [sym_text] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_JJ_COLON] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym__change_comment_token1,
    ACTIONS(15), 1,
      aux_sym__text_comment_token1,
    ACTIONS(11), 2,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
    STATE(6), 2,
      sym__change_comment,
      sym__text_comment,
  [18] = 4,
    ACTIONS(5), 1,
      anon_sym_JJ_COLON,
    ACTIONS(7), 1,
      aux_sym_text_token1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym_comment,
      sym_text,
      aux_sym_document_repeat1,
  [33] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_JJ_COLON,
    ACTIONS(24), 1,
      aux_sym_text_token1,
    STATE(4), 3,
      sym_comment,
      sym_text,
      aux_sym_document_repeat1,
  [48] = 3,
    ACTIONS(29), 1,
      aux_sym__text_comment_token1,
    STATE(8), 1,
      sym_change,
    ACTIONS(27), 3,
      anon_sym_A,
      anon_sym_M,
      anon_sym_D,
  [60] = 2,
    ACTIONS(33), 1,
      anon_sym_JJ_COLON,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [68] = 2,
    ACTIONS(37), 1,
      anon_sym_JJ_COLON,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [76] = 2,
    ACTIONS(41), 1,
      anon_sym_JJ_COLON,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [84] = 2,
    ACTIONS(45), 1,
      anon_sym_JJ_COLON,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [92] = 2,
    ACTIONS(49), 1,
      anon_sym_JJ_COLON,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [100] = 2,
    ACTIONS(53), 1,
      anon_sym_JJ_COLON,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [108] = 2,
    ACTIONS(57), 1,
      anon_sym_JJ_COLON,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
  [116] = 2,
    ACTIONS(59), 1,
      aux_sym_filepath_token1,
    STATE(12), 1,
      sym_filepath,
  [123] = 1,
    ACTIONS(61), 1,
      aux_sym_filepath_token1,
  [127] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [131] = 1,
    ACTIONS(65), 1,
      aux_sym_filepath_token1,
  [135] = 1,
    ACTIONS(67), 1,
      anon_sym_SPACE,
  [139] = 1,
    ACTIONS(69), 1,
      aux_sym_filepath_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 108,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 127,
  [SMALL_STATE(16)] = 131,
  [SMALL_STATE(17)] = 135,
  [SMALL_STATE(18)] = 139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_comment, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__change_comment, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_comment, 2, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_comment, 2, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_comment, 3, 0, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text_comment, 3, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filepath, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_change, 3, 0, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
