#  Staged and Unstaged Changes

Before committing code it is a best practice to review your code. To do that we can use the `git diff` command.

## Comparing the Staging Area

To view changes in files that we have added to the **Staging Area** we can run command:
```zsh 
git diff --staged
```

The first line is that the `diff` utility as called and with which arguments, what files we are comparing. The **`a/...`** is what we have in the last commit and **`b/...`** is what we currently have in the **Staging Area**.

After that we have a legend, changes in the old copy are marked with a red **`-`**, and changes to the new copy are marked with green **`+`**.

The legend is followed by a header, that tells us what parts of our file have been changed. The changes are split in chunks and there is a header for each chunk.

The **`-1,3`** referes to the old copy. It means starting from line one **`1`** three **`3`** lines have been extracted and shown here.

The **`+1,5`** referes to the new copy. It means starting from line one **`1`** five **`5`** lines have been extracted and shown here.

## Comparing the **Working Directory**

To compare what we have in the working directory with what we have in the **Staging Area** we run `git diff` command.

The output follows the same concept as `git diff --staged`.


# Visual Diff Tools

The most popular visual `diff` tools out there are:

- KDiff3
- P4Merge
- WinMerge (Windows only)
- VS Code

To set VS Code as our default diff tool we have to set Git configurations:

```zsh
git config --global diff.tool vscode
``` 
With this configuration we are giving a name to our default diff tool.

```zsh
git config --global difftool.vscode.cmd "code --wait --diff $LOCAL $REMOTE"` 
```
With this configuration we are telling git how to open VS Code. `code` is the VS code in `PATH` `--wait` to tell the terminal to wait for us to close VS Code, `--diff` We are telling VS Code we are comparing to files, and `$LOCAL $REMOTE` are to placeholders for the old file and new file.

Now we can run `git difftool` or `git difftool --staged` to open VS Code to see changes.
