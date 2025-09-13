module.exports = grammar({
  name: "razor",

  externals: ($) => [
    $.razor_code_block,
    $.razor_directive,
    $.razor_expression,
    $.razor_expression_content,
  ],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.razor_comment, // most specific
          $.html_comment, // HTML comments
          $.razor_code_block, // next most specific
          $.razor_directive, // next
          $.razor_expression, // generic fallback
          $.element,
          $.text,
        ),
      ),

    element: ($) =>
      choice(
        seq(
          "<",
          $.tag_name,
          repeat($.attribute),
          ">",
          repeat(
            choice(
              $.razor_comment,
              $.html_comment,
              $.razor_code_block,
              $.razor_directive,
              $.razor_expression,
              $.element,
              $.text,
            ),
          ),
          "</",
          $.tag_name,
          ">",
        ),
        seq("<", $.tag_name, repeat($.attribute), "/>"),
      ),

    tag_name: ($) => /[a-zA-Z][a-zA-Z0-9-]*/,
    attribute: ($) =>
      seq($.attribute_name, optional(seq("=", $.attribute_value))),
    attribute_name: ($) => /@?[a-zA-Z_:][a-zA-Z0-9_:.-]*/,
    attribute_value: ($) =>
      choice(
        seq(
          '"',
          repeat(choice($.attribute_value_content, $.razor_expression)),
          '"',
        ),
        seq(
          "'",
          repeat(choice($.attribute_value_content, $.razor_expression)),
          "'",
        ),
      ),
    attribute_value_content: ($) => /[^"'@]+/,

    razor_comment: ($) => seq("@*", /([^*]|\*+[^@*])*/, "*@"),

    // HTML comments
    html_comment: ($) => seq("<!--", /([^-]|-[^-]|--[^>])*/, "-->"),

    // razor_directive, razor_code_block, and razor_expression are external tokens

    directive_argument: ($) =>
      choice(
        /"[^"]*"/, // quoted string
        /[^\s<>{}"]+/, // unquoted argument (not whitespace, <, >, {, }, or quote)
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    text: ($) => /[^<@]+/,
  },
});
