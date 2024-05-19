# Finding Bugs Using Bisect

Git provides a great tool to find bugs quickly **Bisect**.

Image that we have a bug in an application, but we do not know where the bug was introduced. Using the **Bisect** to we can narrow our search.

First we have to tell it that the current state, being the last commit, is a bad commit. And them we have to give it a good commit, as the good state.

Running `git log --oneline`, at that point in time the application was ok.

So first we run the command:
```zsh
git bisect start
```
This will initialize the the **`bisect`** operation.

Then we tell it the bad commit, which is the current one, run the command:
```zsh
git bisect bad
```
Then we give it a good commit run the command:
```zsh
git bisect good <unique ID>
```

If we run the `git log --oneline --all`. We can see that the `HEAD` is detached. So Git as made a checkout to the middle of the history, between the bad and good commit we gave `bisect`. So our **Working Directory** will be restored to that point in time.

After we are done we have to attach the `HEAD` pointer to the branch with the command:
```zsh
git bisect reset
```

With `git bisect` we can split our history in half, to see various commit, and find the commit that introduced a problem.
