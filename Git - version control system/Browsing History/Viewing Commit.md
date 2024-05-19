# Viewing a Commit

## Show commit

To view what was changed in a commit we can use the `git show` command. We have to pass the commit as an argument. There are two ways to reference a commit:

1. By the unique identifier, for example `git show 1425b48`. We don't have to type all the characters, we can type fewer character as long they are unique.

2. Another way is using the `HEAD` pointer. `HEAD` is in front of the last commit, so we can type how many steps we want to go back `git show HEAD~1`, for example 1.

This will produce a similar output to `git diff`.

```zsh
commit c74602fd3c39a6be97a39c3648ebe523b6840e5f
Author: Ro Han <rohan77700@users.noreply.github.com>
Date:   Thu May 9 14:07:45 2024 +0530

    Implemented quick sort

diff --git a/Algorithms/Sorting/quickSort.c b/Algorithms/Sorting/quickSort.c
new file mode 100644
index 0000000..96b0588
--- /dev/null
+++ b/Algorithms/Sorting/quickSort.c
@@ -0,0 +1,73 @@
+// Quick Sort
+// Time calculation
+
+#include <stdio.h>
+
```

## Show commit single file

If we want to see the exact version of a file saved in commit instead of seeing the differences we can use `git show HEAD~1:README.md`. So the `git show` command followed by `:`and the path to a file, in this example `README.md`.

## Show commit all files and directories

If we want to see all the files and directories in a commit we use `git ls-tree`. A **tree** is a data structure for representing hierarchical information. These trees can have nodes and the nodes can have children. If we use `git ls-tree HEAD~1`.

We can use `git show <unique identifier>` to view the content of the `<file>`, in that commit.

We can run this command on a `tree <unique identifier>` like for instance `git show <unique identifier>`.

## Git objects

Using `git show` we can view **Git Objects**, these objects can be:

- Commits
- Blobs (Files)
- Tree (Directories)
- Tags


## Final version of a file

We can see the final version of a file in a particular commit with this command:
```zsh
git show HEAD~n:<path to the file>
```
For example `git show HEAD~2:"Git - version control system/README.md`. In here are 2 commits before `HEAD` which is the last commit.

## Files changed in a commit `--name-only`

To view the files that were changed in a given commit we use `git show HEAD~2 --name-only`.

## Files changed in a commit `--name-status`

Using the option `--name-status`, with information about the file, if it was added, modified, deleted or renamed.


## Viewing the Changes Across Commits

To see what has been changed across a range of commits we use the `diff` command. For example `gif diff HEAD~2 HEAD`, will return all the changes from the last two commits `HEAD~2` until the most recent commit `HEAD`.

We can add a particular file to that command to only see the changes made to that file.

Like with the `log` command, we can pass `--name-only` and `--name-status` to see the list of file that have been changed.