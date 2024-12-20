#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 2
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  anon_sym_A = 2,
  anon_sym_M = 3,
  anon_sym_D = 4,
  anon_sym_SPACE = 5,
  aux_sym_filepath_token1 = 6,
  aux_sym_scissors_token1 = 7,
  anon_sym_JJ_COLONdescribe = 8,
  anon_sym_NULL = 9,
  anon_sym_JJ_COLON = 10,
  aux_sym__change_comment_token1 = 11,
  aux_sym__text_comment_token1 = 12,
  aux_sym_text_token1 = 13,
  anon_sym_J = 14,
  anon_sym_JJ = 15,
  aux_sym_text_token2 = 16,
  sym_document = 17,
  sym_change = 18,
  sym_filepath = 19,
  sym_scissors = 20,
  sym_comment = 21,
  sym__change_comment = 22,
  sym__text_comment = 23,
  sym_text = 24,
  aux_sym_document_repeat1 = 25,
  aux_sym_scissors_repeat1 = 26,
  alias_sym_comment_text = 27,
  alias_sym_scissors_inner = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_A] = "A",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_SPACE] = " ",
  [aux_sym_filepath_token1] = "filepath_token1",
  [aux_sym_scissors_token1] = "comment",
  [anon_sym_JJ_COLONdescribe] = "comment",
  [anon_sym_NULL] = "comment",
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
  [sym_scissors] = "scissors",
  [sym_comment] = "comment",
  [sym__change_comment] = "_change_comment",
  [sym__text_comment] = "_text_comment",
  [sym_text] = "text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_scissors_repeat1] = "scissors_repeat1",
  [alias_sym_comment_text] = "comment_text",
  [alias_sym_scissors_inner] = "scissors_inner",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [aux_sym_filepath_token1] = aux_sym_filepath_token1,
  [aux_sym_scissors_token1] = sym_comment,
  [anon_sym_JJ_COLONdescribe] = sym_comment,
  [anon_sym_NULL] = sym_comment,
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
  [sym_scissors] = sym_scissors,
  [sym_comment] = sym_comment,
  [sym__change_comment] = sym__change_comment,
  [sym__text_comment] = sym__text_comment,
  [sym_text] = sym_text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_scissors_repeat1] = aux_sym_scissors_repeat1,
  [alias_sym_comment_text] = alias_sym_comment_text,
  [alias_sym_scissors_inner] = alias_sym_scissors_inner,
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
  [aux_sym_scissors_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_JJ_COLONdescribe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = true,
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
  [sym_scissors] = {
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
  [aux_sym_scissors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_scissors_inner] = {
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
  [6] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_scissors_inner,
    [2] = sym_comment,
  },
  [2] = {
    [1] = alias_sym_comment_text,
  },
  [3] = {
    [2] = sym_comment,
    [3] = sym_comment,
  },
  [4] = {
    [2] = alias_sym_comment_text,
  },
  [5] = {
    [1] = alias_sym_scissors_inner,
    [2] = sym_comment,
    [3] = sym_comment,
    [4] = sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_scissors_repeat1, 2,
    aux_sym_scissors_repeat1,
    alias_sym_scissors_inner,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      ADVANCE_MAP(
        0, 42,
        '\n', 22,
        '\r', 47,
        ' ', 26,
        ':', 46,
        'A', 23,
        'D', 25,
        'J', 50,
        'M', 24,
      );
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(43);
      if (lookahead == 'J') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != 'A' &&
          lookahead != 'D' &&
          lookahead != 'M') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(23);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == 'J') ADVANCE(51);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'J') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_scissors_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_JJ_COLONdescribe);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_JJ_COLON);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__change_comment_token1);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_J);
      if (lookahead == 'J') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_JJ);
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [aux_sym__text_comment_token1] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [anon_sym_J] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(35),
    [sym_scissors] = STATE(2),
    [sym_comment] = STATE(33),
    [sym_text] = STATE(33),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [aux_sym_scissors_token1] = ACTIONS(7),
    [anon_sym_JJ_COLON] = ACTIONS(9),
    [aux_sym_text_token1] = ACTIONS(11),
    [anon_sym_J] = ACTIONS(13),
    [anon_sym_JJ] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      aux_sym_scissors_token1,
    ACTIONS(9), 1,
      anon_sym_JJ_COLON,
    ACTIONS(11), 1,
      aux_sym_text_token1,
    ACTIONS(13), 1,
      anon_sym_J,
    ACTIONS(15), 1,
      anon_sym_JJ,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    STATE(3), 2,
      sym_scissors,
      aux_sym_document_repeat1,
    STATE(33), 2,
      sym_comment,
      sym_text,
  [30] = 9,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_document_token1,
    ACTIONS(26), 1,
      aux_sym_scissors_token1,
    ACTIONS(29), 1,
      anon_sym_JJ_COLON,
    ACTIONS(32), 1,
      aux_sym_text_token1,
    ACTIONS(35), 1,
      anon_sym_J,
    ACTIONS(38), 1,
      anon_sym_JJ,
    STATE(3), 2,
      sym_scissors,
      aux_sym_document_repeat1,
    STATE(33), 2,
      sym_comment,
      sym_text,
  [60] = 2,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(43), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [72] = 2,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(47), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [84] = 2,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(51), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [96] = 2,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(53), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [108] = 2,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(57), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [120] = 4,
    ACTIONS(59), 1,
      aux_sym_document_token1,
    ACTIONS(61), 1,
      aux_sym__change_comment_token1,
    ACTIONS(63), 1,
      aux_sym__text_comment_token1,
    STATE(25), 2,
      sym__change_comment,
      sym__text_comment,
  [134] = 3,
    ACTIONS(67), 1,
      aux_sym__text_comment_token1,
    STATE(20), 1,
      sym_change,
    ACTIONS(65), 3,
      anon_sym_A,
      anon_sym_M,
      anon_sym_D,
  [146] = 4,
    ACTIONS(69), 1,
      aux_sym_filepath_token1,
    ACTIONS(71), 1,
      anon_sym_JJ_COLONdescribe,
    ACTIONS(73), 1,
      anon_sym_NULL,
    STATE(13), 1,
      aux_sym_scissors_repeat1,
  [159] = 4,
    ACTIONS(69), 1,
      aux_sym_filepath_token1,
    ACTIONS(75), 1,
      anon_sym_JJ_COLONdescribe,
    ACTIONS(77), 1,
      anon_sym_NULL,
    STATE(11), 1,
      aux_sym_scissors_repeat1,
  [172] = 3,
    ACTIONS(79), 1,
      aux_sym_filepath_token1,
    STATE(13), 1,
      aux_sym_scissors_repeat1,
    ACTIONS(82), 2,
      anon_sym_JJ_COLONdescribe,
      anon_sym_NULL,
  [183] = 1,
    ACTIONS(82), 3,
      aux_sym_filepath_token1,
      anon_sym_JJ_COLONdescribe,
      anon_sym_NULL,
  [189] = 2,
    ACTIONS(84), 1,
      aux_sym_document_token1,
    ACTIONS(86), 1,
      aux_sym_filepath_token1,
  [196] = 2,
    ACTIONS(84), 1,
      aux_sym_document_token1,
    ACTIONS(88), 1,
      aux_sym_text_token2,
  [203] = 2,
    ACTIONS(84), 1,
      aux_sym_document_token1,
    ACTIONS(88), 1,
      aux_sym_text_token1,
  [210] = 2,
    ACTIONS(90), 1,
      aux_sym_document_token1,
    ACTIONS(92), 1,
      aux_sym_filepath_token1,
  [217] = 2,
    ACTIONS(94), 1,
      aux_sym_filepath_token1,
    STATE(37), 1,
      sym_filepath,
  [224] = 1,
    ACTIONS(96), 1,
      aux_sym_document_token1,
  [228] = 1,
    ACTIONS(98), 1,
      aux_sym_document_token1,
  [232] = 1,
    ACTIONS(100), 1,
      aux_sym_document_token1,
  [236] = 1,
    ACTIONS(102), 1,
      aux_sym_filepath_token1,
  [240] = 1,
    ACTIONS(104), 1,
      aux_sym_filepath_token1,
  [244] = 1,
    ACTIONS(106), 1,
      aux_sym_document_token1,
  [248] = 1,
    ACTIONS(108), 1,
      anon_sym_SPACE,
  [252] = 1,
    ACTIONS(110), 1,
      aux_sym_filepath_token1,
  [256] = 1,
    ACTIONS(90), 1,
      aux_sym_document_token1,
  [260] = 1,
    ACTIONS(112), 1,
      aux_sym_document_token1,
  [264] = 1,
    ACTIONS(114), 1,
      aux_sym_document_token1,
  [268] = 1,
    ACTIONS(116), 1,
      aux_sym_filepath_token1,
  [272] = 1,
    ACTIONS(118), 1,
      aux_sym_document_token1,
  [276] = 1,
    ACTIONS(120), 1,
      aux_sym_document_token1,
  [280] = 1,
    ACTIONS(122), 1,
      aux_sym_document_token1,
  [284] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [288] = 1,
    ACTIONS(126), 1,
      aux_sym_document_token1,
  [292] = 1,
    ACTIONS(128), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 159,
  [SMALL_STATE(13)] = 172,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 196,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 217,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 232,
  [SMALL_STATE(23)] = 236,
  [SMALL_STATE(24)] = 240,
  [SMALL_STATE(25)] = 244,
  [SMALL_STATE(26)] = 248,
  [SMALL_STATE(27)] = 252,
  [SMALL_STATE(28)] = 256,
  [SMALL_STATE(29)] = 260,
  [SMALL_STATE(30)] = 264,
  [SMALL_STATE(31)] = 268,
  [SMALL_STATE(32)] = 272,
  [SMALL_STATE(33)] = 276,
  [SMALL_STATE(34)] = 280,
  [SMALL_STATE(35)] = 284,
  [SMALL_STATE(36)] = 288,
  [SMALL_STATE(37)] = 292,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 4, 0, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 4, 0, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 3, 0, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 5, 0, 5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 5, 0, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scissors_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scissors_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_comment, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_comment, 2, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_comment, 3, 0, 4),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filepath, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, 0, 6),
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
