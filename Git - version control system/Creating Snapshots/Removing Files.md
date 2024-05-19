# Removing Files

To remove a file from the project we use the same workflow. Just delete the file normally, then we add the changes to the **Staging Area** and the we commit.

```zsh
git rm file.txt
```

Our working directory has changes that are not staged or committed, now we run `git status`, we will get the following output:

```zsh
❯ git status

On branch main

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	deleted:    file.txt

no changes added to commit (use "git add" and/or "git commit -a")
```

If we run `git ls-files`, we will see a list of files in the **Staging Area**, in my case:

```zsh
❯ git ls-files

file.txt
```

Even though we removed `file.txt` from the **Working Directory** it still exist in the **Staging Area**.

Use `git add file.txt` to stage this change or this deletion be more accurately.

```zsh
❯ git status

On branch main

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	deleted:    file.txt
```

And now `git commit -m "Remove unnecessary file"`.

To remove a file we have to remove it from both the **Working Directory** and the **Staging Area**.