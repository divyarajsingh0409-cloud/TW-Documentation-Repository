---
layout: default
title: 3. Mathematics and matrices
---

# 3. Mathematics and matrices

LaTeX mathematics is written in math mode. The lecture introduces inline/display forms, mathematical symbols, equation environments, arrays and matrix environments.

## 3.1 Inline and display mathematics

Inline maths stays in the sentence:

```latex
The relation is \(x+y=10\).
```

Display maths is set apart from the paragraph:

```latex
\[
x+y=10
\]
```

Use `\(...\)` and `\[...\]` for clear modern delimiters. The dollar forms `$...$` and `$$...$$` are also shown in common material, but prefer the bracket forms in structured documents.

## 3.2 Packages

Load `amsmath` for enhanced equation, alignment and matrix environments; `amssymb` supplies additional mathematical symbols.

```latex
\usepackage{amsmath,amssymb}
```

## 3.3 Superscripts, subscripts and Greek letters

```latex
\[a_i^2 + b_j^3\]
\[\alpha + \beta = \gamma\]
```

Use braces when an exponent or subscript contains more than one character: `x^{n+1}`, `a_{ij}`.

## 3.4 Common mathematical constructions

```latex
\[\frac{a+b}{c},\qquad \sqrt{x},\qquad \sum_{i=1}^{n} i\]
\[\prod_{i=1}^{n} a_i,\qquad \int_0^1 x^2\,dx\]
\[\binom{n}{k}\]
```

Relations and logic symbols are written with commands such as `\leq`, `\geq`, `\neq`, `\in`, `\subset`, `\forall`, `\exists`, `\land` and `\lor`.

## 3.5 Numbered equations

```latex
\begin{equation}
E = mc^2
\label{eq:energy}
\end{equation}

Equation~\ref{eq:energy} expresses mass-energy equivalence.
```

The `equation` environment numbers an equation. Add `\label` and refer to it with `\ref` rather than typing a number manually.

## 3.6 Long and aligned equations

Use `multline` for a long expression split across lines, and `align` when several lines should align at a relation symbol:

```latex
\begin{align}
f(x) &= x^2 + 2x + 1 \\
     &= (x+1)^2
\end{align}
```

The `gather` environment centres a group of equations. Use the starred forms (such as `align*`) when numbering is not wanted.

## 3.7 Arrays and piecewise functions

The `array` environment creates aligned columns inside math mode. Column alignment is declared using `l`, `c` and `r`:

```latex
\[
\begin{array}{c|c}
x & x^2 \\
1 & 1 \\
2 & 4
\end{array}
\]
```

A piecewise definition can use `cases`:

```latex
\[
f(x)=\begin{cases}
x^2, & x \geq 0,\\
-x, & x < 0.
\end{cases}
\]
```

## 3.8 Matrices

The `amsmath` matrix environments provide different delimiters:

| Environment | Appearance |
|---|---|
| `matrix` | No surrounding delimiter |
| `pmatrix` | Parentheses |
| `bmatrix` | Square brackets |
| `Bmatrix` | Curly braces |
| `vmatrix` | Single vertical bars |
| `Vmatrix` | Double vertical bars |

Example:

```latex
\[
A=\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

Use `&` between columns and `\\` between rows. Optional row spacing can be added after a row break, for example `\\[4pt]`. `smallmatrix` is useful for compact inline matrices.

## 3.9 Practice file

Compile [`mathematics.tex`](../../examples/latex/mathematics.tex). Then change the matrix entries, add one equation label and write a piecewise function of your own.
