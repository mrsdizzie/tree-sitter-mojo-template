module.exports = grammar({
  name: 'mojo_template',
  extras: $ => [],
  rules: {
    template: $ => repeat(choice(
      $.shorthand_code,
      $.shorthand_comment,
      $.bracketed_code,
      $.bracketed_comment,
      $.content
    )),

    bracketed_code: $ => seq(
      choice('<%', '<%=', '<%=='),
      optional($.code),
      choice('%>', '=%>'),
    ),

    bracketed_comment: $ => seq(
      '<%#',
      optional(alias($.code, $.comment)),
      '%>'
    ),

   shorthand_code: $ => seq(
      choice('%', '%=', '%=='),
      $.percent_code
    ),
    
    shorthand_comment: $ => seq(
      '%#',
      alias($.percent_code, $.comment),
    ),

    percent_code: $ => seq(
      /[^%\n]*/ // Capture everything until the end of the line as code
    ),

    code: $ => repeat1(choice(/[^%=_-]+|[%=_-]/, '%%>')),

    content: $ => /(?:[^<%]+|<[^%])*?/,
  }
});
