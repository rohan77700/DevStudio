# Stashing

[Git Stashing docs](https://git-scm.com/book/en/v2/Git-Tools-Stashing-and-Cleaning)

## Create stash

When we switch branches Git restores our **Working Directory** to the last snapshot of the target branch. In case we have local changes in the **Working Directory** that have not yet been committed, they could be lost. In such situations Git does not allows us to switch branch, it will throw an error.
```zsh
❯ git switch main
error: Your local changes to the following files would be overwritten by checkout:
    main.js
Please commit your changes or stash them before you switch branches.
Aborting
```

Let's imagine that this changes are still work in progress, and we do not want to commit them yet. In this situation we should stash our changes. Stashing changes means save them in a Git safe place, but they will be not part of the history. To do this we run the command:
```zsh
git stash push -m <stashing-message>
```

This command will stash(save) our changes, but they will not be displayed in the **Working Directory**. At this point we could switch branches and the changes will be safe.

If we have new untracked files, by default, they are not included in the stash, to include them we have to use the `--all` or `-a` option.
```zsh
❯ git stash push -a -m <stashing-message>
```

## List stashes

To view the stashes we run the command:
```zsh
git stash list
```
Each stash as a unique identifier, `stash@{0}`.

## Show stash changes

Before applying the changes to the **Working Directory** we can view them with the command:
```zsh
git stash show stash@{i}
```
Where `i` is the stash index. Or we just pass the index

## Apply stash changes to Working Direcotry

To apply the stash we use the command:
```zsh
git stash apply i
```

## Delete a stash

After applying the stash we can delete it run the command:
```zsh
git stash drop i
```
Or we may not need to apply the changes from the stash, so we can delete it without applying.

Alternately we can delete all stash run the command:
```zsh
git stash clear
```