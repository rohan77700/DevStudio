# Pushing

With the command:
```zsh
git push <remote-repository> <name-of-branch>
```
We can send (upload) our changes to the **Remote Repository**.

```zsh
̀❯ git push origin main
```

It is also possible to abbreviate this command and only run `git push`, by default Git assumes the **Remote Repository** `origin`, and it will also assume the current branch.

## Reject push

In some situations our `push` may be rejected. For example if some team member pushed before us. So the **Remote Repository** and **Local Repository** histories have diverged.

To resolve this, first we have to `pull` the **Remote Repository** and merge the changes, and then we can `push`.
