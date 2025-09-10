; injections.scm - Precise injection points for Razor grammar (expression-only for attributes)
;
; - Only inject C# for the actual C#/Razor fragments, not for plain text or quotes.
; - Attribute internals are split into text and expr externals by the scanner.
; - Inline expressions use razor_expression_inner so the leading @ is not injected.

; Inject C# inside @code/@functions blocks - capture only the inner C# content (exclude braces)
(razor_code_block
  (csharp_code_content) @injection.content
  (#set! injection.language "csharp"))

; Inline expressions: capture the inner node (identifier, dotted, or parenthesized)
(razor_expression
  (razor_expression_inner) @injection.content
  (#set! injection.language "csharp"))

; Inject C# for attribute value fragments that are expressions (double-quoted)
(razor_attribute_value_expr_double) @injection.content
(#set! injection.language "csharp")

; Inject C# for attribute value fragments that are expressions (single-quoted)
(razor_attribute_value_expr_single) @injection.content
(#set! injection.language "csharp")

; Also capture expression externals when they appear as children of attribute_value nodes
(attribute_value
  (razor_attribute_value_expr_double) @injection.content
  (#set! injection.language "csharp"))

(attribute_value
  (razor_attribute_value_expr_single) @injection.content
  (#set! injection.language "csharp"))

; And when nested inside razor_attribute (e.g. @bind="...")
(razor_attribute
  (attribute_value (razor_attribute_value_expr_double) @injection.content)
  (#set! injection.language "csharp"))

(razor_attribute
  (attribute_value (razor_attribute_value_expr_single) @injection.content)
  (#set! injection.language "csharp"))

; Optional: capture attribute_value_content alias nodes if grammar variants expose them
(attribute_value_content
  (razor_attribute_value_expr_double) @injection.content
  (#set! injection.language "csharp"))

(attribute_value_content
  (razor_attribute_value_expr_single) @injection.content
  (#set! injection.language "csharp"))
