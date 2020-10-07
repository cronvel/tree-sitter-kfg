#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_LF = 1,
  anon_sym_TAB = 2,
  anon_sym_ = 3,
  anon_sym_POUND = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_LBRACK_LBRACK = 6,
  anon_sym_RBRACK_RBRACK = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  aux_sym_object_property_token1 = 10,
  anon_sym_DASH = 11,
  aux_sym_array_element_token1 = 12,
  sym_tag_content = 13,
  sym_key = 14,
  sym_source_file = 15,
  sym__meta_tag_line = 16,
  sym__line = 17,
  sym__remainder_line = 18,
  sym__indent = 19,
  sym_line_content = 20,
  sym_comment = 21,
  sym_meta_tag = 22,
  sym_tag = 23,
  sym_object_property = 24,
  sym_array_element = 25,
  sym_value = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_source_file_repeat2 = 28,
  aux_sym__indent_repeat1 = 29,
  aux_sym__indent_repeat2 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_TAB] = "\t",
  [anon_sym_] = "    ",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_object_property_token1] = "object_property_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_array_element_token1] = "array_element_token1",
  [sym_tag_content] = "tag_content",
  [sym_key] = "key",
  [sym_source_file] = "source_file",
  [sym__meta_tag_line] = "_meta_tag_line",
  [sym__line] = "_line",
  [sym__remainder_line] = "_remainder_line",
  [sym__indent] = "_indent",
  [sym_line_content] = "line_content",
  [sym_comment] = "comment",
  [sym_meta_tag] = "meta_tag",
  [sym_tag] = "tag",
  [sym_object_property] = "object_property",
  [sym_array_element] = "array_element",
  [sym_value] = "value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__indent_repeat1] = "_indent_repeat1",
  [aux_sym__indent_repeat2] = "_indent_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_] = anon_sym_,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_object_property_token1] = aux_sym_object_property_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_array_element_token1] = aux_sym_array_element_token1,
  [sym_tag_content] = sym_tag_content,
  [sym_key] = sym_key,
  [sym_source_file] = sym_source_file,
  [sym__meta_tag_line] = sym__meta_tag_line,
  [sym__line] = sym__line,
  [sym__remainder_line] = sym__remainder_line,
  [sym__indent] = sym__indent,
  [sym_line_content] = sym_line_content,
  [sym_comment] = sym_comment,
  [sym_meta_tag] = sym_meta_tag,
  [sym_tag] = sym_tag,
  [sym_object_property] = sym_object_property,
  [sym_array_element] = sym_array_element,
  [sym_value] = sym_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__indent_repeat1] = aux_sym__indent_repeat1,
  [aux_sym__indent_repeat2] = aux_sym__indent_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_property_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_array_element_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_tag_content] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__meta_tag_line] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__remainder_line] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym_line_content] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_object_property] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indent_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__indent_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') SKIP(16)
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(30);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_object_property_token1);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_array_element_token1);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_tag_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_tag_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_object_property_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym__meta_tag_line] = STATE(2),
    [sym__line] = STATE(4),
    [sym__remainder_line] = STATE(28),
    [sym__indent] = STATE(8),
    [sym_line_content] = STATE(16),
    [sym_comment] = STATE(17),
    [sym_meta_tag] = STATE(35),
    [sym_tag] = STATE(23),
    [sym_object_property] = STATE(23),
    [sym_array_element] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym__indent_repeat1] = STATE(12),
    [aux_sym__indent_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_key] = ACTIONS(19),
  },
  [2] = {
    [sym__meta_tag_line] = STATE(6),
    [sym__line] = STATE(3),
    [sym__remainder_line] = STATE(34),
    [sym__indent] = STATE(8),
    [sym_line_content] = STATE(16),
    [sym_comment] = STATE(17),
    [sym_meta_tag] = STATE(35),
    [sym_tag] = STATE(23),
    [sym_object_property] = STATE(23),
    [sym_array_element] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym__indent_repeat1] = STATE(12),
    [aux_sym__indent_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_key] = ACTIONS(19),
  },
  [3] = {
    [sym__line] = STATE(5),
    [sym__remainder_line] = STATE(38),
    [sym__indent] = STATE(8),
    [sym_line_content] = STATE(16),
    [sym_comment] = STATE(23),
    [sym_tag] = STATE(23),
    [sym_object_property] = STATE(23),
    [sym_array_element] = STATE(23),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym__indent_repeat1] = STATE(12),
    [aux_sym__indent_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_key] = ACTIONS(19),
  },
  [4] = {
    [sym__line] = STATE(5),
    [sym__remainder_line] = STATE(34),
    [sym__indent] = STATE(8),
    [sym_line_content] = STATE(16),
    [sym_comment] = STATE(23),
    [sym_tag] = STATE(23),
    [sym_object_property] = STATE(23),
    [sym_array_element] = STATE(23),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym__indent_repeat1] = STATE(12),
    [aux_sym__indent_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_key] = ACTIONS(19),
  },
  [5] = {
    [sym__line] = STATE(5),
    [sym__indent] = STATE(7),
    [sym_line_content] = STATE(40),
    [sym_comment] = STATE(23),
    [sym_tag] = STATE(23),
    [sym_object_property] = STATE(23),
    [sym_array_element] = STATE(23),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym__indent_repeat1] = STATE(12),
    [aux_sym__indent_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(31),
    [anon_sym_TAB] = ACTIONS(34),
    [anon_sym_] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_key] = ACTIONS(49),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(6), 2,
      sym__meta_tag_line,
      aux_sym_source_file_repeat1,
    STATE(35), 2,
      sym_comment,
      sym_meta_tag,
    ACTIONS(57), 5,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [28] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_key,
    ACTIONS(65), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym_line_content,
    STATE(23), 4,
      sym_comment,
      sym_tag,
      sym_object_property,
      sym_array_element,
  [53] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym_key,
    ACTIONS(65), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_line_content,
    STATE(23), 4,
      sym_comment,
      sym_tag,
      sym_object_property,
      sym_array_element,
  [78] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 8,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [92] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 7,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [105] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 7,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [118] = 3,
    ACTIONS(81), 1,
      anon_sym_TAB,
    STATE(14), 1,
      aux_sym__indent_repeat1,
    ACTIONS(79), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [132] = 3,
    ACTIONS(85), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__indent_repeat2,
    ACTIONS(83), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [146] = 3,
    ACTIONS(90), 1,
      anon_sym_TAB,
    STATE(14), 1,
      aux_sym__indent_repeat1,
    ACTIONS(88), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [160] = 3,
    ACTIONS(93), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym__indent_repeat2,
    ACTIONS(79), 5,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_key,
  [174] = 2,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [181] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_LF,
  [188] = 1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [193] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [198] = 1,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [203] = 2,
    ACTIONS(107), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_value,
  [210] = 2,
    ACTIONS(107), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_value,
  [217] = 1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [222] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LF,
  [229] = 1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [234] = 1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [239] = 1,
    ACTIONS(117), 1,
      aux_sym_comment_token1,
  [243] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [247] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [251] = 1,
    ACTIONS(121), 1,
      aux_sym_object_property_token1,
  [255] = 1,
    ACTIONS(123), 1,
      aux_sym_array_element_token1,
  [259] = 1,
    ACTIONS(125), 1,
      anon_sym_LF,
  [263] = 1,
    ACTIONS(127), 1,
      anon_sym_RBRACK_RBRACK,
  [267] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [271] = 1,
    ACTIONS(99), 1,
      anon_sym_LF,
  [275] = 1,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
  [279] = 1,
    ACTIONS(131), 1,
      sym_tag_content,
  [283] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [287] = 1,
    ACTIONS(135), 1,
      sym_tag_content,
  [291] = 1,
    ACTIONS(65), 1,
      anon_sym_LF,
  [295] = 1,
    ACTIONS(111), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 53,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 181,
  [SMALL_STATE(18)] = 188,
  [SMALL_STATE(19)] = 193,
  [SMALL_STATE(20)] = 198,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 217,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 229,
  [SMALL_STATE(26)] = 234,
  [SMALL_STATE(27)] = 239,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 247,
  [SMALL_STATE(30)] = 251,
  [SMALL_STATE(31)] = 255,
  [SMALL_STATE(32)] = 259,
  [SMALL_STATE(33)] = 263,
  [SMALL_STATE(34)] = 267,
  [SMALL_STATE(35)] = 271,
  [SMALL_STATE(36)] = 275,
  [SMALL_STATE(37)] = 279,
  [SMALL_STATE(38)] = 283,
  [SMALL_STATE(39)] = 287,
  [SMALL_STATE(40)] = 291,
  [SMALL_STATE(41)] = 295,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(27),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(37),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(31),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(30),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta_tag_line, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta_tag_line, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__indent, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indent_repeat2, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__indent_repeat2, 2), SHIFT_REPEAT(13),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__indent_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__indent_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remainder_line, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_property, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remainder_line, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_tag, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kfg(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
