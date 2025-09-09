; highlights.scm - Tree-sitter highlight queries for Razor/Blazor

; Razor directives (top-level nodes)
(razor_page_directive) @keyword
(razor_inject_directive) @keyword
(razor_using_directive) @keyword
(razor_model_directive) @keyword
(razor_rendermode_directive) @keyword
(razor_implements_directive) @keyword
(razor_layout_directive) @keyword
(razor_inherits_directive) @keyword
(razor_attribute_directive) @keyword
(razor_typeparam_directive) @keyword
(razor_namespace_directive) @keyword
(razor_preservewhitespace_directive) @keyword
(razor_block) @keyword
(razor_if) @keyword
(razor_try) @keyword
(razor_catch) @keyword
(razor_finally) @keyword
(razor_else) @keyword
(razor_switch) @keyword
(razor_for) @keyword
(razor_foreach) @keyword
(razor_while) @keyword
(razor_do_while) @keyword
(razor_section) @keyword
(razor_await_expression) @keyword
(razor_lock) @keyword
(explicit_line_transition) @keyword



; Razor comments
(razor_comment) @comment

; C# comments (inherited from C# grammar)
(comment) @comment

; Strings and numbers
(string_literal) @string
(integer_literal) @number
(real_literal) @number
(boolean_literal) @boolean

; Identifiers and types
(identifier) @variable
(qualified_name) @type
(generic_name) @type

; Function and property names
(method_declaration name: (identifier) @function)
(property_declaration name: (identifier) @property)

; HTML tags and attributes
(element
  "<" @tag.delimiter
  (_tag_name) @tag
  ">" @tag.delimiter)
(element
  (end_tag
    "</" @tag.delimiter
    (tag_name) @tag
    ">" @tag.delimiter))
(html_attribute_name) @attribute
(boolean_html_attribute) @attribute

; Razor attribute names
(razor_attribute_name) @attribute

; Attribute directives
(attribute_list
  "[" @punctuation.bracket
  "]" @punctuation.bracket)
(attribute (identifier) @attribute)
(attribute_argument_list
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

; Operators and punctuation
("=" @operator)
("+" @operator)
("-" @operator)
("*" @operator)
("/" @operator)
("%" @operator)
("==" @operator)
("!=" @operator)
("<" @operator)
(">" @operator)
("<=" @operator)
(">=" @operator)
("&&" @operator)
("||" @operator)
("!" @operator)
("." @operator)
("," @punctuation.delimiter)
(";" @punctuation.delimiter)
("{" @punctuation.bracket)
("}" @punctuation.bracket)
("[" @punctuation.bracket)
("]" @punctuation.bracket)
("(" @punctuation.bracket)
(")" @punctuation.bracket)
