#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

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
  aux_sym_property_token1 = 10,
  aux_sym_property_token2 = 11,
  anon_sym_DASH = 12,
  anon_sym_LT = 13,
  aux_sym_class_token1 = 14,
  anon_sym_GT = 15,
  aux_sym_include_definition_token1 = 16,
  aux_sym_include_path_token1 = 17,
  anon_sym_COLON = 18,
  sym_tag_content = 19,
  sym_key = 20,
  sym_constant = 21,
  sym_numbers = 22,
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
  sym_quoted_key = 34,
  anon_sym_LPAREN = 35,
  aux_sym_operator_token1 = 36,
  anon_sym_RPAREN = 37,
  sym_source_file = 38,
  sym_header_line = 39,
  sym_line = 40,
  sym_indent = 41,
  sym_header_line_content = 42,
  sym_line_content = 43,
  sym_comment = 44,
  sym_meta_tag = 45,
  sym_tag = 46,
  sym_property = 47,
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
  aux_sym_source_file_repeat1 = 65,
  aux_sym_source_file_repeat2 = 66,
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
  [aux_sym_property_token1] = "property_token1",
  [aux_sym_property_token2] = "property_token2",
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [aux_sym_class_token1] = "class_token1",
  [anon_sym_GT] = ">",
  [aux_sym_include_definition_token1] = "include_definition_token1",
  [aux_sym_include_path_token1] = "include_path_token1",
  [anon_sym_COLON] = ":",
  [sym_tag_content] = "tag_content",
  [sym_key] = "key",
  [sym_constant] = "constant",
  [sym_numbers] = "numbers",
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
  [sym_quoted_key] = "quoted_key",
  [anon_sym_LPAREN] = "(",
  [aux_sym_operator_token1] = "operator_token1",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_header_line] = "header_line",
  [sym_line] = "line",
  [sym_indent] = "indent",
  [sym_header_line_content] = "header_line_content",
  [sym_line_content] = "line_content",
  [sym_comment] = "comment",
  [sym_meta_tag] = "meta_tag",
  [sym_tag] = "tag",
  [sym_property] = "property",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [aux_sym_property_token1] = aux_sym_property_token1,
  [aux_sym_property_token2] = aux_sym_property_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_class_token1] = aux_sym_class_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_include_definition_token1] = aux_sym_include_definition_token1,
  [aux_sym_include_path_token1] = aux_sym_include_path_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_tag_content] = sym_tag_content,
  [sym_key] = sym_key,
  [sym_constant] = sym_constant,
  [sym_numbers] = sym_numbers,
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
  [sym_quoted_key] = sym_quoted_key,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_operator_token1] = aux_sym_operator_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_header_line] = sym_header_line,
  [sym_line] = sym_line,
  [sym_indent] = sym_indent,
  [sym_header_line_content] = sym_header_line_content,
  [sym_line_content] = sym_line_content,
  [sym_comment] = sym_comment,
  [sym_meta_tag] = sym_meta_tag,
  [sym_tag] = sym_tag,
  [sym_property] = sym_property,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [aux_sym_property_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_token2] = {
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
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_numbers] = {
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
  [sym_quoted_key] = {
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
  [sym_source_file] = {
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
  [sym_property] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
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
      if (eof) ADVANCE(50);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'y') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(58);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == 'y') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(141);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') SKIP(49)
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\t') ADVANCE(58);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_header_line_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(58);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(57);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(65);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_property_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_property_token2);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'I') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'I') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == 'y') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_include_definition_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_include_definition_token1);
      if (lookahead == '@') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_include_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'y') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_constant);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_numbers);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_numbers);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_numbers);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_quoted_template_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_quoted_template_element_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_introduced_string_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_introduced_string_token1);
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_introduced_template_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_introduced_template_token1);
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_introduced_template_element_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_introduced_template_element_token1);
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_ref_token1);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_ref_token1);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_ref_token2);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_quoted_key);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 104},
  [30] = {.lex_state = 104},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 138},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 62},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 62},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 152},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 138},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 138},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_property_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_class_token1] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_include_definition_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_numbers] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_quoted_template_token1] = ACTIONS(1),
    [aux_sym_quoted_template_element_token1] = ACTIONS(1),
    [aux_sym_introduced_template_token1] = ACTIONS(1),
    [aux_sym_introduced_template_element_token1] = ACTIONS(1),
    [aux_sym_expression_token1] = ACTIONS(1),
    [aux_sym_ref_token1] = ACTIONS(1),
    [sym_quoted_key] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym_header_line] = STATE(2),
    [sym_line] = STATE(4),
    [sym_indent] = STATE(6),
    [sym_header_line_content] = STATE(65),
    [sym_line_content] = STATE(56),
    [sym_comment] = STATE(55),
    [sym_meta_tag] = STATE(58),
    [sym_tag] = STATE(37),
    [sym_property] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(18),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(60),
    [sym_quoted_template] = STATE(60),
    [sym_quoted_template_element] = STATE(60),
    [sym_introduced_string] = STATE(60),
    [sym_introduced_template] = STATE(60),
    [sym_introduced_template_element] = STATE(60),
    [sym_expression] = STATE(60),
    [sym_ref] = STATE(60),
    [sym_operator] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_indent_repeat1] = STATE(21),
    [aux_sym_indent_repeat2] = STATE(22),
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
    [sym_constant] = ACTIONS(25),
    [sym_numbers] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_quoted_key] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [2] = {
    [sym_header_line] = STATE(7),
    [sym_line] = STATE(3),
    [sym_indent] = STATE(6),
    [sym_header_line_content] = STATE(65),
    [sym_line_content] = STATE(56),
    [sym_comment] = STATE(55),
    [sym_meta_tag] = STATE(58),
    [sym_tag] = STATE(37),
    [sym_property] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(18),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(60),
    [sym_quoted_template] = STATE(60),
    [sym_quoted_template_element] = STATE(60),
    [sym_introduced_string] = STATE(60),
    [sym_introduced_template] = STATE(60),
    [sym_introduced_template_element] = STATE(60),
    [sym_expression] = STATE(60),
    [sym_ref] = STATE(60),
    [sym_operator] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_indent_repeat1] = STATE(21),
    [aux_sym_indent_repeat2] = STATE(22),
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
    [sym_constant] = ACTIONS(25),
    [sym_numbers] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_quoted_key] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [3] = {
    [sym_line] = STATE(5),
    [sym_indent] = STATE(6),
    [sym_line_content] = STATE(56),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(18),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(60),
    [sym_quoted_template] = STATE(60),
    [sym_quoted_template_element] = STATE(60),
    [sym_introduced_string] = STATE(60),
    [sym_introduced_template] = STATE(60),
    [sym_introduced_template_element] = STATE(60),
    [sym_expression] = STATE(60),
    [sym_ref] = STATE(60),
    [sym_operator] = STATE(12),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_indent_repeat1] = STATE(21),
    [aux_sym_indent_repeat2] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_header_line_token1] = ACTIONS(49),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_numbers] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_quoted_key] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [4] = {
    [sym_line] = STATE(5),
    [sym_indent] = STATE(6),
    [sym_line_content] = STATE(56),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(18),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(60),
    [sym_quoted_template] = STATE(60),
    [sym_quoted_template_element] = STATE(60),
    [sym_introduced_string] = STATE(60),
    [sym_introduced_template] = STATE(60),
    [sym_introduced_template_element] = STATE(60),
    [sym_expression] = STATE(60),
    [sym_ref] = STATE(60),
    [sym_operator] = STATE(12),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_indent_repeat1] = STATE(21),
    [aux_sym_indent_repeat2] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_header_line_token1] = ACTIONS(49),
    [anon_sym_TAB] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_numbers] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_quoted_key] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [5] = {
    [sym_line] = STATE(5),
    [sym_indent] = STATE(6),
    [sym_line_content] = STATE(56),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(18),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(60),
    [sym_quoted_template] = STATE(60),
    [sym_quoted_template_element] = STATE(60),
    [sym_introduced_string] = STATE(60),
    [sym_introduced_template] = STATE(60),
    [sym_introduced_template_element] = STATE(60),
    [sym_expression] = STATE(60),
    [sym_ref] = STATE(60),
    [sym_operator] = STATE(12),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_indent_repeat1] = STATE(21),
    [aux_sym_indent_repeat2] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_header_line_token1] = ACTIONS(53),
    [anon_sym_TAB] = ACTIONS(56),
    [anon_sym_] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(71),
    [aux_sym_include_definition_token1] = ACTIONS(74),
    [sym_key] = ACTIONS(77),
    [sym_constant] = ACTIONS(80),
    [sym_numbers] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [aux_sym_quoted_template_token1] = ACTIONS(86),
    [aux_sym_quoted_template_element_token1] = ACTIONS(89),
    [aux_sym_introduced_string_token1] = ACTIONS(92),
    [aux_sym_introduced_template_token1] = ACTIONS(95),
    [aux_sym_introduced_template_element_token1] = ACTIONS(98),
    [aux_sym_expression_token1] = ACTIONS(101),
    [aux_sym_ref_token1] = ACTIONS(104),
    [sym_quoted_key] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(107),
  },
  [6] = {
    [sym_line_content] = STATE(52),
    [sym_comment] = STATE(37),
    [sym_tag] = STATE(37),
    [sym_property] = STATE(37),
    [sym_list_entry] = STATE(37),
    [sym_value_definition] = STATE(37),
    [sym_class] = STATE(18),
    [sym_include_definition] = STATE(38),
    [sym_value] = STATE(38),
    [sym_quoted_string] = STATE(60),
    [sym_quoted_template] = STATE(60),
    [sym_quoted_template_element] = STATE(60),
    [sym_introduced_string] = STATE(60),
    [sym_introduced_template] = STATE(60),
    [sym_introduced_template_element] = STATE(60),
    [sym_expression] = STATE(60),
    [sym_ref] = STATE(60),
    [sym_operator] = STATE(12),
    [aux_sym_header_line_token1] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_include_definition_token1] = ACTIONS(21),
    [sym_key] = ACTIONS(23),
    [sym_constant] = ACTIONS(25),
    [sym_numbers] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_quoted_template_token1] = ACTIONS(29),
    [aux_sym_quoted_template_element_token1] = ACTIONS(31),
    [aux_sym_introduced_string_token1] = ACTIONS(33),
    [aux_sym_introduced_template_token1] = ACTIONS(35),
    [aux_sym_introduced_template_element_token1] = ACTIONS(37),
    [aux_sym_expression_token1] = ACTIONS(39),
    [aux_sym_ref_token1] = ACTIONS(41),
    [sym_quoted_key] = ACTIONS(23),
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
    STATE(65), 1,
      sym_header_line_content,
    STATE(7), 2,
      sym_header_line,
      aux_sym_source_file_repeat1,
    STATE(58), 2,
      sym_comment,
      sym_meta_tag,
    ACTIONS(117), 19,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [45] = 17,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      aux_sym_include_definition_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(135), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(137), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(139), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(141), 1,
      aux_sym_expression_token1,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_operator,
    STATE(18), 1,
      sym_class,
    STATE(64), 1,
      sym_value_definition,
    ACTIONS(129), 2,
      sym_constant,
      sym_numbers,
    STATE(38), 2,
      sym_include_definition,
      sym_value,
    STATE(60), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [106] = 17,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      aux_sym_include_definition_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(135), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(137), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(139), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(141), 1,
      aux_sym_expression_token1,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_operator,
    STATE(18), 1,
      sym_class,
    STATE(82), 1,
      sym_value_definition,
    ACTIONS(129), 2,
      sym_constant,
      sym_numbers,
    STATE(38), 2,
      sym_include_definition,
      sym_value,
    STATE(60), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [167] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 22,
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
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [195] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 22,
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
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [223] = 14,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    ACTIONS(125), 1,
      anon_sym_LT,
    ACTIONS(127), 1,
      aux_sym_include_definition_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(135), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(137), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(139), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(141), 1,
      aux_sym_expression_token1,
    STATE(19), 1,
      sym_class,
    ACTIONS(129), 2,
      sym_constant,
      sym_numbers,
    STATE(54), 2,
      sym_include_definition,
      sym_value,
    STATE(60), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [275] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 22,
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
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [303] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 21,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [330] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 21,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [357] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 21,
      aux_sym_header_line_token1,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [384] = 3,
    ACTIONS(167), 1,
      anon_sym_TAB,
    STATE(17), 1,
      aux_sym_indent_repeat1,
    ACTIONS(165), 19,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [412] = 12,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    ACTIONS(127), 1,
      aux_sym_include_definition_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(135), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(137), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(139), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(141), 1,
      aux_sym_expression_token1,
    ACTIONS(129), 2,
      sym_constant,
      sym_numbers,
    STATE(54), 2,
      sym_include_definition,
      sym_value,
    STATE(60), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [458] = 12,
    ACTIONS(37), 1,
      aux_sym_introduced_template_element_token1,
    ACTIONS(41), 1,
      aux_sym_ref_token1,
    ACTIONS(127), 1,
      aux_sym_include_definition_token1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_quoted_template_token1,
    ACTIONS(135), 1,
      aux_sym_quoted_template_element_token1,
    ACTIONS(137), 1,
      aux_sym_introduced_string_token1,
    ACTIONS(139), 1,
      aux_sym_introduced_template_token1,
    ACTIONS(141), 1,
      aux_sym_expression_token1,
    ACTIONS(129), 2,
      sym_constant,
      sym_numbers,
    STATE(78), 2,
      sym_include_definition,
      sym_value,
    STATE(60), 8,
      sym_quoted_string,
      sym_quoted_template,
      sym_quoted_template_element,
      sym_introduced_string,
      sym_introduced_template,
      sym_introduced_template_element,
      sym_expression,
      sym_ref,
  [504] = 3,
    ACTIONS(172), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym_indent_repeat2,
    ACTIONS(170), 19,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [532] = 3,
    ACTIONS(177), 1,
      anon_sym_TAB,
    STATE(17), 1,
      aux_sym_indent_repeat1,
    ACTIONS(175), 19,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [560] = 3,
    ACTIONS(179), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym_indent_repeat2,
    ACTIONS(175), 19,
      aux_sym_header_line_token1,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_key,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_introduced_template_element_token1,
      aux_sym_expression_token1,
      aux_sym_ref_token1,
      sym_quoted_key,
      anon_sym_LPAREN,
  [588] = 2,
    ACTIONS(183), 2,
      aux_sym_introduced_template_element_token1,
      aux_sym_ref_token1,
    ACTIONS(181), 10,
      anon_sym_LT,
      aux_sym_include_definition_token1,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_expression_token1,
  [605] = 2,
    ACTIONS(187), 2,
      aux_sym_introduced_template_element_token1,
      aux_sym_ref_token1,
    ACTIONS(185), 9,
      aux_sym_include_definition_token1,
      sym_constant,
      sym_numbers,
      anon_sym_DQUOTE,
      aux_sym_quoted_template_token1,
      aux_sym_quoted_template_element_token1,
      aux_sym_introduced_string_token1,
      aux_sym_introduced_template_token1,
      aux_sym_expression_token1,
  [621] = 3,
    ACTIONS(189), 1,
      aux_sym_header_line_token1,
    ACTIONS(191), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_include_ref_definition,
  [631] = 2,
    ACTIONS(193), 1,
      aux_sym_header_line_token1,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [638] = 2,
    ACTIONS(197), 1,
      aux_sym_header_line_token1,
    ACTIONS(199), 1,
      aux_sym_property_token2,
  [645] = 2,
    ACTIONS(201), 1,
      aux_sym_header_line_token1,
    ACTIONS(203), 1,
      aux_sym_property_token2,
  [652] = 2,
    ACTIONS(205), 1,
      aux_sym_include_path_token1,
    STATE(81), 1,
      sym_include_ref,
  [659] = 2,
    ACTIONS(207), 1,
      aux_sym_include_path_token1,
    STATE(25), 1,
      sym_include_path,
  [666] = 2,
    ACTIONS(209), 1,
      aux_sym_header_line_token1,
    ACTIONS(211), 1,
      anon_sym_2,
  [673] = 2,
    ACTIONS(213), 1,
      aux_sym_header_line_token1,
    ACTIONS(215), 1,
      anon_sym_2,
  [680] = 2,
    ACTIONS(217), 1,
      aux_sym_header_line_token1,
    ACTIONS(219), 1,
      anon_sym_2,
  [687] = 2,
    ACTIONS(221), 1,
      aux_sym_header_line_token1,
    ACTIONS(223), 1,
      anon_sym_2,
  [694] = 1,
    ACTIONS(225), 1,
      anon_sym_GT,
  [698] = 1,
    ACTIONS(227), 1,
      aux_sym_quoted_string_token1,
  [702] = 1,
    ACTIONS(229), 1,
      aux_sym_header_line_token1,
  [706] = 1,
    ACTIONS(231), 1,
      aux_sym_header_line_token1,
  [710] = 1,
    ACTIONS(233), 1,
      aux_sym_header_line_token1,
  [714] = 1,
    ACTIONS(235), 1,
      anon_sym_RBRACK_RBRACK,
  [718] = 1,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
  [722] = 1,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
  [726] = 1,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
  [730] = 1,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
  [734] = 1,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
  [738] = 1,
    ACTIONS(247), 1,
      aux_sym_comment_token1,
  [742] = 1,
    ACTIONS(249), 1,
      aux_sym_comment_token1,
  [746] = 1,
    ACTIONS(251), 1,
      aux_sym_comment_token1,
  [750] = 1,
    ACTIONS(253), 1,
      aux_sym_header_line_token1,
  [754] = 1,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
  [758] = 1,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
  [762] = 1,
    ACTIONS(259), 1,
      aux_sym_header_line_token1,
  [766] = 1,
    ACTIONS(261), 1,
      aux_sym_ref_token2,
  [770] = 1,
    ACTIONS(263), 1,
      aux_sym_header_line_token1,
  [774] = 1,
    ACTIONS(265), 1,
      aux_sym_header_line_token1,
  [778] = 1,
    ACTIONS(110), 1,
      aux_sym_header_line_token1,
  [782] = 1,
    ACTIONS(267), 1,
      aux_sym_quoted_string_token1,
  [786] = 1,
    ACTIONS(265), 1,
      aux_sym_header_line_token1,
  [790] = 1,
    ACTIONS(269), 1,
      aux_sym_quoted_string_token1,
  [794] = 1,
    ACTIONS(271), 1,
      aux_sym_header_line_token1,
  [798] = 1,
    ACTIONS(273), 1,
      aux_sym_property_token1,
  [802] = 1,
    ACTIONS(275), 1,
      aux_sym_header_line_token1,
  [806] = 1,
    ACTIONS(277), 1,
      aux_sym_header_line_token1,
  [810] = 1,
    ACTIONS(279), 1,
      aux_sym_header_line_token1,
  [814] = 1,
    ACTIONS(281), 1,
      aux_sym_header_line_token1,
  [818] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [822] = 1,
    ACTIONS(285), 1,
      aux_sym_header_line_token1,
  [826] = 1,
    ACTIONS(287), 1,
      aux_sym_class_token1,
  [830] = 1,
    ACTIONS(289), 1,
      aux_sym_header_line_token1,
  [834] = 1,
    ACTIONS(291), 1,
      aux_sym_header_line_token1,
  [838] = 1,
    ACTIONS(293), 1,
      aux_sym_header_line_token1,
  [842] = 1,
    ACTIONS(295), 1,
      aux_sym_header_line_token1,
  [846] = 1,
    ACTIONS(297), 1,
      aux_sym_header_line_token1,
  [850] = 1,
    ACTIONS(299), 1,
      aux_sym_header_line_token1,
  [854] = 1,
    ACTIONS(301), 1,
      aux_sym_header_line_token1,
  [858] = 1,
    ACTIONS(303), 1,
      aux_sym_operator_token1,
  [862] = 1,
    ACTIONS(305), 1,
      sym_tag_content,
  [866] = 1,
    ACTIONS(307), 1,
      aux_sym_header_line_token1,
  [870] = 1,
    ACTIONS(309), 1,
      sym_tag_content,
  [874] = 1,
    ACTIONS(311), 1,
      aux_sym_header_line_token1,
  [878] = 1,
    ACTIONS(313), 1,
      aux_sym_header_line_token1,
  [882] = 1,
    ACTIONS(315), 1,
      aux_sym_header_line_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 223,
  [SMALL_STATE(13)] = 275,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 357,
  [SMALL_STATE(17)] = 384,
  [SMALL_STATE(18)] = 412,
  [SMALL_STATE(19)] = 458,
  [SMALL_STATE(20)] = 504,
  [SMALL_STATE(21)] = 532,
  [SMALL_STATE(22)] = 560,
  [SMALL_STATE(23)] = 588,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 621,
  [SMALL_STATE(26)] = 631,
  [SMALL_STATE(27)] = 638,
  [SMALL_STATE(28)] = 645,
  [SMALL_STATE(29)] = 652,
  [SMALL_STATE(30)] = 659,
  [SMALL_STATE(31)] = 666,
  [SMALL_STATE(32)] = 673,
  [SMALL_STATE(33)] = 680,
  [SMALL_STATE(34)] = 687,
  [SMALL_STATE(35)] = 694,
  [SMALL_STATE(36)] = 698,
  [SMALL_STATE(37)] = 702,
  [SMALL_STATE(38)] = 706,
  [SMALL_STATE(39)] = 710,
  [SMALL_STATE(40)] = 714,
  [SMALL_STATE(41)] = 718,
  [SMALL_STATE(42)] = 722,
  [SMALL_STATE(43)] = 726,
  [SMALL_STATE(44)] = 730,
  [SMALL_STATE(45)] = 734,
  [SMALL_STATE(46)] = 738,
  [SMALL_STATE(47)] = 742,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 750,
  [SMALL_STATE(50)] = 754,
  [SMALL_STATE(51)] = 758,
  [SMALL_STATE(52)] = 762,
  [SMALL_STATE(53)] = 766,
  [SMALL_STATE(54)] = 770,
  [SMALL_STATE(55)] = 774,
  [SMALL_STATE(56)] = 778,
  [SMALL_STATE(57)] = 782,
  [SMALL_STATE(58)] = 786,
  [SMALL_STATE(59)] = 790,
  [SMALL_STATE(60)] = 794,
  [SMALL_STATE(61)] = 798,
  [SMALL_STATE(62)] = 802,
  [SMALL_STATE(63)] = 806,
  [SMALL_STATE(64)] = 810,
  [SMALL_STATE(65)] = 814,
  [SMALL_STATE(66)] = 818,
  [SMALL_STATE(67)] = 822,
  [SMALL_STATE(68)] = 826,
  [SMALL_STATE(69)] = 830,
  [SMALL_STATE(70)] = 834,
  [SMALL_STATE(71)] = 838,
  [SMALL_STATE(72)] = 842,
  [SMALL_STATE(73)] = 846,
  [SMALL_STATE(74)] = 850,
  [SMALL_STATE(75)] = 854,
  [SMALL_STATE(76)] = 858,
  [SMALL_STATE(77)] = 862,
  [SMALL_STATE(78)] = 866,
  [SMALL_STATE(79)] = 870,
  [SMALL_STATE(80)] = 874,
  [SMALL_STATE(81)] = 878,
  [SMALL_STATE(82)] = 882,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(21),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(22),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(51),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(77),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(28),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(68),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(30),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(61),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(60),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(59),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(36),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(57),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(31),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(32),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(33),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(34),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(53),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(76),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indent_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indent_repeat1, 2), SHIFT_REPEAT(17),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indent_repeat2, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indent_repeat2, 2), SHIFT_REPEAT(20),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indent, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_path, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_path, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_entry, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_introduced_string, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_introduced_template, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_introduced_template_element, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_content, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line_content, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_tag, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_entry, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_template_element, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introduced_string, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introduced_template, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_introduced_template_element, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_ref, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_ref_definition, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4),
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
