# Viewing History

## Log

We can use the `git log` command to view the commit history. This command produces and output like the following. It is order by the newest to oldest commit.

```zsh
commit 1425b480fcfa682220f9104b407826663eb365f6 (HEAD -> main)
Author: Ro Han <rohan77700@users.noreply.github.com>
Date:   Thu May 16 17:36:36 2024 +0530

    Initial commit
```

Each commit had a unique identifier, and hexadecial, 40 character that git generates automatically.

```zsh
commit 1425b480fcfa682220f9104b407826663eb365f6
```

Next to the first commit we have **`(HEAD -> main)`**:

- `HEAD` is a reference to the current branch.
- `main` beeing the current branch.

## Log one line

With the `git log --oneline` we can see a shorter version of the `log`command.

```zsh
1425b48 (HEAD -> main) Initial commit
c74602f Implemented quick sort
1e774e4 Implemented merge sort
415537e Implemented selection sort
791ea7a Implemented insertion sort
99eca79 Implemented bubble sort
6546669 Implemented binary search
```

## Reverse history

The `--reverse` reverts the log display history. It can be applied both to the log command and to the log one line command.

- `git log --reverse`
- `git log --oneline --reverse`

## Option --stat

With the `--stat` options we can se the list of file that have been changed in each commit or combined with the `--online` option.

- `git log --stat`
- `git log --oneline --stat`

## Option --patch

With the `--patch` option we can see the actual changes in each commit. 

- `git log --patch`
- `git log --online --patch`
