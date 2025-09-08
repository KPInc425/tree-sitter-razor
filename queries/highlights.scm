; highlights.scm - Tree-sitter highlight queries for Razor/Blazor

; Razor directives
(at_page) @keyword
(at_inject) @keyword
(at_using) @keyword
(at_model) @keyword
(at_rendermode) @keyword
(at_implements) @keyword
(at_layout) @keyword
(at_inherits) @keyword
(at_attribute) @keyword
(at_typeparam) @keyword
(at_namespace) @keyword
(at_preservewhitespace) @keyword
(at_block) @keyword
(at_if) @keyword
(at_try) @keyword
(at_catch) @keyword
(at_finally) @keyword
(at_else) @keyword
(at_switch) @keyword
(at_for) @keyword
(at_foreach) @keyword
(at_while) @keyword
(at_do) @keyword
(at_section) @keyword
(at_await) @keyword
(at_lock) @keyword
(at_colon_transition) @keyword

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
  (_end_tag
    "</" @tag.delimiter
    (_tag_name) @tag
    ">" @tag.delimiter))
(_html_attribute_name) @attribute
(_boolean_html_attribute) @attribute

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
