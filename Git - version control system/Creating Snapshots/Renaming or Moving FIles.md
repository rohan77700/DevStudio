# Renaming or Moving Files

To do this use the command `git mv`. This command stages the changes (both the renaming and moving) and helps to keep the repository's history clean. 

To run this command:
```zsh
git mv file.txt main.js
```

Now run `git status` command:
```zsh
❯ git status

On branch main

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	deleted:    file.txt

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	main.js

no changes added to commit (use "git add" and/or "git commit -a")
```

We have to changes and both are unstaged. One that is a delete operation, and a new untracked file.

```zsh
git add file.txt

git add main.js
```

```zsh
❯ git status

On branch main

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	renamed:    file.txt -> main.js
```

When we use the `git mv` command the changes are applied to both the **Working Directory** and the **Staging Area**.
