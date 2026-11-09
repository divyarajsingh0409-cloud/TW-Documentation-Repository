# Publishing this repository on GitHub

1. Create a new repository on GitHub. Choose Public or Private according to the instructor's submission instructions.
2. Extract this folder, open Git Bash inside it and run:

```bash
git init
git add .
git commit -m "Add technical writing documentation"
git branch -M main
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git push -u origin main
```

3. Replace the remote URL with your own repository URL.
4. To publish the optional Jekyll site, open repository **Settings → Pages**, choose the deployment source/branch as required by GitHub Pages, and save. Check the published URL after deployment.

Before submission, open the repository from a second browser session or device and verify the README, docs and example files are visible. Also practise the Git commands locally; uploading files alone does not demonstrate Git command knowledge.
