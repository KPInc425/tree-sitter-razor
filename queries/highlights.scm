; Highlight tag delimiters
"<" @tag.delimiter
"</" @tag.delimiter
">" @tag.delimiter
"/>" @tag.delimiter

; Highlight opening tag name
(element
  "<" @tag.delimiter
  (tag_name) @tag)

; Highlight closing tag name
(element
  "</" @tag.delimiter
  (tag_name) @tag
  ">" @tag.delimiter)

; Highlight attributes
(element
  (attribute
    (attribute_name) @attribute
    (attribute_value) @string))

; Razor-style attributes (e.g., @bind-Value)
(attribute
  (attribute_name) @attribute.special)

; Razor code blocks and expressions as embedded content
(razor_code_block) @embedded
(razor_expression) @embedded

; Highlight literal text outside tags
(text) @text.literal

(razor_directive) @keyword
