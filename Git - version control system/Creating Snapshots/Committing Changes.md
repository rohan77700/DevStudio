# Committing Changes

When the files in the **Staging Area**, we can commit them to the repository, with the command 

```zsh
git commit -m "Initial commit"
```

With this command a snapshot will be saved to the repository.

When a short, one line, message is not sufficient, because we need to explain in detail the changes that where made we can use the command `git commit`, without the `-m "Initial commit"`. These will open the default editor with a file named `COMMIT_EDITMSG`.

- In the first line we add a short description, ideal less than 80 characters, 
- Then we add a line break and after that we can type a long description. 
- After we save and close the file the changes are committed. 
- Back in the terminal our snapshot is committed


Example detailed commit:

```zsh
Initial assets

The assets include image related to git
# Please enter the commit message for your changes. Lines starting
# with '#' will be ignored, and an empty message aborts the commit.
#
# On branch main
# Your branch is up to date with 'origin/main'.
#
# Changes to be committed:
#	new file:   assets/git-assets/01.png
#	new file:   assets/git-assets/02.png
#	new file:   assets/git-assets/03.png
#	new file:   assets/git-assets/04.png
#	new file:   assets/git-assets/05.png
#
```


# Committing Best Practices

Our commits shouldn't be to big neither to small. We do not want to commit every time we change a file, neither we want to wait until we implement a featured end to end before committing.

The whole point of committing is to record checkpoint as we go.

So try to **Commit often** so as we're coding, as we reach a state we want to record, THEN make it commit.

For example, if we're fixing a **Bug** and then we accidentally find a **Typo** we shouldn't commit both these changes in one commit, we should have two separate commits. One for the **Bug** and another one for the **Typo**.

## Wording

Most people like to use the present tense for commit messages. But other conventions can be used. 

- PRESENT: Fix the bug
- PAST: Fixed the bug

## Conventional Commits

More in depth detail about commit messages in [Conventional Commits](https://www.conventionalcommits.org/en/v1.0.0/).


# Skipping the Staging Area

We don't always have to stage our changes before committing. But do this only if we're 100% sure our changes don't need to be reviewed.

To do this we run the command: 
```zsh
git commit -a -m "Initial commit"
```
we supply the flag `-a`, that means all modified files. Or we can use combining `-a -m`.
```zsh
git commit -am "Initial commit"
```