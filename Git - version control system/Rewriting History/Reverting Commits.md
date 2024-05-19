# Reverting Commits

In case we have pushed our commits to a public **Remote Repository** we should not use the `reset` command. We should use the `revert` command, this will create a new commit base on our target commit.

## Revert one commit

To revert a single commit we pass that commit to the `revert` command. Either by the `commit ID` or by the `HEAD~n` syntax. This will create new commit.

## Revert a range of commits

We can revert a range of commits using the `..` notation:
```zsh
git revert HEAD~4..HEAD
```
```zsh
git revert <commitID>..<commitID>
```

This operation will create a new commit for each commit reverted.

### Range revert with single commit `--no-commit`

Instead of creating one new commit for each reverted commit (which might pollute the history) we can use the option `--no-commit`, that will create only one commit, for all the reverted commits. With this options Git will add the required changes to the **Staging Area**, for each reverted commit.

```zsh
git revert --no-commit HEAD~4..HEAD
```

If we run `git status`, we can see the changes of the reverse of the last 4 commits.

If we are good with the changes we use the `--continue` option.

```zsh
git revert --continue
```

Or if we want to abort we use the `--abort` option.

```zsh
git revert --abort
```
