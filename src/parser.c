#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 2
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  aux_sym_document_token1 = 1,
  anon_sym_A = 2,
  anon_sym_M = 3,
  anon_sym_D = 4,
  anon_sym_C = 5,
  anon_sym_R = 6,
  anon_sym_SPACE = 7,
  aux_sym_filepath_token1 = 8,
  aux_sym_scissors_token1 = 9,
  anon_sym_JJ_COLONdescribe = 10,
  anon_sym_NULL = 11,
  anon_sym_JJ_COLON = 12,
  aux_sym__change_comment_token1 = 13,
  aux_sym__text_comment_token1 = 14,
  aux_sym_text_token1 = 15,
  anon_sym_J = 16,
  anon_sym_JJ = 17,
  aux_sym_text_token2 = 18,
  sym_document = 19,
  sym_change = 20,
  sym_filepath = 21,
  sym_scissors = 22,
  sym_comment = 23,
  sym__change_comment = 24,
  sym__text_comment = 25,
  sym_text = 26,
  aux_sym_document_repeat1 = 27,
  aux_sym_scissors_repeat1 = 28,
  alias_sym_comment_text = 29,
  alias_sym_scissors_inner = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_A] = "A",
  [anon_sym_M] = "M",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_R] = "R",
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
  [anon_sym_C] = anon_sym_C,
  [anon_sym_R] = anon_sym_R,
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
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R] = {
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
        0, 44,
        '\n', 22,
        '\r', 49,
        ' ', 28,
        ':', 48,
        'A', 23,
        'C', 26,
        'D', 25,
        'J', 52,
        'M', 24,
        'R', 27,
      );
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(45);
      if (lookahead == 'J') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == 0x0b ||
          lookahead == '\f') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != 'A' &&
          lookahead != 'D' &&
          lookahead != 'M') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'A') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead == 'R') ADVANCE(27);
      if (lookahead != 0) ADVANCE(48);
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
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == 'J') ADVANCE(53);
      if (lookahead != 0) ADVANCE(50);
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
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'J') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_filepath_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_scissors_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_JJ_COLONdescribe);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_JJ_COLON);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__change_comment_token1);
      if (lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__text_comment_token1);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_J);
      if (lookahead == 'J') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_JJ);
      if (lookahead == ':') ADVANCE(46);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 56:
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
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 3},
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
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
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
  [72] = 3,
    ACTIONS(47), 1,
      aux_sym__text_comment_token1,
    STATE(20), 1,
      sym_change,
    ACTIONS(45), 5,
      anon_sym_A,
      anon_sym_M,
      anon_sym_D,
      anon_sym_C,
      anon_sym_R,
  [86] = 2,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(51), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [98] = 2,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(55), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [110] = 2,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(57), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [122] = 2,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_scissors_token1,
    ACTIONS(61), 4,
      anon_sym_JJ_COLON,
      aux_sym_text_token1,
      anon_sym_J,
      anon_sym_JJ,
  [134] = 4,
    ACTIONS(63), 1,
      aux_sym_document_token1,
    ACTIONS(65), 1,
      aux_sym__change_comment_token1,
    ACTIONS(67), 1,
      aux_sym__text_comment_token1,
    STATE(25), 2,
      sym__change_comment,
      sym__text_comment,
  [148] = 4,
    ACTIONS(69), 1,
      aux_sym_filepath_token1,
    ACTIONS(71), 1,
      anon_sym_JJ_COLONdescribe,
    ACTIONS(73), 1,
      anon_sym_NULL,
    STATE(13), 1,
      aux_sym_scissors_repeat1,
  [161] = 4,
    ACTIONS(69), 1,
      aux_sym_filepath_token1,
    ACTIONS(75), 1,
      anon_sym_JJ_COLONdescribe,
    ACTIONS(77), 1,
      anon_sym_NULL,
    STATE(11), 1,
      aux_sym_scissors_repeat1,
  [174] = 3,
    ACTIONS(79), 1,
      aux_sym_filepath_token1,
    STATE(13), 1,
      aux_sym_scissors_repeat1,
    ACTIONS(82), 2,
      anon_sym_JJ_COLONdescribe,
      anon_sym_NULL,
  [185] = 1,
    ACTIONS(82), 3,
      aux_sym_filepath_token1,
      anon_sym_JJ_COLONdescribe,
      anon_sym_NULL,
  [191] = 2,
    ACTIONS(84), 1,
      aux_sym_document_token1,
    ACTIONS(86), 1,
      aux_sym_filepath_token1,
  [198] = 2,
    ACTIONS(84), 1,
      aux_sym_document_token1,
    ACTIONS(88), 1,
      aux_sym_text_token2,
  [205] = 2,
    ACTIONS(84), 1,
      aux_sym_document_token1,
    ACTIONS(88), 1,
      aux_sym_text_token1,
  [212] = 2,
    ACTIONS(90), 1,
      aux_sym_document_token1,
    ACTIONS(92), 1,
      aux_sym_filepath_token1,
  [219] = 2,
    ACTIONS(94), 1,
      aux_sym_filepath_token1,
    STATE(37), 1,
      sym_filepath,
  [226] = 1,
    ACTIONS(96), 1,
      aux_sym_document_token1,
  [230] = 1,
    ACTIONS(98), 1,
      aux_sym_document_token1,
  [234] = 1,
    ACTIONS(100), 1,
      aux_sym_document_token1,
  [238] = 1,
    ACTIONS(102), 1,
      aux_sym_filepath_token1,
  [242] = 1,
    ACTIONS(104), 1,
      aux_sym_filepath_token1,
  [246] = 1,
    ACTIONS(106), 1,
      aux_sym_document_token1,
  [250] = 1,
    ACTIONS(108), 1,
      anon_sym_SPACE,
  [254] = 1,
    ACTIONS(110), 1,
      aux_sym_filepath_token1,
  [258] = 1,
    ACTIONS(90), 1,
      aux_sym_document_token1,
  [262] = 1,
    ACTIONS(112), 1,
      aux_sym_document_token1,
  [266] = 1,
    ACTIONS(114), 1,
      aux_sym_document_token1,
  [270] = 1,
    ACTIONS(116), 1,
      aux_sym_filepath_token1,
  [274] = 1,
    ACTIONS(118), 1,
      aux_sym_document_token1,
  [278] = 1,
    ACTIONS(120), 1,
      aux_sym_document_token1,
  [282] = 1,
    ACTIONS(122), 1,
      aux_sym_document_token1,
  [286] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [290] = 1,
    ACTIONS(126), 1,
      aux_sym_document_token1,
  [294] = 1,
    ACTIONS(128), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 191,
  [SMALL_STATE(16)] = 198,
  [SMALL_STATE(17)] = 205,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 219,
  [SMALL_STATE(20)] = 226,
  [SMALL_STATE(21)] = 230,
  [SMALL_STATE(22)] = 234,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 246,
  [SMALL_STATE(26)] = 250,
  [SMALL_STATE(27)] = 254,
  [SMALL_STATE(28)] = 258,
  [SMALL_STATE(29)] = 262,
  [SMALL_STATE(30)] = 266,
  [SMALL_STATE(31)] = 270,
  [SMALL_STATE(32)] = 274,
  [SMALL_STATE(33)] = 278,
  [SMALL_STATE(34)] = 282,
  [SMALL_STATE(35)] = 286,
  [SMALL_STATE(36)] = 290,
  [SMALL_STATE(37)] = 294,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 4, 0, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 4, 0, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 3, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 3, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scissors, 5, 0, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scissors, 5, 0, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
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
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_comment, 2, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
