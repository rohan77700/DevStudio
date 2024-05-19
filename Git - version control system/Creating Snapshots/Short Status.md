# Short Status

With the `git status` command we see the status of the **Staging Area** and **Working Directory**.

```zsh
❯ git status

On branch main

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	modified:   file.txt

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	main.js

no changes added to commit (use "git add" and/or "git commit -a")
```

We can pass the `-s` to `git status -s` to have a shorter version.

```zsh
❯ git status -s
 M file.txt
?? main.js
```

In this output we have two columns, the left column represents the **Staging Area** and the right column the **Working Directory**.

We have modified file `file.txt`, thats why we have a red **`M`** in the right column, but the left column is empty because we don not have staged this modifications.

File `main.js` is a new file, that why we have red **`??`** in both columns.

Now if we run `git add file.txt`and add this file to the **Staging Area**, the output of `git status -s` will be:

```zsh
❯ gi status -s
M  file.txt
?? main.js
```

Now The **`M`** is green and is in the left column, meaning the modifications are in the **Staging Area**.

If we keep modifying the file and run `git status -s` we will see a **`M`** one green and another red. And if we add the new file to the **Staging Area** we will see a green **`A`**.

```zsh
❯ git status -s
MM file.txt
A  main.js
```
