#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_Causedby_COLON = 1,
  anon_sym_COLON = 2,
  sym_exception_type = 3,
  sym_exception_message = 4,
  aux_sym_stack_frame_normal_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COLON2 = 7,
  anon_sym_RPAREN = 8,
  anon_sym_UnknownSource = 9,
  anon_sym_NativeMethod = 10,
  sym_method_name = 11,
  sym_file_name = 12,
  sym_line_number = 13,
  sym_stacktrace = 14,
  sym_exception_entry = 15,
  sym_caused_by = 16,
  sym_exception_header = 17,
  sym_stack_frames = 18,
  sym_stack_frame = 19,
  sym_stack_frame_normal = 20,
  sym_stack_frame_unknown_source = 21,
  sym_stack_frame_native_method = 22,
  aux_sym_stacktrace_repeat1 = 23,
  aux_sym_stack_frames_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Causedby_COLON] = "Caused by: ",
  [anon_sym_COLON] = ": ",
  [sym_exception_type] = "exception_type",
  [sym_exception_message] = "exception_message",
  [aux_sym_stack_frame_normal_token1] = "stack_frame_normal_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON2] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_UnknownSource] = "Unknown Source",
  [anon_sym_NativeMethod] = "Native Method",
  [sym_method_name] = "method_name",
  [sym_file_name] = "file_name",
  [sym_line_number] = "line_number",
  [sym_stacktrace] = "stacktrace",
  [sym_exception_entry] = "exception_entry",
  [sym_caused_by] = "caused_by",
  [sym_exception_header] = "exception_header",
  [sym_stack_frames] = "stack_frames",
  [sym_stack_frame] = "stack_frame",
  [sym_stack_frame_normal] = "stack_frame_normal",
  [sym_stack_frame_unknown_source] = "stack_frame_unknown_source",
  [sym_stack_frame_native_method] = "stack_frame_native_method",
  [aux_sym_stacktrace_repeat1] = "stacktrace_repeat1",
  [aux_sym_stack_frames_repeat1] = "stack_frames_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Causedby_COLON] = anon_sym_Causedby_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_exception_type] = sym_exception_type,
  [sym_exception_message] = sym_exception_message,
  [aux_sym_stack_frame_normal_token1] = aux_sym_stack_frame_normal_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON2] = anon_sym_COLON2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_UnknownSource] = anon_sym_UnknownSource,
  [anon_sym_NativeMethod] = anon_sym_NativeMethod,
  [sym_method_name] = sym_method_name,
  [sym_file_name] = sym_file_name,
  [sym_line_number] = sym_line_number,
  [sym_stacktrace] = sym_stacktrace,
  [sym_exception_entry] = sym_exception_entry,
  [sym_caused_by] = sym_caused_by,
  [sym_exception_header] = sym_exception_header,
  [sym_stack_frames] = sym_stack_frames,
  [sym_stack_frame] = sym_stack_frame,
  [sym_stack_frame_normal] = sym_stack_frame_normal,
  [sym_stack_frame_unknown_source] = sym_stack_frame_unknown_source,
  [sym_stack_frame_native_method] = sym_stack_frame_native_method,
  [aux_sym_stacktrace_repeat1] = aux_sym_stacktrace_repeat1,
  [aux_sym_stack_frames_repeat1] = aux_sym_stack_frames_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Causedby_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_exception_type] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_message] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stack_frame_normal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UnknownSource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NativeMethod] = {
    .visible = true,
    .named = false,
  },
  [sym_method_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_line_number] = {
    .visible = true,
    .named = true,
  },
  [sym_stacktrace] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_caused_by] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_header] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_frames] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_frame] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_frame_normal] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_frame_unknown_source] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_frame_native_method] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stacktrace_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stack_frames_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_file = 1,
  field_line = 2,
  field_message = 3,
  field_method = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file] = "file",
  [field_line] = "line",
  [field_message] = "message",
  [field_method] = "method",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_message, 2},
    {field_type, 0},
  [2] =
    {field_method, 1},
  [3] =
    {field_file, 3},
    {field_method, 1},
  [5] =
    {field_file, 3},
    {field_line, 5},
    {field_method, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'j') ADVANCE(6);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'k') ADVANCE(14);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(7);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 41:
      if (eof) ADVANCE(44);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Causedby_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'j') ADVANCE(50);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(49);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(77);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_exception_type);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_exception_message);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_exception_message);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_stack_frame_normal_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_UnknownSource);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_NativeMethod);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'j') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(71);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_method_name);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_file_name);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_line_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_exception_type] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_method_name] = ACTIONS(1),
    [sym_file_name] = ACTIONS(1),
    [sym_line_number] = ACTIONS(1),
  },
  [1] = {
    [sym_stacktrace] = STATE(20),
    [sym_exception_entry] = STATE(7),
    [sym_exception_header] = STATE(4),
    [aux_sym_stacktrace_repeat1] = STATE(7),
    [sym_exception_type] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_exception_type,
    ACTIONS(9), 1,
      aux_sym_stack_frame_normal_token1,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      anon_sym_Causedby_COLON,
    STATE(3), 2,
      sym_stack_frame,
      aux_sym_stack_frames_repeat1,
    STATE(9), 3,
      sym_stack_frame_normal,
      sym_stack_frame_unknown_source,
      sym_stack_frame_native_method,
  [20] = 5,
    ACTIONS(13), 1,
      sym_exception_type,
    ACTIONS(15), 1,
      aux_sym_stack_frame_normal_token1,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_Causedby_COLON,
    STATE(3), 2,
      sym_stack_frame,
      aux_sym_stack_frames_repeat1,
    STATE(9), 3,
      sym_stack_frame_normal,
      sym_stack_frame_unknown_source,
      sym_stack_frame_native_method,
  [40] = 4,
    ACTIONS(9), 1,
      aux_sym_stack_frame_normal_token1,
    STATE(8), 1,
      sym_stack_frames,
    STATE(2), 2,
      sym_stack_frame,
      aux_sym_stack_frames_repeat1,
    STATE(9), 3,
      sym_stack_frame_normal,
      sym_stack_frame_unknown_source,
      sym_stack_frame_native_method,
  [56] = 4,
    ACTIONS(9), 1,
      aux_sym_stack_frame_normal_token1,
    STATE(13), 1,
      sym_stack_frames,
    STATE(2), 2,
      sym_stack_frame,
      aux_sym_stack_frames_repeat1,
    STATE(9), 3,
      sym_stack_frame_normal,
      sym_stack_frame_unknown_source,
      sym_stack_frame_native_method,
  [72] = 4,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      sym_exception_type,
    STATE(4), 1,
      sym_exception_header,
    STATE(6), 2,
      sym_exception_entry,
      aux_sym_stacktrace_repeat1,
  [86] = 4,
    ACTIONS(3), 1,
      sym_exception_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_exception_header,
    STATE(6), 2,
      sym_exception_entry,
      aux_sym_stacktrace_repeat1,
  [100] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_Causedby_COLON,
    ACTIONS(29), 1,
      sym_exception_type,
    STATE(17), 1,
      sym_caused_by,
  [113] = 2,
    ACTIONS(33), 1,
      sym_exception_type,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_Causedby_COLON,
      aux_sym_stack_frame_normal_token1,
  [122] = 2,
    ACTIONS(37), 1,
      sym_exception_type,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_Causedby_COLON,
      aux_sym_stack_frame_normal_token1,
  [131] = 2,
    ACTIONS(41), 1,
      sym_exception_type,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_Causedby_COLON,
      aux_sym_stack_frame_normal_token1,
  [140] = 2,
    ACTIONS(45), 1,
      sym_exception_type,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_Causedby_COLON,
      aux_sym_stack_frame_normal_token1,
  [149] = 4,
    ACTIONS(27), 1,
      anon_sym_Causedby_COLON,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_exception_type,
    STATE(19), 1,
      sym_caused_by,
  [162] = 2,
    ACTIONS(53), 1,
      sym_exception_type,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_Causedby_COLON,
      aux_sym_stack_frame_normal_token1,
  [171] = 3,
    ACTIONS(55), 1,
      anon_sym_UnknownSource,
    ACTIONS(57), 1,
      anon_sym_NativeMethod,
    ACTIONS(59), 1,
      sym_file_name,
  [181] = 2,
    ACTIONS(3), 1,
      sym_exception_type,
    STATE(5), 1,
      sym_exception_header,
  [188] = 1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_exception_type,
  [193] = 2,
    ACTIONS(63), 1,
      anon_sym_COLON2,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [200] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_exception_type,
  [205] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [209] = 1,
    ACTIONS(71), 1,
      anon_sym_COLON,
  [213] = 1,
    ACTIONS(73), 1,
      sym_exception_message,
  [217] = 1,
    ACTIONS(75), 1,
      sym_method_name,
  [221] = 1,
    ACTIONS(77), 1,
      aux_sym_stack_frame_normal_token1,
  [225] = 1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
  [229] = 1,
    ACTIONS(81), 1,
      sym_line_number,
  [233] = 1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
  [237] = 1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
  [241] = 1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 149,
  [SMALL_STATE(14)] = 162,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 200,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 213,
  [SMALL_STATE(23)] = 217,
  [SMALL_STATE(24)] = 221,
  [SMALL_STATE(25)] = 225,
  [SMALL_STATE(26)] = 229,
  [SMALL_STATE(27)] = 233,
  [SMALL_STATE(28)] = 237,
  [SMALL_STATE(29)] = 241,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frames, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frames, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stack_frames_repeat1, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stack_frames_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_frames_repeat1, 2), SHIFT_REPEAT(23),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stacktrace_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stacktrace_repeat1, 2), SHIFT_REPEAT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stacktrace, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_entry, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exception_entry, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame_normal, 5, .production_id = 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame_normal, 5, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame_native_method, 5, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame_native_method, 5, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame_unknown_source, 5, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame_unknown_source, 5, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caused_by, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caused_by, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_frame_normal, 7, .production_id = 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_frame_normal, 7, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_entry, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caused_by, 4),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_header, 3, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_haystack(void) {
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
