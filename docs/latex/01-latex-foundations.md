---
layout: default
title: 1. LaTeX foundations
---

# 1. LaTeX foundations

## 1.1 What LaTeX is

LaTeX is a document-preparation system built on TeX. Instead of manually positioning every visual element, an author writes structured source text with commands describing the document's logical parts. A compiler turns the source into a formatted document, commonly a PDF.

Why use it for technical work?
- It produces consistent, professional layouts.
- Mathematical expressions and structured references are handled well.
- The source is plain text, so it is portable and works naturally with version control.
- The author describes structure; LaTeX handles much of the typesetting.

## 1.2 Source, compiler and output

A LaTeX source file normally ends in `.tex`. It contains commands and document content. A LaTeX engine processes it and produces output such as PDF (and, in some workflows, DVI or PostScript).

Common ways to work:
- **Online:** Overleaf.
- **Offline:** a TeX distribution and editor on Windows or Linux (for example, MiKTeX/TeX Live with TeXstudio).

Typical PDF compilation command:

```bash
pdflatex main.tex
```

A second run can be needed to settle references, table of contents entries or numbering. Bibliography workflows may require additional tools/runs.

## 1.3 The three-part document structure

Every basic document has a preamble, a body start and a body end:

```latex
\documentclass[12pt,a4paper]{article} % document setup
\usepackage{amsmath}                 % packages belong in the preamble

\begin{document}                     % start of content
Hello, LaTeX!
\end{document}                       % end of content
```

- `\documentclass` selects the overall document type and options.
- `\usepackage` loads extra capabilities.
- `\begin{document}` and `\end{document}` enclose the content.

## 1.4 Document classes

| Class | Typical use | Structural feature |
|---|---|---|
| `article` | Short reports, papers and notes | Sections and subsections |
| `report` | Longer reports | Chapters and sections |
| `book` | Books and dissertations | Front matter, chapters and back matter |
| `beamer` | Presentations | Frames/slides |
| `letter` | Formal correspondence | Address, opening and closing structure |
| `exam` | Quizzes and tests | Exam-oriented question layout |

Example with options:

```latex
\documentclass[11pt,letterpaper]{report}
```

The class determines the document's broad structure. Options such as font size and paper size refine it.

## 1.5 Commands, comments and special characters

A command begins with a backslash. Many commands take an argument in braces:

```latex
\textbf{Important}
\emph{emphasized text}
```

A percent sign begins a comment. The rest of that source line is ignored:

```latex
% This is a note for the author
This sentence appears in the output.
```

Characters such as `# $ % & _ { } ~ ^ \` have special meanings. To print reserved characters, use their appropriate escaped forms, for example `\%`, `\_`, `\&`, `\#` and `\$`.

## 1.6 Whitespace and paragraphs

- Multiple ordinary spaces in source are generally treated as one space in output.
- A blank source line starts a new paragraph.
- `\\` can force a line break in contexts where a line break is appropriate; it is not a substitute for paragraph structure.

## 1.7 Text formatting and alignment

Common font-size commands include `\small`, `\large`, `\Large` and `\Huge`. Their scope can be limited with braces: `{\Large Larger text}`.

Text alignment environments:

```latex
\begin{flushleft}Left aligned\end{flushleft}
\begin{center}Centered\end{center}
\begin{flushright}Right aligned\end{flushright}
```

Lists use `itemize` for bullets and `enumerate` for numbered items. Each entry begins with `\item`.

## 1.8 Useful starter file

See [`starter.tex`](../../examples/latex/starter.tex) for a complete minimal document. Change the title and body, compile it, then add one section and one list.
