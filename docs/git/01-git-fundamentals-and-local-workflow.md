---
layout: default
title: 9. Git fundamentals and local workflow
---

# 9. Git fundamentals and local workflow

## 9.1 Why version control?

Version control records file changes over time so earlier versions can be inspected or restored. Without it, teams often create confusing copies, overwrite one another's work and lose the reason behind a change.

Benefits include traceable changes, safer collaboration, recovery, branch-based development and reproducibility.

## 9.2 Types of version control

The lecture distinguishes local, centralized and distributed version control. Git is **distributed**: each clone contains repository history and supports local commits without requiring a network connection.

## 9.3 Git is not GitHub

| Git | GitHub |
|---|---|
| Version-control tool | Hosting and collaboration platform |
| Works with local repositories | Hosts remote repositories |
| Tracks file changes and commits | Shares code, reviews changes and manages collaboration |
| Local work can happen offline | Online features require network access |

## 9.4 How Git stores work

Git records a project as a sequence of commits. A commit is a snapshot of staged project content, with metadata such as a unique hash, author, timestamp, message and parent relationship.

A repository includes project files and Git metadata in the hidden `.git` directory.

## 9.5 Install and configure

Install Git from [git-scm.com/downloads](https://git-scm.com/downloads) on Windows, or use the package manager appropriate to your operating system. On Debian/Ubuntu, the lecture shows `sudo apt-get install git`; on macOS, it mentions Homebrew.

Verify:

```bash
git --version
```

Set the author identity used in commit metadata:

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```

These values identify the author of commits; they are not your GitHub login credentials.

## 9.6 Create or initialize a repository

```bash
mkdir demo-project
cd demo-project
git init
```

`git init` creates repository metadata in the current folder.

## 9.7 The three main areas

1. **Working directory:** files being edited.
2. **Staging area/index:** selected changes prepared for the next commit.
3. **Local repository:** committed project history.

The normal flow is edit → stage → commit.

## 9.8 The basic workflow

```bash
git status
git add README.md
git status
git commit -m "Add project introduction"
git log --oneline
```

- `git status` shows untracked, modified and staged files, and whether the tree is clean.
- `git add` stages selected changes.
- `git commit` records staged changes.
- `git log` shows commit history.

Stage all changes with `git add .` only after checking what is present. Avoid staging secrets, local configuration and generated files.

## 9.9 Inspecting changes and tracked files

```bash
git diff                 # unstaged changes
git diff --staged        # staged changes
git ls-files             # files known to Git's index
```

Review the diff before committing. `git ls-files` is useful for seeing tracked/indexed files; it does not normally list untracked files.

## 9.10 Ignore files

A `.gitignore` file lists paths that Git should intentionally leave untracked. Typical entries include temporary files, caches, logs, local environment settings and generated output.

Example:

```gitignore
*.log
__pycache__/
.env
build/
```

Do not commit passwords, tokens or private keys.

## 9.11 Rename and delete

```bash
git mv old-name.txt new-name.txt
git rm obsolete.txt
```

These commands update the working tree and staging area so the change can be committed.

## 9.12 Undo carefully

Unstage without deleting the working copy:

```bash
git restore --staged filename
```

Discard unstaged edits to a tracked file:

```bash
git restore filename
```

This can destroy uncommitted work. Inspect with `git diff` first.

Undo a published commit with a new commit:

```bash
git revert <commit-hash>
```

`revert` preserves existing history and records an inverse change. It is generally safer for shared history than rewriting commits.

## 9.13 A local practice run

Create a text file, check status, stage it, commit it, edit it again, inspect the diff and create a second commit. Finish by reviewing `git log --oneline`.
