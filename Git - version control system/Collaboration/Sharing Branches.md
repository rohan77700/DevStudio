# Sharing Branches

## Push branch to Remote Repository

When we create a new branch it will only be available in our **Local Repository**. If we want to share our branches with team members we have to `push` them to the **Remote Repository**.

If we try to `push` a branch, that it is not in the **Remote Repository**, with `git push`, we will get an error.

For example, created a branch named `bugfix` and tried to `push` it. Git will throw an error:
```zsh
❯ git push
fatal: The current branch bugfix has no upstream branch.
To push the current branch and set the remote as upstream, use

    git push --set-upstream origin bugfix
```

The error message `The current branch bugfix has no upstream branch.` means that this branch is not linked to a remote tracking branch in origin, if we run `git branch -vv`, we can see this.
```zsh
❯ git branch -vv
* bugfix 7b5ed2f fix the bug
  main   7b5ed2f [origin/main] fix the bug
```

To set the remote tracking branch we run the command Git suggested:
```zsh
git push --set-upstream origin <name-of-branch>
```
We only have to pass `--set-upstream` option.

We can abbreviate the option `--set-upstream` to `-u`.
```zsh
git push -u origin bugfix
```
And then again `git branch -vv` to see the result.

## Delete a branch from **Remote Repository**

To delete a branch from the **Remote Repository** we run `git push -d origin <name-of-branch>`. This will only detete the branch in the **Remote Repository**, it will still be available in the **Local Repository**.
```zsh
git push -d origin bugfix
```
We can check with `git branch -vv`.
