---
layout: default
title: 10. GitHub and collaborative development
---

# 10. GitHub and collaborative development

## 10.1 What GitHub adds

GitHub hosts Git repositories online and adds collaboration features such as code review, pull requests, Issues, Actions and repository permissions. Git handles version history; GitHub provides a shared place to publish and coordinate work.

## 10.2 Repository visibility and README

A GitHub repository can be public (anyone can view it) or private (access is restricted). A `README.md` introduces the project and should explain its purpose, contents, setup/usage and contribution context.

## 10.3 Connect a local repository to GitHub

Create an empty repository on GitHub, then connect the local repository:

```bash
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git remote -v
```

Replace the placeholders with the actual account and repository. `origin` is the conventional name for the primary remote. Fetch and push URLs identify where Git retrieves and sends updates.

## 10.4 Push, clone, fetch and pull

```bash
git push -u origin main
git clone https://github.com/USERNAME/REPOSITORY.git
git fetch origin
git pull origin main
```

- **Push:** sends local commits to a remote.
- **Clone:** creates a local repository copy, including history, and configures the original remote (commonly `origin`).
- **Fetch:** downloads remote updates but does not integrate them into the current branch.
- **Pull:** fetches and integrates updates into the current branch, commonly by merge or rebase.

Fetch is useful when you want to inspect remote changes before integrating them.

## 10.5 Branches

A branch is an independent line of development. It is a movable reference to a commit, not a full separate copy of the project.

```bash
git branch                         # list local branches
git branch feature-notes           # create branch
git switch feature-notes            # switch branch
git switch -c docs-update           # create and switch
```

Use descriptive names such as `feature-login`, `fix-navbar` or `docs-update`. Develop a feature away from `main` so unfinished work does not mix with the primary project history.

## 10.6 Merge branches

Switch to the branch that should receive the changes, then merge:

```bash
git switch main
git merge feature-notes
```

The checked-out branch is the target. A merge integrates the changes from the named branch into it.

## 10.7 Merge conflicts

A conflict occurs when Git cannot automatically combine competing changes—for example, when two developers edit the same lines.

Conflict markers look like:

```text
<<<<<<< HEAD
content from the current branch
=======
content from the incoming branch
>>>>>>> feature-notes
```

Resolution process:
1. Open every conflicted file.
2. Decide what the final content should be; do not blindly keep both versions.
3. Remove conflict markers.
4. Test/check the result.
5. Stage the resolved file and complete the merge commit if Git requires it.

A conflict means human judgment is needed; it does not automatically mean the repository is damaged.

## 10.8 Pull requests and code review

A pull request (PR) proposes integrating changes from one branch into another. A typical process:
1. Create a focused feature branch.
2. Make and commit changes.
3. Push the branch to GitHub.
4. Open a PR and describe the purpose.
5. Review comments, tests and suggested changes.
6. Update the branch if needed, then merge when approved.

Good reviews check correctness, possible bugs, readability and tests. Keep PRs small enough to review and explain the change clearly.

## 10.9 Forks

A fork is a separate repository copy under another account or namespace. It is commonly used to contribute to a project when you do not have direct write access: fork, clone your fork, make changes and propose them to the original project through a PR.

**Fork vs clone:** a fork creates a hosted copy under another account; a clone downloads a repository to a local machine.

## 10.10 Issues, Projects and Releases

- **Issues:** track bugs, feature requests, questions and tasks.
- **Projects:** organize work and monitor progress.
- **Tags:** identify important commits.
- **Releases:** package a version around a tag and attach release notes/downloadable files.

## 10.11 Merge vs rebase

Merge combines histories and can create a merge commit. Rebase reapplies commits onto a different base, producing a more linear history. The lecture introduces both; for shared branches, avoid rewriting history others may already depend on unless the team explicitly agrees.

## 10.12 Common recovery situations

| Situation | First response |
|---|---|
| Push rejected | Fetch remote changes and integrate them, then push again |
| Merge conflict | Resolve file markers, stage and finish the merge |
| Authentication failed | Check authentication method and repository permissions |
| Wrong branch | Check `git branch` and switch before making further commits |

Never share passwords, personal access tokens or private SSH keys.
