# 10- Dropping Commits

To drop commits we use interactive `rebase` operation. So we have to pass to the `rebase` operation the parent of the commit we want to drop
```zsh
git rebase- i <parent-commit>
```

In interactive `rebase` operations conflicts might arise.

In the short status we can see the `files.txt` file as two changes `D` for `deleted`, because the rebase operations drops the commit where the file was introduced, and `M` for `modified`, because these file is modified in the next commit.
```zsh
❯ git status -s
M  main.js
DU files.txt
```

To resolve this conflict we use the `mergetool` command:
```zsh
❯ git mergetool

This message is displayed because 'merge.tool' is not configured.
See 'git mergetool --tool-help' or 'git help config' for more details.
'git mergetool' will now attempt to use one of the following tools:
tortoisemerge emerge vimdiff nvimdiff
Merging:
files.txt

Deleted merge conflict for 'files.txt':
  {local}: deleted
  {remote}: modified file
Use (m)odified or (d)eleted file, or (a)bort?
```

In the case we want the `m` option for modified. Then we continue the rebase operation, with `git rebase --continue`.
