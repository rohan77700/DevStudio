# Pushing

With the command:
```zsh
git push <remote-repository> <name-of-branch>
```
We can send (upload) our changes to the **Remote Repository**.

```zsh
̀❯ git push origin main
Enumerating objects: 124, done.
Counting objects: 100% (124/124), done.
Delta compression using up to 8 threads
Compressing objects: 100% (119/119), done.
Writing objects: 100% (121/121), 4.92 MiB | 1.30 MiB/s, done.
Total 121 (delta 14), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (14/14), completed with 1 local object.
To github.com:rohan77700/DevStudio.git
   0e0dffb..5d0550c  main -> main
```

It is also possible to abbreviate this command and only run `git push`, by default Git assumes the **Remote Repository** `origin`, and it will also assume the current branch.

## Reject push

In some situations our `push` may be rejected. For example if some team member pushed before us. So the **Remote Repository** and **Local Repository** histories have diverged.

To resolve this, first we have to `pull` the **Remote Repository** and merge the changes, and then we can `push`.
