# tree-sitter-razor

[![CI][ci]](https://github.com/tris203/tree-sitter-razor/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)

<!-- NOTE: uncomment these if you're publishing packages: -->
<!-- [![npm][npm]](https://www.npmjs.com/package/tree-sitter-razor) -->
<!-- [![crates][crates]](https://crates.io/crates/tree-sitter-razor) -->
<!-- [![pypi][pypi]](https://pypi.org/project/tree-sitter-razor/) -->

A Tree-sitter parser for razor files.

## Known Edge Cases & Limitations

This grammar aims to robustly support Razor and Blazor syntax, including directives, nested C# blocks, and semantic highlighting. However, there are some known edge cases and limitations:

- Some rare or ambiguous combinations of Razor and C# constructs (especially deeply nested or mid-line transitions) may not parse as expected.
- Blending of HTML, Razor, and C# is complex; certain edge cases may require further grammar refinement.
- If you encounter a parsing issue with a valid Razor construct, please file an issue with a minimal reproducible example.

## References

<!-- NOTE: add the grammar's references here -->

[Razor syntax reference for ASP.NET Core](https://learn.microsoft.com/en-us/aspnet/core/mvc/views/razor?view=aspnetcore-9.0)

[ci]: https://img.shields.io/github/actions/workflow/status/tris203/tree-sitter-razor/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
