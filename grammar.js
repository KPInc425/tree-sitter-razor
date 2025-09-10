/**
 * Standalone Razor grammar for Tree-sitter (full refactor)
 * - No inheritance from C# grammar
 * - Top-level: HTML, Razor directives, Razor expressions
 * - C# embedding in @code blocks: content is marked as `csharp_code_content` for language injection by the editor
 * - Foundation for robust Razor/HTML/C# blending
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const CSHARP = require("tree-sitter-c-sharp/grammar");

module.exports = grammar({
  name: "razor",

  // External tokens provided by the scanner
  externals: ($) => [$.csharp_code_content, $.razor_attribute_value_content],

  // Conflict resolution for ambiguous parses between HTML/attribute content and embedded C#
  conflicts: ($) => [
    [$.attribute_value, $.razor_attribute_value_content],
    [$.attribute_value_content, $.razor_attribute_value_content],
    [$.source_file, $.html_text],
    [$.razor_directive, $.razor_expression],
  ],

  // Whitespace and comments
  extras: ($) => [/\s/, $.razor_comment, $.html_comment],

  // Top-level: Only Razor directives, HTML, and Razor blocks
  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.razor_code_block, // Only allow code blocks at the top level, before anything else
          $.razor_directive,
          $.razor_expression,
          $.element,
          $.html_text,
          $.razor_error, // fallback for lone @
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
    // Only allow directive_argument outside of code blocks
    directive_argument: ($) => prec(-10, token(prec(1, /[^\s@{}<>]+/))),

    // Razor code block: @code { ... }
    // Strict: only allow csharp_code_content inside braces
    razor_code_block: ($) =>
      seq("@", choice("code", "functions"), "{", $.csharp_code_content, "}"),
    // csharp_code_content is now provided by the external scanner

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
              $.razor_expression, // Only allow razor_expression, NOT razor_code_block
            ),
          ),
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

    attribute: ($) =>
      seq($.attribute_name, optional(seq("=", $.attribute_value))),
    razor_attribute: ($) =>
      seq("@", $.identifier, optional(seq("=", $.attribute_value))),
    attribute_name: ($) => /[a-zA-Z_:][a-zA-Z0-9_:.-]*/,
    // Attribute values are parsed entirely by the external scanner (razor_attribute_value_content).
    // The external scanner is responsible for handling embedded Razor expressions and any C#-like content,
    // so attribute_value_content delegates directly to the external token.
    attribute_value: ($) =>
      choice(
        seq('"', optional($.razor_attribute_value_content), '"'),
        seq("'", optional($.razor_attribute_value_content), "'"),
      ),
    attribute_value_content: ($) => $.razor_attribute_value_content,

    // HTML text (not starting with <, @, or {)
    html_text: ($) => prec(1, token(prec(-10, /[^<@{}][^<@{}]*/))),

    // Razor comment: @* ... *@
    razor_comment: ($) => seq("@*", repeat(/[^*]+|\*+[^@*]/), "*@"),

    // HTML comment: <!-- ... -->
    html_comment: ($) => seq("<!--", repeat(/[^-]+|-+[^->]/), "-->"),

    // Identifiers (for directives, expressions, etc.)
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Fallback for lone @ not matching any known construct

    razor_error: ($) => seq("@", token.immediate(/[^\s{]/)),
  },
});
