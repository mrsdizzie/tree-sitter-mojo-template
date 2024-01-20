module.exports = grammar({
  name: 'mojo_template',
  extras: $ => [],
  rules: {
    template: $ => repeat(choice(
      $.shorthand_perl_code,
      $.shorthand_perl_expression,
      $.shorthand_perl_expression_escaped,
      $.shorthand_comment,
      $.bracketed_perl_code,
      $.bracketed_perl_expression,
      $.bracketed_perl_expression_escaped,
      $.bracketed_comment,
      $.content
    )),

    bracketed_perl_code: $ => seq(
      '<%',
      optional($.perl_code),
      choice('%>', '=%>'),
    ),
    
    bracketed_perl_expression: $ => seq(
      '<%=',
      optional($.perl_code),
      choice('%>', '=%>'),
    ),
    
    bracketed_perl_expression_escaped: $ => seq(
      '<%==',
      optional($.perl_code),
      choice('%>', '=%>'),
    ),

    bracketed_comment: $ => seq(
      '<%#',
      optional(alias($.perl_code, $.comment)),
      '%>'
    ),

    shorthand_perl_code: $ => seq(
      '%',
      $.short_perl_code
    ),
    
    shorthand_perl_expression: $ => seq(
      '%=',
      $.short_perl_code
    ),
    
    shorthand_perl_expression_escaped: $ => seq(
      '%==',
      $.short_perl_code
    ),
   
    shorthand_comment: $ => seq(
      '%#',
      alias($.perl_code, $.comment),
    ),
    
    perl_code: $ => repeat1(choice(
        /[^%\n]+/,
        /%/,
        /%>/,
        /%=[^>]/
    )),
    short_perl_code: $ => repeat1(choice(
        /[^\n]+/
    )),
    
    content: $ => /(?:[^<%]+|<[^%])*?/,
  }
});
