---
layout: default
title: 4. Tables in LaTeX
---

# 4. Tables in LaTeX

Tables are built from rows and columns. The `tabular` environment defines the column layout; the `table` float is used when a caption and reference are needed.

## 4.1 Basic table

```latex
\begin{center}
\begin{tabular}{|c|c|c|}
\hline
A & B & C \\
\hline
1 & 2 & 3 \\
\hline
4 & 5 & 6 \\
\hline
\end{tabular}
\end{center}
```

- `l`, `c`, `r`: left, centre and right alignment.
- `|`: vertical rule.
- `&`: separates cells.
- `\\`: ends a row.
- `\hline`: draws a horizontal rule.

## 4.2 Merging columns

Use `\multicolumn{count}{format}{content}` to combine adjacent columns in one row:

```latex
\begin{tabular}{|c|c|c|}
\hline
\multicolumn{2}{|c|}{Student details} & Grade \\
\hline
Name & Roll No. & A \\
\hline
\end{tabular}
```

## 4.3 Merging rows

The `multirow` package provides `\multirow`:

```latex
\usepackage{multirow}
...
\begin{tabular}{|c|c|}
\hline
\multirow{2}{*}{Group A} & Item 1 \\
                         & Item 2 \\
\hline
\end{tabular}
```

## 4.4 Captions, labels and positioning

```latex
\begin{table}[htbp]
\centering
\caption{Sample marks}
\label{tab:marks}
\begin{tabular}{|l|c|}
\hline
Subject & Marks \\
\hline
Maths & 90 \\
Writing & 88 \\
\hline
\end{tabular}
\end{table}

See Table~\ref{tab:marks} for the values.
```

The placement letters are requests to LaTeX, not absolute guarantees: `h` here, `t` top, `b` bottom and `p` a float page. `\centering` centres the table contents.

## 4.5 Sizing and colour

The lecture demonstrates changing row/column sizing and applying row/column colour. Useful packages include `array`, `xcolor` (with table support) and `colortbl`.

```latex
\usepackage[table]{xcolor}
...
\rowcolor{blue!15}
Name & Score \\
```

Keep colour contrast high and use colour to clarify groups, not decorate every cell.

## 4.6 Example

Open [`tables.tex`](../../examples/latex/tables.tex) for a runnable example containing a basic table, merged cells, caption/reference and row shading.
