---
layout: default
title: 7. Doxygen: automatic code documentation
---

# 7. Doxygen: automatic code documentation

## 7.1 Purpose

Doxygen is an open-source documentation generator. It reads specially formatted comments in source code and produces reference documentation for functions, classes and modules. It supports languages including C, C++, Python and Java, and is commonly used for libraries and APIs.

Documentation matters because it clarifies requirements, helps maintenance and onboarding, supports quality/compliance work and makes technical knowledge easier to share.

## 7.2 What Doxygen can generate

- HTML documentation for browsing.
- LaTeX/PDF manuals.
- Other formats such as RTF, XML, DocBook and man pages.
- Cross-references, call graphs and inheritance diagrams.
- Markdown content, LaTeX formulas, code examples and diagrams (Graphviz/DOT support).

## 7.3 Installation and verification

- Windows: use the installer from [doxygen.nl/download.html](https://www.doxygen.nl/download.html).
- Debian/Ubuntu: `sudo apt-get install doxygen`.
- macOS: `brew install doxygen`.

Verify installation:

```bash
doxygen --version
```

## 7.4 Basic workflow

1. Add Doxygen-formatted comments to the source code.
2. Generate a configuration file: `doxygen -g Doxyfile`.
3. Edit the configuration to point to the source files and choose output formats.
4. Run: `doxygen Doxyfile`.
5. Browse `html/index.html` (or build the LaTeX output into a PDF).

## 7.5 C/C++ comment syntax

```cpp
/**
 * @brief Adds two integers.
 *
 * Returns the sum of the supplied values.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of a and b.
 */
int add(int a, int b);
```

A Doxygen comment is not merely a normal comment: tags tell the generator how to label the information.

## 7.6 Python docstring style

```python
def increment(value: int) -> int:
    """Increase a value by one.

    Args:
        value: The integer to increment.

    Returns:
        The incremented integer.
    """
    return value + 1
```

The lecture shows Python documentation using docstring fields such as `:param`, `:type`, `:return` and `:rtype`.

## 7.7 Common tags

| Tag | Meaning |
|---|---|
| `@brief` / `\\brief` | Short summary |
| `@param` / `\\param` | Parameter description |
| `@return` / `\\return` | Return value |
| `@author` | Author information |
| `@version` | Version information |
| `@see` | Related item/reference |
| `@note` | Additional note |
| `@class` | Class documentation |

Use the same tag style consistently throughout a project.

## 7.8 Classes, grouping and diagrams

Document a class and its public methods. Group related functions logically with Doxygen grouping commands. Graphviz support can be enabled in the configuration (the lecture highlights `HAVE_DOT = YES`) to produce call/inclusion/inheritance diagrams. DOT or PlantUML directives can embed diagrams when the relevant support is installed and configured.

## 7.9 Important configuration choices

The generated `Doxyfile` contains many settings. The lecture highlights output switches such as:

```ini
GENERATE_HTML   = YES
GENERATE_LATEX  = YES
GENERATE_RTF    = NO
GENERATE_XML    = NO
HAVE_DOT        = YES
```

The actual source input and diagram settings must also be configured for the project.

## 7.10 Good documentation habits

- Explain a function's purpose and contract, not only its parameter types.
- Keep the brief summary distinct from the detailed explanation.
- Document public APIs and modules.
- Use a consistent tag set and layout.
- Keep `Doxyfile` under version control and update docs during code review.
- Generated documentation can be published through GitHub Pages or an internal site.

## 7.11 Mini-project

Use the [Doxygen example](../../examples/doxygen/). Generate a configuration, point it at the example source, run Doxygen and open `html/index.html`. Explore the function/class pages and cross-references.

Further reading: [Doxygen Manual](https://www.doxygen.nl/manual/).
