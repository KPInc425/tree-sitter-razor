; highlights.scm - Minimal, safe highlight queries for Razor/Blazor
; This file intentionally keeps highlights conservative to avoid querying
; parent nodes that may be optimized away by the compiled parser.

; Razor comments and basic C# comments
(razor_comment) @comment
(comment) @comment

; Basic literals and identifiers (safe, commonly present)
(string_literal) @string
(integer_literal) @number
(real_literal) @number
(boolean_literal) @boolean

(identifier) @variable
(qualified_name) @type

; Common declarations (safe captures)
(method_declaration name: (identifier) @function)
(property_declaration name: (identifier) @property)

; Minimal HTML: only highlight literal tag delimiters (safe, token-level)
(start_tag
  "<" @tag.delimiter
  name: (tag_name) @tag
  ">" @tag.delimiter)
(end_tag
  "</" @tag.delimiter
  name: (tag_name) @tag
  ">" @tag.delimiter)
; Minimal HTML: only highlight literal tag delimiters (safe, token-level)
"<" @tag.delimiter
">" @tag.delimiter
"</" @tag.delimiter
"/>" @tag.delimiter

(start_tag
  "<" @tag.delimiter
  name: (tag_name) @tag
  ">" @tag.delimiter)
(end_tag
  "</" @tag.delimiter
  name: (tag_name) @tag
  ">" @tag.delimiter)

; Razor attribute markers
(razor_attribute_name) @attribute

; Operators and punctuation (kept minimal)
("=" @operator)
("," @punctuation.delimiter)
(";" @punctuation.delimiter)
("{" @punctuation.bracket)
("}" @punctuation.bracket)
("(" @punctuation.bracket)
(")" @punctuation.bracket)
