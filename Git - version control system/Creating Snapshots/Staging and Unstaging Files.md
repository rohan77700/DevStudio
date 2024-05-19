# Staging Files

Git is not going to automatically track our files we have to instruct it to track them.

We can run the command `git status` to see the status of the **Working Directory** and **Staging Area**. 

The output will be something like these:

```zsh
❯ git status

On branch main

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        main.js

nothing added to commit but untracked files present (use "git add" to track)
```

The above message is telling us we have untracked files.

Use the `git add` command to stage that file.

Now if we run `git status` again, we will have the following output:

```zsh
❯ git status

On branch main

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   main.js
```

If we make changes to the same file, after adding it to the **Staging Area** and run `git status`, we will have the following output:

```zsh
❯ git status

On branch main

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   main.js

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	modified:   main.js
```


# Unstaging Files

When we want to unstage a file from the **Staging Area**, we use this command:
```zsh
git restore --staged
```
We can pass to it as arguments a specific file or multiple files, with a `.` for all files, or patterns like for example `*.txt` for all text files.

```zsh
❯ git status

On branch main

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
    modified:   file.txt
```

Running `git restore --staged "02 Creating Snapshots/16- Unstaging Files.md"` will remove this changes from the **Staging Area**.

When we run `git status` again, we can see the changes are not staged for commit.

```zsh
❯ git status

On branch main

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
    modified:   file.txt

no changes added to commit (use "git add" and/or "git commit -a")
```

When we run the `git restore --staged` git removes that file from the **Staging Area** and places there the copy from the last commit with that file.


# Discarding Local Changes

When we want to discard local changes in the **Working Directory**, we use the `git restore`, without the `--staged`.

When we run this command, Git is going to take a copy from the next environment in this case the **Staging Area**, and copy it in the **Working Directory**.

We can pass to it as arguments a specific file or multiple files, with a `.` for all files, or patterns like for example `*.txt` for all text files.

In case of new files (untracked files), Git does not change anything, because it doesn't know where to get a previous version of this file, it doesn't exist in the **Staging Area** or **Repository**. To remove untracked files we can use `git clean` with the `-fd`, `-f` for force and `-d` for whole directories.

If we run this command without the `fd` on untracked files we will get a fatal error:

```zsh
fatal: clean.requireForce defaults to true and neither -i, -n, nor -f given; refusing to clean
```

This is a way of git to warns us that this can not be undone.