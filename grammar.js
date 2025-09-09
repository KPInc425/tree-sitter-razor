/**
 * Standalone Razor grammar for Tree-sitter (full refactor)
 * - No inheritance from C# grammar
 * - Top-level: HTML, Razor directives, Razor expressions
 * - C# embedding in @code blocks (to be implemented)
 * - Foundation for robust Razor/HTML/C# blending
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "razor",

  conflicts: ($) => [[$.razor_directive, $.razor_expression]],

  // Whitespace and comments
  extras: ($) => [/\s/, $.razor_comment, $.html_comment],

  // Top-level: Only Razor directives, HTML, and Razor blocks
  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.razor_directive,
          $.razor_code_block,
          $.razor_expression,
          $.element,
          $.html_text,
        ),
      ),

    // Razor directives: e.g., @page "/route"
    razor_directive: ($) =>
      seq(
        "@",
        choice(
          seq(
            alias($.identifier, $.directive_name),
            repeat1($.directive_argument),
          ),
          // Single-word directives (e.g., @inject)
          $.identifier,
        ),
      ),
    directive_argument: ($) => token(prec(1, /[^\s@{}<>]+/)),

    // Razor code block: @code { ... }
    // For now, just treat as opaque content; C# embedding to be added
    razor_code_block: ($) => seq("@", choice("code", "functions"), $.block),
    block: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $.razor_code_content,
            $.razor_expression,
            $.element,
            $.html_text,
          ),
        ),
        "}",
      ),
    // Placeholder for C# code inside @code blocks (to be replaced with C# embedding)
    razor_code_content: ($) => token(prec(-1, /[^{}@<]+/)),

    // Razor inline expression: e.g., @DateTime.Now
    razor_expression: ($) =>
      seq(
        "@",
        choice(
          $.identifier,
          seq($.identifier, ".", $.identifier),
          seq($.identifier, "(", optional($.expression_argument_list), ")"),
        ),
      ),
    expression_argument_list: ($) =>
      seq($.expression_argument, repeat(seq(",", $.expression_argument))),
    expression_argument: ($) => token(prec(1, /[^\s,@)]+/)),

    // HTML element (minimal, can be expanded)
    element: ($) =>
      choice(
        $.self_closing_tag,
        seq(
          $.start_tag,
          repeat(
            choice(
              $.element,
              $.html_text,
              $.razor_expression,
              $.razor_code_block,
            ),
          ),
          $.end_tag,
        ),
      ),
    start_tag: ($) => seq("<", $.tag_name, repeat($.attribute), ">"),
    end_tag: ($) => seq("</", $.tag_name, ">"),
    self_closing_tag: ($) => seq("<", $.tag_name, repeat($.attribute), "/>"),
    tag_name: ($) => /[a-zA-Z][a-zA-Z0-9-]*/,

    attribute: ($) =>
      seq($.attribute_name, optional(seq("=", $.attribute_value))),
    attribute_name: ($) => /[a-zA-Z_:][a-zA-Z0-9_:.-]*/,
    attribute_value: ($) =>
      choice(
        seq('"', repeat($.attribute_value_content), '"'),
        seq("'", repeat($.attribute_value_content), "'"),
      ),
    attribute_value_content: ($) => token(prec(-1, /[^"'@<>{}]+/)),

    // HTML text (not starting with <, @, or {)
    html_text: ($) => token(prec(-10, /[^<@{}][^<@{}]*/)),

    // Razor comment: @* ... *@
    razor_comment: ($) => seq("@*", repeat(/[^*]+|\*+[^@*]/), "*@"),

    // HTML comment: <!-- ... -->
    html_comment: ($) => seq("<!--", repeat(/[^-]+|-+[^->]/), "-->"),

    // Identifiers (for directives, expressions, etc.)
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});
