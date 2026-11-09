---
layout: default
title: 11. Git command reference
---

# 11. Git command reference

Run commands from the project folder in Git Bash or a terminal. Replace placeholders such as `<file>` and `<commit-hash>` with real values.

| Command | What it does |
|---|---|
| `git --version` | Checks Git installation |
| `git config --global user.name "Name"` | Sets commit author name |
| `git config --global user.email "email"` | Sets commit author email |
| `git config --global --list` | Displays global configuration |
| `git init` | Initializes a repository |
| `git status` | Shows working-tree and staging state |
| `git add <file>` | Stages a file |
| `git add .` | Stages changes under the current directory; inspect first |
| `git commit -m "message"` | Records staged changes |
| `git log` | Shows detailed commit history |
| `git log --oneline` | Shows compact history |
| `git diff` | Shows unstaged differences |
| `git diff --staged` | Shows staged differences |
| `git ls-files` | Lists files in the index |
| `git mv <old> <new>` | Renames/moves a tracked file |
| `git rm <file>` | Removes a tracked file and stages the removal |
| `git restore --staged <file>` | Unstages a file |
| `git restore <file>` | Discards unstaged edits to a tracked file |
| `git revert <hash>` | Creates a commit that reverses another commit |
| `git remote -v` | Lists remote URLs |
| `git remote add origin <url>` | Adds a remote named origin |
| `git push -u origin main` | Pushes main and sets upstream tracking |
| `git clone <url>` | Copies a remote repository locally |
| `git fetch origin` | Downloads remote updates without integrating |
| `git pull origin main` | Fetches and integrates main |
| `git branch` | Lists local branches |
| `git branch <name>` | Creates a branch |
| `git switch <name>` | Switches branches |
| `git switch -c <name>` | Creates and switches to a branch |
| `git merge <name>` | Merges the named branch into the current branch |

## Safe sequence for a normal update

```bash
git status
git diff
git add <files-you-intend-to-commit>
git diff --staged
git commit -m "Describe the change"
git log --oneline
git push
```

## Commands that need extra care

- `git restore <file>` discards unstaged edits to that file.
- `git add .` may stage files you did not intend to publish.
- `git push --force` and history-rewriting commands are intentionally not part of this basic practice sequence; use them only when you understand the effect and have team agreement.
- Check `git status` before and after important operations.
