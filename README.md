# Technical Writing & Documentation Toolkit

A practical, topic-wise reference for the Technical Writing (TW) material covered in class: **LaTeX, Beamer, Doxygen, Google Docs, Git and GitHub**.

<div align="center">
  <img src="assets/banner.svg" alt="Technical Writing and Documentation Toolkit" width="100%" />
</div>

## What is inside?

| Area | Documentation | Hands-on material |
|---|---|---|
| LaTeX foundations | Source files, compilation, document structure, classes, text and page formatting | `examples/latex/` |
| LaTeX environments | Page/document styles, title pages, abstracts, sections, lists, spacing and numbering | `docs/latex/02-document-layout-and-environments.md` |
| Mathematics | Inline/display maths, symbols, equations, arrays, piecewise functions and matrices | `examples/latex/mathematics.tex` |
| Tables | `tabular`, merged cells, alignment, sizing, colours, captions and references | `examples/latex/tables.tex` |
| Colours, figures & picture | `xcolor`, image placement, captions, labels, coordinate drawings and shapes | `examples/latex/figures-and-picture.tex` |
| Beamer | Slide structure, frames, themes, lists and overlays | `examples/beamer/lecture-demo.tex` |
| Doxygen | Comment syntax, tags, configuration, diagrams and generated output | `examples/doxygen/` |
| Google Docs | Structure, styles, collaboration, version history, citations and export | Topic guide |
| Git | Version control model, local workflow, history, diff, ignore and undo | Command reference |
| GitHub | Remotes, push/pull/clone, branches, merge, PRs, forks and Issues | End-to-end workflow |

## Documentation map

### LaTeX and Beamer
1. [LaTeX foundations](docs/latex/01-latex-foundations.md)
2. [Document layout and environments](docs/latex/02-document-layout-and-environments.md)
3. [Mathematics and matrices](docs/latex/03-mathematics-and-matrices.md)
4. [Tables](docs/latex/04-tables.md)
5. [Colours, figures and picture environment](docs/latex/05-colours-figures-and-picture.md)
6. [Beamer presentations](docs/latex/06-beamer-presentations.md)

### Documentation tools
7. [Doxygen](docs/tools/01-doxygen.md)
8. [Google Docs](docs/tools/02-google-docs.md)

### Version control
9. [Git concepts and local workflow](docs/git/01-git-fundamentals-and-local-workflow.md)
10. [GitHub and collaboration](docs/git/02-github-and-collaboration.md)
11. [Git command reference](docs/git/03-git-command-reference.md)

## Quick start

**Read:** start with the foundations, then open the matching example file.

**Compile LaTeX:** install a TeX distribution (for example, MiKTeX on Windows) or use Overleaf. Run `pdflatex filename.tex` from the folder containing the source. Some references and tables may require a second compilation.

**Try Doxygen:** install Doxygen, open a terminal in `examples/doxygen/`, generate a configuration with `doxygen -g Doxyfile`, set `INPUT = .` and `RECURSIVE = YES`, then run `doxygen Doxyfile`. Open `html/index.html`.

**Try Git:** open Git Bash in this repository and follow [the local workflow](docs/git/01-git-fundamentals-and-local-workflow.md).

## Repository structure

```text
.
├── README.md
├── docs/
│   ├── latex/
│   ├── tools/
│   └── git/
├── examples/
│   ├── latex/
│   ├── beamer/
│   └── doxygen/
├── assets/
└── _config.yml
```

## Visual style

The visual palette is sampled from the lecture slides: **indigo-blue title bars**, **deep navy footer accents**, white content areas and dark readable text. The same palette is used in the optional GitHub Pages site stylesheet.

## Scope and source note

This repository reorganizes and explains the supplied TW lecture material; it is not a slide-by-slide transcript. Examples are concise teaching examples built around the commands and concepts in those lectures. Where a topic is not covered in the supplied slides, it is not presented as a class requirement.

## Suggested demonstration order

1. Explain the difference between LaTeX source and compiled output; compile one `.tex` example.
2. Open the Beamer example and identify a frame and an overlay.
3. Run Doxygen and open its generated HTML index.
4. Show a Google Docs collaboration feature (comment/suggesting/version history).
5. Demonstrate `git status → git add → git commit → git log`.
6. Show a remote repository, a feature branch and the pull-request workflow.

## Learning outcomes

After working through the repository, a student should be able to choose a suitable documentation tool, create structured technical documents and presentations, generate code reference documentation, collaborate on shared documents, and use Git/GitHub to track and share project changes.
