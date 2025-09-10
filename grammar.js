/**
 * Standalone Razor grammar for Tree-sitter
 *
 * This variant exposes externals for:
 *  - `csharp_code_content`                      -> used for `@code { ... }` blocks
 *  - `razor_attribute_value_text_double`        -> plain text fragment inside a double-quoted attribute
 *  - `razor_attribute_value_expr_double`        -> razor/C# expression fragment inside a double-quoted attribute
 *  - `razor_attribute_value_text_single`        -> plain text fragment inside a single-quoted attribute
 *  - `razor_attribute_value_expr_single`        -> razor/C# expression fragment inside a single-quoted attribute
 *
 * The goal:
 *  - Let the external scanner split attribute inner content into text / expression fragments.
 *  - Provide a `razor_expression_inner` so queries can inject the C# grammar without the leading `@`.
 *
 * Notes:
 *  - The external scanner must be implemented to produce the above externals. It should:
 *    - For @code/@functions blocks: produce a single `csharp_code_content` token that excludes the braces.
 *    - For quoted attribute values: produce a sequence of text/expr externals (text fragments do not include quotes;
 *      expr fragments should NOT include the leading '@' so they are pure C# for injection).
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Diagnostics: lightweight tracing to help debug require/load-time problems.
// Set environment variable TS_GRAMMAR_TRACE=1 to enable these logs when Node requires grammar.js.
// Keep inside a try/catch to avoid interfering with loading in environments that don't expose process.
try {
  if (
    typeof process !== "undefined" &&
    process &&
    process.env &&
    process.env.TS_GRAMMAR_TRACE
  ) {
    console.log(
      "grammar.js: required; TS_GRAMMAR_TRACE =",
      process.env.TS_GRAMMAR_TRACE,
    );
  }
} catch (e) {
  /* swallow any errors to avoid affecting grammar loading */
}

module.exports = grammar({
  name: "razor",

  // External tokens provided by the scanner
  externals: ($) => [
    $.csharp_code_content,
    $.razor_attribute_value_text_double,
    $.razor_attribute_value_expr_double,
    $.razor_attribute_value_text_single,
    $.razor_attribute_value_expr_single,
  ],

  // Conflicts to help the parser disambiguate attribute internals and top-level constructs.
  conflicts: ($) => [
    // attribute_value may conflict with the various externals the scanner emits
    [$.attribute_value, $.razor_attribute_value_text_double],
    [$.attribute_value, $.razor_attribute_value_expr_double],
    [$.attribute_value, $.razor_attribute_value_text_single],
    [$.attribute_value, $.razor_attribute_value_expr_single],
    [$.attribute_value_content, $.razor_attribute_value_text_double],
    [$.attribute_value_content, $.razor_attribute_value_expr_double],
    [$.attribute_value_content, $.razor_attribute_value_text_single],
    [$.attribute_value_content, $.razor_attribute_value_expr_single],

    // Common top-level ambiguities
    [$.source_file, $.html_text],
    [$.razor_directive, $.razor_expression],
  ],

  // Whitespace and comments are extras
  extras: ($) => [/\s/, $.razor_comment, $.html_comment],

  rules: {
    // Top-level: allow a reasonable set of constructs
    source_file: ($) =>
      repeat(
        choice(
          $.razor_code_block,
          $.razor_directive,
          $.razor_expression,
          $.element,
          $.html_text,
          $.razor_error,
        ),
      ),

    // Razor directives, prefer them slightly over inline expressions
    // Examples: @page "/route", @using System
    razor_directive: ($) =>
      prec(
        1,
        seq(
          "@",
          choice(
            seq(
              alias($.identifier, $.directive_name),
              repeat1($.directive_argument),
            ),
            $.identifier,
          ),
        ),
      ),

    directive_argument: ($) => prec(-10, token(prec(1, /[^\s@{}<>]+/))),

    // Razor code blocks such as @code { ... } or @functions { ... }
    // The external scanner provides `csharp_code_content` (inner content, no braces)
    razor_code_block: ($) =>
      seq("@", choice("code", "functions"), "{", $.csharp_code_content, "}"),

    // Razor expressions: we push the actual C# content into `razor_expression_inner`
    // so that injection queries can target the inner node and avoid the leading '@'.
    razor_expression: ($) => seq("@", $.razor_expression_inner),

    // Inner forms of a razor expression (safe captures)
    razor_expression_inner: ($) =>
      choice(
        // simple identifier: @foo
        $.identifier,
        // dotted access: @Foo.Bar
        seq($.identifier, ".", $.identifier),
        // method-like call: @Foo(arg1, arg2)
        seq($.identifier, "(", optional($.expression_argument_list), ")"),
        // parenthesized form: @( expr-list )
        seq("(", optional($.expression_argument_list), ")"),
      ),

    expression_argument_list: ($) =>
      seq($.expression_argument, repeat(seq(",", $.expression_argument))),
    expression_argument: ($) => token(prec(1, /[^\s,@)]+/)),

    // HTML elements (minimal)
    element: ($) =>
      choice(
        $.self_closing_tag,
        seq(
          $.start_tag,
          repeat(choice($.element, $.html_text, $.razor_expression)),
          $.end_tag,
        ),
      ),

    start_tag: ($) =>
      seq("<", $.tag_name, repeat(choice($.attribute, $.razor_attribute)), ">"),
    end_tag: ($) => seq("</", $.tag_name, ">"),
    self_closing_tag: ($) =>
      seq(
        "<",
        $.tag_name,
        repeat(choice($.attribute, $.razor_attribute)),
        "/>",
      ),
    tag_name: ($) => /[a-zA-Z][a-zA-Z0-9-]*/,

    // Attributes (plain and Razor prefixed)
    attribute: ($) =>
      seq($.attribute_name, optional(seq("=", $.attribute_value))),
    razor_attribute: ($) =>
      seq("@", $.identifier, optional(seq("=", $.attribute_value))),
    attribute_name: ($) => /[a-zA-Z_:][a-zA-Z0-9_:.-]*/,

    // Attribute inner content:
    // - For double-quoted: a repeated sequence of text and expr externals emitted by the scanner.
    // - For single-quoted: similar, but single-quote variants.
    attribute_value: ($) =>
      choice(
        seq(
          '"',
          repeat(
            choice(
              $.razor_attribute_value_text_double,
              $.razor_attribute_value_expr_double,
            ),
          ),
          '"',
        ),
        seq(
          "'",
          repeat(
            choice(
              $.razor_attribute_value_text_single,
              $.razor_attribute_value_expr_single,
            ),
          ),
          "'",
        ),
      ),
    attribute_value_content: ($) =>
      choice(
        $.razor_attribute_value_text_double,
        $.razor_attribute_value_expr_double,
        $.razor_attribute_value_text_single,
        $.razor_attribute_value_expr_single,
      ),

    // HTML text (avoid starting with <, @, or {)
    html_text: ($) => prec(1, token(prec(-10, /[^<@{}][^<@{}]*/))),

    // Razor comment and HTML comment
    razor_comment: ($) => seq("@*", repeat(/[^*]+|\*+[^@*]/), "*@"),
    html_comment: ($) => seq("<!--", repeat(/[^-]+|-+[^->]/), "-->"),

    // Identifier
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Fallback for stray '@'
    razor_error: ($) => seq("@", token.immediate(/[^\s{]/)),
  },
});
