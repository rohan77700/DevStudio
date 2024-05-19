# Working with Branches

## Create new Branch

To create a new branch run the command:
```zsh
git branch <name-of-branch>
```
```zsh
git branch authentication
```

## View Branches

To view all the available branch run the command:
```zsh
git branch
```
```zsh
❯ git branch
  authentication
* main
```
The `*` in front of the ***main*** means that at the moment we are in that branch. It is also possible to view the current branch with `git status`.

## Change branches

Nowadays the command to changes branches
```zsh
git switch <name-of-branch>
``` 
It used to be `git checkout <name-of-branch>`, it is possible to still use the old command.
```zsh
❯ git switch authentication
Switched to branch 'authentication'
```

## Rename a branch `-m`

The branches name should represent the work that is being performed on it. To rename a branch run the command:
```zsh
git branch -m <old-name> <new-name>
```

## Commit to branch

When we commit to a branch this branch moves forward and the ***main*** branch stays where it is, we can see that with `git log --oneline`. The **HEAD** pointer will be pointing to the new branch head of **main**.
```zsh
2edd574 (HEAD -> authentication) fix form valid
7bcec51 (main) Added login and signup form
4dfeef4 Initial commit
```
If we switch back to **main** our **Working Directory** will be restored to that point.

## Delete a brach `-d` or `-D`

To delete, first we need to change to a different branch usually ***main***, then we use the `-d` option, but if this branch as unmerged changes with ***main***, Git will throw an error warning us.
```zsh
❯ git branch -d authentication
error: The branch 'authentication' is not fully merged.
If you are sure you want to delete it, run 'git branch -D authentication'
```
To force the deletion use this command:
```zsh
git branch -D <name-of-branch>
```