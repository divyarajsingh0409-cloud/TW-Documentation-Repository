---
layout: default
title: 2. Document layout and environments
---

# 2. Document layout and environments

This guide collects the document/page controls and environments covered in the continuation lecture.

## 2.1 Page setup

The document class controls the document's overall structure. Page style controls headers and footers.

```latex
\documentclass[12pt,a4paper]{article}
\usepackage[margin=2.5cm]{geometry}
\pagestyle{plain}
```

- `geometry` provides control over page margins.
- Common paper options include `a4paper` and `letterpaper`.
- Predefined page styles include `plain`, `empty` and `headings`.

## 2.2 Custom headers and footers

The `fancyhdr` package allows separate left, centre and right header/footer content.

```latex
\usepackage{fancyhdr}
\pagestyle{fancy}
\fancyhf{}                 % clear existing fields
\lhead{Technical Writing}
\rhead{LaTeX Notes}
\cfoot{\thepage}
```

## 2.3 Title, author, date and abstract

A standard title block can be generated with:

```latex
\title{A Short Technical Report}
\author{Student Name}
\date{\today}
\begin{document}
\maketitle
\begin{abstract}
A short summary of the report's purpose and main result.
\end{abstract}
\end{document}
```

Title-page appearance varies with the document class. In Beamer, an abstract is usually placed on a titled frame rather than treated as a normal report abstract block.

## 2.4 Sections and numbering

The hierarchy is normally:

```latex
\section{Main topic}
\subsection{Subtopic}
\subsubsection{Detail}
```

LaTeX numbers these headings automatically. An asterisk suppresses numbering:

```latex
\section*{Acknowledgements}
```

Numbering depth can be controlled with `secnumdepth`; the table-of-contents depth is controlled separately with `tocdepth`.

## 2.5 Lists and list customization

- `itemize`: unordered/bullet list.
- `enumerate`: ordered/numbered list.
- `description`: label-and-explanation list.

The `enumitem` package can customize spacing and labels. Keep list formatting consistent rather than manually inserting symbols and spaces.

## 2.6 Fonts and heading styles

- `sectsty` can customize section heading styles.
- `fontspec` gives access to system fonts, but requires XeLaTeX or LuaLaTeX rather than the traditional pdfLaTeX route.
- Choose a font workflow compatible with the compiler being used.

## 2.7 Line, paragraph and page control

| Need | LaTeX approach |
|---|---|
| New paragraph | Leave a blank line in source |
| Manual line break | `\\` where appropriate |
| Vertical space | `\vspace{...}` |
| New page | `\newpage` or `\clearpage` |
| Keep nearby paragraphs together | `samepage` environment |
| Suggest a hyphenation point | Insert a discretionary hyphen with `\\-` |

Use manual spacing sparingly. Structural commands generally produce more stable documents than repeated blank lines or arbitrary vertical gaps.

## 2.8 Example

A combined example is available in [`layout-demo.tex`](../../examples/latex/layout-demo.tex). Compile it and inspect how the class, margins, page style, title and section hierarchy affect the result.
