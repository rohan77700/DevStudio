# Comparing Branches

## Log differences

We can compare branches to see different commits between them. To do this use the command:
```zsh
git log <first-branch>..<second-branch>
```
This will return all the commits that are in `<second-branch>`, and not in `<first-branch>`.

It is also possible to use the `--oneline` option
```zsh
git log --oneline main..authentication
```

## See differences

To compare the actual changes between branches we use the `diff` command:
```zsh
git diff main..authentication
```
This will produce an output just like the normal `diff`, but comparing the two branches. If we are in the **main** branch we don't need to specify it in the command, we can run `git diff authentication`, this will have the same output.

We can also use the `--name-only` and `--name-status` options
```zsh
git diff --name-status main..authentication 
```