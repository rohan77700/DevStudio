# Collaboration Workflow

For example, created a new branch directly on GitHub, we can use the `fetch` command to download this new branch.
```zsh
git fetch
```

When we run `fetch` we got a remote tracking branch. We can run `git branch` to list all the local branches, but this new fetched branch will not be displayed, because it is a remote tracking branch. We can see it with this command:
```zsh
git branch -r
```

Now we can create a new local branch that maps to this remote tracking branch. To do that we use the command:
```zsh
git switch -c <local-branch> <remote-tracking-branch>
```

After all team members have set up the branch in their local machine, they can collaborate in this branch.

If one team member deletes this branch from the **Remote Repository**, other team member will still have the the remote tracking branch in their machine. To remove remote tracking branches that are not in the **Remote Repository**, run the command:
```zsh
git remote prune <remote-repository>
```
