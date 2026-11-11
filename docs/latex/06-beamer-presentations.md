---
layout: default
title: 6. Beamer presentations
---

# 6. Beamer presentations

Beamer is a LaTeX document class for slide-based presentations. The class changes the document structure from report/article pages to **frames**, where each frame represents a slide.

## 6.1 Minimal presentation

```latex
\documentclass{beamer}
\title{Technical Writing}
\author{Student Name}
\date{\today}

\begin{document}
\begin{frame}
  \titlepage
\end{frame}

\begin{frame}{Why documentation?}
  Documentation makes decisions and project knowledge easier to share.
\end{frame}
\end{document}
```

## 6.2 Frames and structure

- `\begin{frame}{Title}` starts a slide.
- `\titlepage` displays presentation metadata.
- `\section{...}` groups related slides and can appear in navigation elements.
- Standard LaTeX content such as text, equations and lists can be used inside frames.

## 6.3 Bullet points

```latex
\begin{frame}{Documentation benefits}
  \begin{itemize}
    \item Clear communication
    \item Easier maintenance
    \item Shared understanding
  \end{itemize}
\end{frame}
```

## 6.4 Themes and appearance

Beamer provides themes that affect navigation and visual layout. A theme can be selected in the preamble, for example:

```latex
\usetheme{Madrid}
```

The exact appearance depends on the selected theme and colour theme. Keep slides readable: one main idea per frame, concise bullets and consistent typography.

## 6.5 Overlays

Overlays reveal content in stages:

```latex
\begin{itemize}
  \item<1-> First point
  \item<2-> Second point appears on the next step
\end{itemize}
```

The overlay specification controls when an item appears. This is useful for presenting a sequence without putting every point on screen at once.

## 6.6 Compile and inspect

Compile the `.tex` file with a LaTeX engine or use Overleaf. Open [`lecture-demo.tex`](../../examples/beamer/lecture-demo.tex) and inspect its title slide, frame titles, theme and overlay.
