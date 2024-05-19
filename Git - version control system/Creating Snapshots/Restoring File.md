# Restoring a File to an Earlier Version

Once git tracks a file it stores every version of that file in the database. With Git there are two way to restore a earlier version of file:

1. Restore a file to previous version
2. Undoing a commit

We are going to look at restoring a file. For example if we delete a file by accident.

Using the `git rm` command will deleted a file. And is now marked as `deleted` in the **Staging Area**. We can see it with `git status`

```zsh
❯ git status

On branch main

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        deleted:    file.txt
```

After committing `git commit -m 'delete file'`, and if we do a `git log --oneline`

```zsh
git log --oneline

c02f795 (HEAD -> main) delete file
be01fd7 Initial commit
[...]
```

We can recover that file with `git restore`. By default git will restore a file from the next environment, so if the file we want to restore is in the **Working Directory**, Git will restore it from the **Staging Area**, and if it is in the **Staging Area** Git will restore it from the repository, or last commit.

In this case with this command: 
```zsh
git restore --source=HEAD~1 file.txt
```
We override the default behavior and restore the last commit that is when we deleted the file. With `git status` we will see the recovered file marked as untracked.

```zsh
❯ git status

On branch main

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        file.txt

nothing added to commit but untracked files present (use "git add" to track)
```


# Restoring a Deleting File

If we want to recover a deleted file we can do it by checkout the previous commit, of the one that deleted the file.

For example `git rm main.js` and delete this file. Wih `git log --oneline`, we can see that the file was deleted in the last commit.

Now to recover that file we checkout the previous commit (or the parent commit).
```zsh
git checkout 41cfeb7 -- main.js
```

After running this command we can see that we have in the **Staging Area** one new file with `git status`.

```zsh
❯ git status
On branch main

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   main.js
```
