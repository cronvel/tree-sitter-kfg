#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  aux_sym_header_line_token1 = 1,
  anon_sym_TAB = 2,
  anon_sym_ = 3,
  anon_sym_POUND = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_LBRACK_LBRACK = 6,
  anon_sym_RBRACK_RBRACK = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  aux_sym_property_entry_token1 = 10,
  anon_sym_DASH = 11,
  anon_sym_LT = 12,
  aux_sym_class_token1 = 13,
  anon_sym_GT = 14,
  aux_sym_include_definition_token1 = 15,
  aux_sym_include_path_token1 = 16,
  anon_sym_COLON = 17,
  sym_tag_content = 18,
  sym_key = 19,
  sym_quoted_key = 20,
  sym_constant = 21,
  sym_number = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_quoted_string_token1 = 24,
  aux_sym_quoted_template_token1 = 25,
  aux_sym_quoted_template_element_token1 = 26,
  aux_sym_introduced_string_token1 = 27,
  anon_sym_2 = 28,
  aux_sym_introduced_template_token1 = 29,
  aux_sym_introduced_template_element_token1 = 30,
  aux_sym_expression_token1 = 31,
  aux_sym_ref_token1 = 32,
  aux_sym_ref_token2 = 33,
  sym_implicit_string = 34,
  anon_sym_LPAREN = 35,
  aux_sym_operator_token1 = 36,
  anon_sym_RPAREN = 37,
  sym_document = 38,
  sym_header_line = 39,
  sym_line = 40,
  sym_indent = 41,
  sym_header_line_content = 42,
  sym_line_content = 43,
  sym_comment = 44,
  sym_meta_tag = 45,
  sym_tag = 46,
  sym_property_entry = 47,
  sym_list_entry = 48,
  sym_value_definition = 49,
  sym_class = 50,
  sym_include_definition = 51,
  sym_include_path = 52,
  sym_include_ref_definition = 53,
  sym_include_ref = 54,
  sym_value = 55,
  sym_quoted_string = 56,
  sym_quoted_template = 57,
  sym_quoted_template_element = 58,
  sym_introduced_string = 59,
  sym_introduced_template = 60,
  sym_introduced_template_element = 61,
  sym_expression = 62,
  sym_ref = 63,
  sym_operator = 64,
  aux_sym_document_repeat1 = 65,
  aux_sym_document_repeat2 = 66,
  aux_sym_indent_repeat1 = 67,
  aux_sym_indent_repeat2 = 68,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_header_line_token1] = "header_line_token1",
  [anon_sym_TAB] = "\t",
  [anon_sym_] = "    ",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_property_entry_token1] = "property_entry_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [aux_sym_class_token1] = "class_token1",
  [anon_sym_GT] = ">",
  [aux_sym_include_definition_token1] = "include_definition_token1",
  [aux_sym_include_path_token1] = "include_path_token1",
  [anon_sym_COLON] = ":",
  [sym_tag_content] = "tag_content",
  [sym_key] = "key",
  [sym_quoted_key] = "quoted_key",
  [sym_constant] = "constant",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [aux_sym_quoted_template_token1] = "quoted_template_token1",
  [aux_sym_quoted_template_element_token1] = "quoted_template_element_token1",
  [aux_sym_introduced_string_token1] = "introduced_string_token1",
  [anon_sym_2] = " ",
  [aux_sym_introduced_template_token1] = "introduced_template_token1",
  [aux_sym_introduced_template_element_token1] = "introduced_template_element_token1",
  [aux_sym_expression_token1] = "expression_token1",
  [aux_sym_ref_token1] = "ref_token1",
  [aux_sym_ref_token2] = "ref_token2",
  [sym_implicit_string] = "implicit_string",
  [anon_sym_LPAREN] = "(",
  [aux_sym_operator_token1] = "operator_token1",
  [anon_sym_RPAREN] = ")",
  [sym_document] = "document",
  [sym_header_line] = "header_line",
  [sym_line] = "line",
  [sym_indent] = "indent",
  [sym_header_line_content] = "header_line_content",
  [sym_line_content] = "line_content",
  [sym_comment] = "comment",
  [sym_meta_tag] = "meta_tag",
  [sym_tag] = "tag",
  [sym_property_entry] = "property_entry",
  [sym_list_entry] = "list_entry",
  [sym_value_definition] = "value_definition",
  [sym_class] = "class",
  [sym_include_definition] = "include_definition",
  [sym_include_path] = "include_path",
  [sym_include_ref_definition] = "include_ref_definition",
  [sym_include_ref] = "include_ref",
  [sym_value] = "value",
  [sym_quoted_string] = "quoted_string",
  [sym_quoted_template] = "quoted_template",
  [sym_quoted_template_element] = "quoted_template_element",
  [sym_introduced_string] = "introduced_string",
  [sym_introduced_template] = "introduced_template",
  [sym_introduced_template_element] = "introduced_template_element",
  [sym_expression] = "expression",
  [sym_ref] = "ref",
  [sym_operator] = "operator",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_indent_repeat1] = "indent_repeat1",
  [aux_sym_indent_repeat2] = "indent_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_header_line_token1] = aux_sym_header_line_token1,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_] = anon_sym_,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_property_entry_token1] = aux_sym_property_entry_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_class_token1] = aux_sym_class_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_include_definition_token1] = aux_sym_include_definition_token1,
  [aux_sym_include_path_token1] = aux_sym_include_path_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_tag_content] = sym_tag_content,
  [sym_key] = sym_key,
  [sym_quoted_key] = sym_quoted_key,
  [sym_constant] = sym_constant,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [aux_sym_quoted_template_token1] = aux_sym_quoted_template_token1,
  [aux_sym_quoted_template_element_token1] = aux_sym_quoted_template_element_token1,
  [aux_sym_introduced_string_token1] = aux_sym_introduced_string_token1,
  [anon_sym_2] = anon_sym_2,
  [aux_sym_introduced_template_token1] = aux_sym_introduced_template_token1,
  [aux_sym_introduced_template_element_token1] = aux_sym_introduced_template_element_token1,
  [aux_sym_expression_token1] = aux_sym_expression_token1,
  [aux_sym_ref_token1] = aux_sym_ref_token1,
  [aux_sym_ref_token2] = aux_sym_ref_token2,
  [sym_implicit_string] = sym_implicit_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_operator_token1] = aux_sym_operator_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_document] = sym_document,
  [sym_header_line] = sym_header_line,
  [sym_line] = sym_line,
  [sym_indent] = sym_indent,
  [sym_header_line_content] = sym_header_line_content,
  [sym_line_content] = sym_line_content,
  [sym_comment] = sym_comment,
  [sym_meta_tag] = sym_meta_tag,
  [sym_tag] = sym_tag,
  [sym_property_entry] = sym_property_entry,
  [sym_list_entry] = sym_list_entry,
  [sym_value_definition] = sym_value_definition,
  [sym_class] = sym_class,
  [sym_include_definition] = sym_include_definition,
  [sym_include_path] = sym_include_path,
  [sym_include_ref_definition] = sym_include_ref_definition,
  [sym_include_ref] = sym_include_ref,
  [sym_value] = sym_value,
  [sym_quoted_string] = sym_quoted_string,
  [sym_quoted_template] = sym_quoted_template,
  [sym_quoted_template_element] = sym_quoted_template_element,
  [sym_introduced_string] = sym_introduced_string,
  [sym_introduced_template] = sym_introduced_template,
  [sym_introduced_template_element] = sym_introduced_template_element,
  [sym_expression] = sym_expression,
  [sym_ref] = sym_ref,
  [sym_operator] = sym_operator,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_indent_repeat1] = aux_sym_indent_repeat1,
  [aux_sym_indent_repeat2] = aux_sym_indent_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_header_line_token1] = {
    .visible = false,
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
  [aux_sym_property_entry_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [sym_quoted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_template_element_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_introduced_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_introduced_template_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_introduced_template_element_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ref_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ref_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_implicit_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_header_line] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_header_line_content] = {
    .visible = true,
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
  [sym_property_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_list_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_include_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_path] = {
    .visible = true,
    .named = true,
  },
  [sym_include_ref_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_template_element] = {
    .visible = true,
    .named = true,
  },
  [sym_introduced_string] = {
    .visible = true,
    .named = true,
  },
  [sym_introduced_template] = {
    .visible = true,
    .named = true,
  },
  [sym_introduced_template_element] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indent_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indent_repeat2] = {
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
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(71);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'y') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'y') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(103);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'y') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ':') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(122);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(185);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(215);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(183);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(215);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'y') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == 'y') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\t') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(153);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(55);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(57);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_property_entry_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'I') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'I') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'y') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_include_definition_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_include_definition_token1);
      if (lookahead == '@') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_include_definition_token1);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_include_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_quoted_key);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_quoted_key);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_quoted_template_element_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_quoted_template_element_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_introduced_string_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_introduced_string_token1);
      if (lookahead == '>') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_introduced_string_token1);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_introduced_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_introduced_template_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_introduced_template_token1);
      if (lookahead == '>') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_introduced_template_token1);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_introduced_template_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_introduced_template_element_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_introduced_template_element_token1);
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_introduced_template_element_token1);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_introduced_template_element_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_ref_token1);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_ref_token1);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_ref_token1);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '$') ADVANCE(142);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_ref_token1);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_ref_token2);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(46);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t') ADVANCE(47);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(155);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'y') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(182);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '"') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'I') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == 'y') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_implicit_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_implicit_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 118},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 53},
  [47] = {.lex_state = 53},
  [48] = {.lex_state = 53},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 143},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 118},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_class_token1] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_include_definition_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_quoted_key] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_quoted_template_token1] = ACTIONS(1),
    [aux_sym_quoted_template_element_token1] = ACTIONS(1),
    [aux_sym_introduced_template_token1] = ACTIONS(1),
    [aux_sym_introduced_template_element_token1] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_ref_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(66),
    [sym_header_line] = STATE(2),
    [sym_line] = STATE(3),
    [sym_indent] = STATE(6),
    [sym_header_line_content] = STATE(61),
    [sym_line_content] = STATE(60),
    [sym_comment] = STATE(55),
    [sym_meta_tag] = STATE(58),
    [sym_tag] = STATE(37),
    [sym_property_entry] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(17),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(59),
    [sym_quoted_template] = STATE(59),
    [sym_quoted_template_element] = STATE(59),
    [sym_introduced_string] = STATE(59),
    [sym_introduced_template] = STATE(59),
    [sym_introduced_template_element] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_ref] = STATE(59),
    [sym_operator] = STATE(12),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_document_repeat2] = STATE(3),
    [aux_sym_indent_repeat1] = STATE(22),
    [aux_sym_indent_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_header_line_token1] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_quoted_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_implicit_string] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [2] = {
    [sym_header_line] = STATE(7),
    [sym_line] = STATE(5),
    [sym_indent] = STATE(6),
    [sym_header_line_content] = STATE(61),
    [sym_line_content] = STATE(60),
    [sym_comment] = STATE(55),
    [sym_meta_tag] = STATE(58),
    [sym_tag] = STATE(37),
    [sym_property_entry] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(17),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(59),
    [sym_quoted_template] = STATE(59),
    [sym_quoted_template_element] = STATE(59),
    [sym_introduced_string] = STATE(59),
    [sym_introduced_template] = STATE(59),
    [sym_introduced_template_element] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_ref] = STATE(59),
    [sym_operator] = STATE(12),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_document_repeat2] = STATE(5),
    [aux_sym_indent_repeat1] = STATE(22),
    [aux_sym_indent_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_header_line_token1] = ACTIONS(5),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_quoted_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_implicit_string] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [3] = {
    [sym_line] = STATE(4),
    [sym_indent] = STATE(6),
    [sym_line_content] = STATE(60),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property_entry] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(17),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(59),
    [sym_quoted_template] = STATE(59),
    [sym_quoted_template_element] = STATE(59),
    [sym_introduced_string] = STATE(59),
    [sym_introduced_template] = STATE(59),
    [sym_introduced_template_element] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_ref] = STATE(59),
    [sym_operator] = STATE(12),
    [aux_sym_document_repeat2] = STATE(4),
    [aux_sym_indent_repeat1] = STATE(22),
    [aux_sym_indent_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_header_line_token1] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_quoted_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_implicit_string] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [4] = {
    [sym_line] = STATE(4),
    [sym_indent] = STATE(6),
    [sym_line_content] = STATE(60),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property_entry] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(17),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(59),
    [sym_quoted_template] = STATE(59),
    [sym_quoted_template_element] = STATE(59),
    [sym_introduced_string] = STATE(59),
    [sym_introduced_template] = STATE(59),
    [sym_introduced_template_element] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_ref] = STATE(59),
    [sym_operator] = STATE(12),
    [aux_sym_document_repeat2] = STATE(4),
    [aux_sym_indent_repeat1] = STATE(22),
    [aux_sym_indent_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_header_line_token1] = ACTIONS(51),
    [anon_sym_TAB] = ACTIONS(54),
    [anon_sym_] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(69),
    [aux_sym_include_definition_token1] = ACTIONS(72),
    [sym_key] = ACTIONS(75),
    [sym_quoted_key] = ACTIONS(75),
    [sym_constant] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [aux_sym_quoted_template_token1] = ACTIONS(84),
    [aux_sym_quoted_template_element_token1] = ACTIONS(87),
    [aux_sym_introduced_string_token1] = ACTIONS(90),
    [aux_sym_introduced_template_token1] = ACTIONS(93),
    [aux_sym_introduced_template_element_token1] = ACTIONS(96),
    [aux_sym_expression_token1] = ACTIONS(99),
    [aux_sym_ref_token1] = ACTIONS(102),
    [sym_implicit_string] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(105),
  },
  [5] = {
    [sym_line] = STATE(4),
    [sym_indent] = STATE(6),
    [sym_line_content] = STATE(60),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property_entry] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(17),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(59),
    [sym_quoted_template] = STATE(59),
    [sym_quoted_template_element] = STATE(59),
    [sym_introduced_string] = STATE(59),
    [sym_introduced_template] = STATE(59),
    [sym_introduced_template_element] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_ref] = STATE(59),
    [sym_operator] = STATE(12),
    [aux_sym_document_repeat2] = STATE(4),
    [aux_sym_indent_repeat1] = STATE(22),
    [aux_sym_indent_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_header_line_token1] = ACTIONS(47),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_quoted_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_implicit_string] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [6] = {
    [sym_line_content] = STATE(52),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property_entry] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(17),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(59),
    [sym_quoted_template] = STATE(59),
    [sym_quoted_template_element] = STATE(59),
    [sym_introduced_string] = STATE(59),
    [sym_introduced_template] = STATE(59),
    [sym_introduced_template_element] = STATE(59),
    [sym_expression] = STATE(59),
    [sym_ref] = STATE(59),
    [sym_operator] = STATE(12),
    [aux_sym_header_line_token1] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_quoted_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_implicit_string] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      aux_sym_header_line_token1,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(61), 1,
      sym_header_line_content,
    STATE(7), 2,
      sym_header_line,
      aux_sym_document_repeat1,
    STATE(58), 2,
      sym_comment,
      sym_meta_tag,
    ACTIONS(117), 20,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [46] = 17,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      aux_sym_include_definition_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(31), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(33), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(35), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(39), 1,
      aux_sym_expression_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_operator,
    STATE(17), 1,
      sym_class,
    STATE(64), 1,
      sym_value_definition,
    STATE(38), 2,
      sym_include_definition,
      sym_value,
    ACTIONS(25), 3,
      sym_constant,
      sym_number,
      sym_implicit_string,
    STATE(59), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [108] = 17,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      aux_sym_include_definition_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(31), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(33), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(35), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(39), 1,
      aux_sym_expression_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_operator,
    STATE(17), 1,
      sym_class,
    STATE(68), 1,
      sym_value_definition,
    STATE(38), 2,
      sym_include_definition,
      sym_value,
    ACTIONS(25), 3,
      sym_constant,
      sym_number,
      sym_implicit_string,
    STATE(59), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [170] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 23,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [199] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 23,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [228] = 14,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      aux_sym_include_definition_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(31), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(33), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(35), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(39), 1,
      aux_sym_expression_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    STATE(19), 1,
      sym_class,
    STATE(54), 2,
      sym_include_definition,
      sym_value,
    ACTIONS(25), 3,
      sym_constant,
      sym_number,
      sym_implicit_string,
    STATE(59), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [281] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 23,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [310] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 22,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [338] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 22,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [366] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 22,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [394] = 12,
    ACTIONS(21), 1,
      aux_sym_include_definition_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(31), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(33), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(35), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(39), 1,
      aux_sym_expression_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    STATE(54), 2,
      sym_include_definition,
      sym_value,
    ACTIONS(25), 3,
      sym_constant,
      sym_number,
      sym_implicit_string,
    STATE(59), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [441] = 3,
    ACTIONS(147), 1,
      anon_sym_,
    STATE(21), 1,
      aux_sym_indent_repeat2,
    ACTIONS(145), 20,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [470] = 12,
    ACTIONS(21), 1,
      aux_sym_include_definition_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(31), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(33), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(35), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(39), 1,
      aux_sym_expression_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    STATE(78), 2,
      sym_include_definition,
      sym_value,
    ACTIONS(25), 3,
      sym_constant,
      sym_number,
      sym_implicit_string,
    STATE(59), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [517] = 3,
    ACTIONS(151), 1,
      anon_sym_TAB,
    STATE(20), 1,
      aux_sym_indent_repeat1,
    ACTIONS(149), 20,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [546] = 3,
    ACTIONS(156), 1,
      anon_sym_,
    STATE(21), 1,
      aux_sym_indent_repeat2,
    ACTIONS(154), 20,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [575] = 3,
    ACTIONS(159), 1,
      anon_sym_TAB,
    STATE(20), 1,
      aux_sym_indent_repeat1,
    ACTIONS(145), 20,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_quoted_key,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
      anon_sym_LPAREN,
  [604] = 1,
    ACTIONS(161), 13,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
  [620] = 1,
    ACTIONS(163), 12,
      aux_sym_include_definition_token1,
      sym_constant,
      sym_number,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_implicit_string,
  [635] = 3,
    ACTIONS(165), 1,
      aux_sym_header_line_token1,
    ACTIONS(167), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_include_ref_definition,
  [645] = 2,
    ACTIONS(169), 1,
      aux_sym_header_line_token1,
    ACTIONS(171), 1,
      anon_sym_2,
  [652] = 2,
    ACTIONS(173), 1,
      aux_sym_header_line_token1,
    ACTIONS(175), 1,
      aux_sym_property_entry_token1,
  [659] = 2,
    ACTIONS(177), 1,
      aux_sym_include_path_token1,
    STATE(81), 1,
      sym_include_ref,
  [666] = 2,
    ACTIONS(179), 1,
      aux_sym_include_path_token1,
    STATE(25), 1,
      sym_include_path,
  [673] = 2,
    ACTIONS(181), 1,
      aux_sym_header_line_token1,
    ACTIONS(183), 1,
      aux_sym_property_entry_token1,
  [680] = 2,
    ACTIONS(185), 1,
      aux_sym_header_line_token1,
    ACTIONS(187), 1,
      anon_sym_2,
  [687] = 2,
    ACTIONS(189), 1,
      aux_sym_header_line_token1,
    ACTIONS(191), 1,
      anon_sym_2,
  [694] = 2,
    ACTIONS(193), 1,
      aux_sym_header_line_token1,
    ACTIONS(195), 1,
      anon_sym_2,
  [701] = 2,
    ACTIONS(197), 1,
      aux_sym_header_line_token1,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [708] = 1,
    ACTIONS(201), 1,
      anon_sym_GT,
  [712] = 1,
    ACTIONS(203), 1,
      aux_sym_quoted_string_token1,
  [716] = 1,
    ACTIONS(205), 1,
      aux_sym_header_line_token1,
  [720] = 1,
    ACTIONS(207), 1,
      aux_sym_header_line_token1,
  [724] = 1,
    ACTIONS(209), 1,
      aux_sym_header_line_token1,
  [728] = 1,
    ACTIONS(211), 1,
      anon_sym_RBRACK_RBRACK,
  [732] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
  [736] = 1,
    ACTIONS(215), 1,
      aux_sym_comment_token1,
  [740] = 1,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
  [744] = 1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
  [748] = 1,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
  [752] = 1,
    ACTIONS(223), 1,
      aux_sym_comment_token1,
  [756] = 1,
    ACTIONS(225), 1,
      aux_sym_comment_token1,
  [760] = 1,
    ACTIONS(227), 1,
      aux_sym_comment_token1,
  [764] = 1,
    ACTIONS(229), 1,
      aux_sym_comment_token1,
  [768] = 1,
    ACTIONS(231), 1,
      aux_sym_header_line_token1,
  [772] = 1,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [776] = 1,
    ACTIONS(235), 1,
      aux_sym_header_line_token1,
  [780] = 1,
    ACTIONS(237), 1,
      aux_sym_ref_token2,
  [784] = 1,
    ACTIONS(239), 1,
      aux_sym_header_line_token1,
  [788] = 1,
    ACTIONS(241), 1,
      aux_sym_header_line_token1,
  [792] = 1,
    ACTIONS(243), 1,
      aux_sym_quoted_string_token1,
  [796] = 1,
    ACTIONS(245), 1,
      aux_sym_quoted_string_token1,
  [800] = 1,
    ACTIONS(241), 1,
      aux_sym_header_line_token1,
  [804] = 1,
    ACTIONS(247), 1,
      aux_sym_header_line_token1,
  [808] = 1,
    ACTIONS(249), 1,
      aux_sym_header_line_token1,
  [812] = 1,
    ACTIONS(251), 1,
      aux_sym_header_line_token1,
  [816] = 1,
    ACTIONS(253), 1,
      aux_sym_header_line_token1,
  [820] = 1,
    ACTIONS(255), 1,
      aux_sym_header_line_token1,
  [824] = 1,
    ACTIONS(257), 1,
      aux_sym_header_line_token1,
  [828] = 1,
    ACTIONS(259), 1,
      aux_sym_class_token1,
  [832] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [836] = 1,
    ACTIONS(263), 1,
      aux_sym_header_line_token1,
  [840] = 1,
    ACTIONS(265), 1,
      aux_sym_header_line_token1,
  [844] = 1,
    ACTIONS(267), 1,
      aux_sym_header_line_token1,
  [848] = 1,
    ACTIONS(269), 1,
      aux_sym_header_line_token1,
  [852] = 1,
    ACTIONS(271), 1,
      aux_sym_header_line_token1,
  [856] = 1,
    ACTIONS(273), 1,
      aux_sym_header_line_token1,
  [860] = 1,
    ACTIONS(275), 1,
      aux_sym_header_line_token1,
  [864] = 1,
    ACTIONS(277), 1,
      aux_sym_header_line_token1,
  [868] = 1,
    ACTIONS(279), 1,
      aux_sym_header_line_token1,
  [872] = 1,
    ACTIONS(281), 1,
      aux_sym_operator_token1,
  [876] = 1,
    ACTIONS(283), 1,
      sym_tag_content,
  [880] = 1,
    ACTIONS(285), 1,
      aux_sym_header_line_token1,
  [884] = 1,
    ACTIONS(287), 1,
      sym_tag_content,
  [888] = 1,
    ACTIONS(289), 1,
      aux_sym_header_line_token1,
  [892] = 1,
    ACTIONS(291), 1,
      aux_sym_header_line_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 281,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 338,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 394,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 517,
  [SMALL_STATE(21)] = 546,
  [SMALL_STATE(22)] = 575,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 620,
  [SMALL_STATE(25)] = 635,
  [SMALL_STATE(26)] = 645,
  [SMALL_STATE(27)] = 652,
  [SMALL_STATE(28)] = 659,
  [SMALL_STATE(29)] = 666,
  [SMALL_STATE(30)] = 673,
  [SMALL_STATE(31)] = 680,
  [SMALL_STATE(32)] = 687,
  [SMALL_STATE(33)] = 694,
  [SMALL_STATE(34)] = 701,
  [SMALL_STATE(35)] = 708,
  [SMALL_STATE(36)] = 712,
  [SMALL_STATE(37)] = 716,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 724,
  [SMALL_STATE(40)] = 728,
  [SMALL_STATE(41)] = 732,
  [SMALL_STATE(42)] = 736,
  [SMALL_STATE(43)] = 740,
  [SMALL_STATE(44)] = 744,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 752,
  [SMALL_STATE(47)] = 756,
  [SMALL_STATE(48)] = 760,
  [SMALL_STATE(49)] = 764,
  [SMALL_STATE(50)] = 768,
  [SMALL_STATE(51)] = 772,
  [SMALL_STATE(52)] = 776,
  [SMALL_STATE(53)] = 780,
  [SMALL_STATE(54)] = 784,
  [SMALL_STATE(55)] = 788,
  [SMALL_STATE(56)] = 792,
  [SMALL_STATE(57)] = 796,
  [SMALL_STATE(58)] = 800,
  [SMALL_STATE(59)] = 804,
  [SMALL_STATE(60)] = 808,
  [SMALL_STATE(61)] = 812,
  [SMALL_STATE(62)] = 816,
  [SMALL_STATE(63)] = 820,
  [SMALL_STATE(64)] = 824,
  [SMALL_STATE(65)] = 828,
  [SMALL_STATE(66)] = 832,
  [SMALL_STATE(67)] = 836,
  [SMALL_STATE(68)] = 840,
  [SMALL_STATE(69)] = 844,
  [SMALL_STATE(70)] = 848,
  [SMALL_STATE(71)] = 852,
  [SMALL_STATE(72)] = 856,
  [SMALL_STATE(73)] = 860,
  [SMALL_STATE(74)] = 864,
  [SMALL_STATE(75)] = 868,
  [SMALL_STATE(76)] = 872,
  [SMALL_STATE(77)] = 876,
  [SMALL_STATE(78)] = 880,
  [SMALL_STATE(79)] = 884,
  [SMALL_STATE(80)] = 888,
  [SMALL_STATE(81)] = 892,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(22),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(18),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(42),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(77),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(27),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(65),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(30),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(59),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(36),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(57),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(56),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(31),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(32),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(26),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(33),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(53),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(76),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indent, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indent_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indent_repeat1, 2), SHIFT_REPEAT(20),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indent_repeat2, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indent_repeat2, 2), SHIFT_REPEAT(21),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_introduced_template_element, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_entry, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_entry, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_introduced_string, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_introduced_template, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_path, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_path, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line_content, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_tag, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_entry, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_entry, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template_element, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introduced_string, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introduced_template, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introduced_template_element, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_ref, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_ref_definition, 2),
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
