---
layout: default
title: 5. Colours, figures and picture environment
---

# 5. Colours, figures and picture environment

## 5.1 Enabling colour

Load `xcolor` in the preamble:

```latex
\usepackage{xcolor}
```

Text colour:

```latex
This word is \textcolor{blue}{blue}.
```

The lecture also demonstrates colouring mathematical expressions, predefined colours, custom colours, page backgrounds, highlights and changing colour scope.

## 5.2 Predefined and custom colours

Examples of predefined names include `red`, `blue`, `green`, `violet`, `teal`, `brown`, `cyan` and `lime` (availability depends on the xcolor colour-name set loaded).

Define a custom colour using RGB or HTML notation:

```latex
\definecolor{customblue}{RGB}{45,65,170}
\definecolor{softpink}{HTML}{F6DCE8}
\textcolor{customblue}{Custom colour text}
```

For a local colour scope:

```latex
{\color{gray}Only this group is gray.}
```

A declaration such as `\color{gray}` continues until the current group ends. This is why braces matter.

## 5.3 Backgrounds and highlights

`\colorbox{yellow}{Important}` places a coloured background behind text. `\pagecolor{yellow!10}` changes the page background. Use subtle backgrounds so body text remains readable.

Math can also be coloured, for example `\textcolor{red}{x+y}` inside math mode.

## 5.4 Including an image

Place the image file in the project folder (or use a correct relative path) and load `graphicx`:

```latex
\usepackage{graphicx}
...
\includegraphics[width=0.65\textwidth]{campus-photo.png}
```

The `width` option controls the displayed size. `height`, `scale` and `angle` are also common options.

## 5.5 Figure environment, caption and reference

```latex
\begin{figure}[htbp]
\centering
\includegraphics[width=0.6\textwidth]{campus-photo.png}
\caption{A sample campus view}
\label{fig:campus}
\end{figure}

The image is shown in Figure~\ref{fig:campus}.
```

A figure is a float: LaTeX may move it to improve page layout. The caption gives context; the label creates a reference target. Put `\label` after `\caption` so the correct figure number is captured.

## 5.6 Rotating, cropping and side-by-side images

The lecture introduces rotating/cropping and placing multiple images side by side. `graphicx` provides options such as `angle` and `trim`/`clip`. `minipage` or the `subcaption` package can be used for side-by-side layouts.

## 5.7 Picture environment and coordinates

The `picture` environment positions drawing commands using coordinates. It can create basic diagrams without an external image:

```latex
\setlength{\unitlength}{1cm}
\begin{picture}(5,3)
  \put(0,0){\line(1,0){4}}
  \put(0,0){\line(0,1){2}}
  \put(2,1){\circle{0.35}}
  \put(2.2,1.2){Point}
\end{picture}
```

The lecture explores lines, arrows, circles, ovals, frames, text placement, dashed boxes, curves and repeated patterns. Coordinates are measured in multiples of `\unitlength`.

## 5.8 Example

See [`figures-and-picture.tex`](../../examples/latex/figures-and-picture.tex). It uses a generated placeholder box so it compiles without an external image; replace the placeholder with your own image when practising `\includegraphics`.
