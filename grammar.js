module.exports = grammar({
  name: 'java_stacktrace',

  rules: {
    // The root of the parse tree
    stacktrace: $ => repeat1($.exception_entry),

    // Represents the main exception entry
    exception_entry: $ => seq(
      $.exception_header,
      $.stack_frames,
      optional($.caused_by)
    ),

    // Represents a 'Caused by' nested exception
    caused_by: $ => seq(
      'Caused by: ',
      $.exception_header,
      $.stack_frames,
      optional($.caused_by) // Recursive for multiple nested causes
    ),

    // Header containing exception type and message
    exception_header: $ => seq(
      field('type', $.exception_type),
      ': ',
      field('message', $.exception_message)
    ),

    // Exception type (e.g., java.lang.NullPointerException)
    exception_type: $ => /[a-zA-Z0-9_.$]+/,

    // Exception message (e.g., Something went wrong)
    exception_message: $ => /[^\n]+/,

    // One or more stack frames
    stack_frames: $ => repeat1($.stack_frame),

    // Single stack frame
    stack_frame: $ => choice(
      $.stack_frame_normal,
      $.stack_frame_unknown_source,
      $.stack_frame_native_method
    ),

    // Normal stack frame with file name and optional line number
    stack_frame_normal: $ => seq(
      /\s*at /,
      field('method', $.method_name),
      '(',
      field('file', $.file_name),
      optional(seq(':', field('line', $.line_number))),
      ')'
    ),

    // Stack frame with "Unknown Source"
    stack_frame_unknown_source: $ => seq(
      /\s*at /,
      field('method', $.method_name),
      '(',
      'Unknown Source',
      ')'
    ),

    // Stack frame with "Native Method"
    stack_frame_native_method: $ => seq(
      /\s*at /,
      field('method', $.method_name),
      '(',
      'Native Method',
      ')'
    ),

    // Fully qualified method name (e.g., com.example.MyClass.method)
    method_name: $ => /[a-zA-Z0-9_.<>$\-]+(?:\.[a-zA-Z0-9_$<>]+)*/,

    // File name (e.g., MyClass.java)
    file_name: $ => /[A-Za-z0-9_./$\-<>]+\.java/,

    // Line number (e.g., 10)
    line_number: $ => /\d+/,
  },

  extras: $ => [
    /\s/, // Allows for whitespace between tokens
  ],
});
