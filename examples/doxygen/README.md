# Doxygen example

1. Install Doxygen and check `doxygen --version`.
2. Open a terminal in this directory.
3. Generate a starter configuration: `doxygen -g Doxyfile`.
4. In `Doxyfile`, set at least:

```ini
PROJECT_NAME = "TW Doxygen Example"
INPUT = .
RECURSIVE = YES
FILE_PATTERNS = *.cpp
EXTRACT_ALL = YES
GENERATE_HTML = YES
GENERATE_LATEX = NO
```

5. Run `doxygen Doxyfile`.
6. Open `html/index.html` in a browser.

The generated `Doxyfile`, `html/` and other output are local build artifacts unless you intentionally decide to version/publish them. The source example is the file to edit when practising documentation comments.
