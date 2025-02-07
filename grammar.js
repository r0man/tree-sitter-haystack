module.exports = grammar({
  name: 'stacktrace_bnf',

  rules: {
    stacktrace: $ => seq(optional($.whitespace), $.exception,
                         optional($.causes), optional($.garbage)),

    garbage: $ => /[ \t\n\r.#]+/,

    exception: $ => seq(
      $.type,
      '::', $.whitespace,
      $.message,
      optional(seq($.whitespace, $.data)),
      $.newline,
      $.trace,
    ),

    type: $ => $.class,

    message: $ => /\./,

    data: $ => seq('{', /\./, '}',),

    causes: $ => optional(seq($.newline, $.cause, $.causes)),

    cause: $ => seq($.caused_by, $.exception, $.newline,
                    $.cause_more),

    cause_more: $ => seq($.whitespace, '..', '..', '..', $.whitespace,
                         $.number, $.whitespace, $.more),

    trace: $ => seq($.frame, optional($.frames)),

    frames: $ => optional(seq($.newline, $.frame, $.frames)),

    frame: $ => seq($.whitespace, $.at, $.whitespace, $.call),

    call: $ => seq($.class, '.', $.method, '(', $.file, '::',
                   $.number, ')'),

    caused_by: $ => 'Caused by: ',

    class: $ => seq($.simple_name, repeat(seq('.', $.simple_name))),

    file: $ => seq($.simple_name, '.', $.simple_name),

    method: $ => $.simple_name,

    more: $ => 'more',

    whitespace: $ => /[\t\f\v ]+/,

    lbrace: $ => '{',

    rbrace: $ => '}',

    digit: $ => /[0-9]/,

    dot: $ => '.',

    double_colon: $ => ':',

    newline: $ => /[\r\n]/,

    number: $ => seq(optional('-'), repeat($.digit)),

    lparen: $ => '(',

    rparen: $ => ')',

    simple_name: $ => /[a-zA-Z0-9_$/-]+/,
  }
});
