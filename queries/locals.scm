; Function definitions (C# methods in Razor blocks)
(method_declaration
  name: (identifier) @function.definition)

; Property definitions
(property_declaration
  name: (identifier) @property.definition)

; Variable definitions (fields, locals, parameters)
(variable_declarator
  name: (identifier) @variable.definition)

(parameter
  name: (identifier) @parameter.definition)

; Razor section definitions
(razor_section
  (identifier) @section.definition)

; References (usages)
(identifier) @reference
