# Recovering Lost Commits

With the `reflog` command we can see a log of how a reference (or pointer) as moved in our history. If we do not supply any options we will see how the `HEAD` pointer moved in history.  
```zsh
git reflog <reference>
```

Every entry of the `reflog` command starts with the commit `HEAD` point to after the operation, then a unique identifier. In the example we have `HEAD@{0}` for the first entry, `HEAD@{1}` for the second entry, and so on. In front of the identifier we see what happened.

| Commit ID | Identifier | Message                 |
| :-------: | :--------: | :---------------------- |
|  17ef5be  |  HEAD@{1}  | reset: moving to HEAD~4 |

So we can revert any of these operations to recover lost commits. In the example the operation `HEAD@{0}` is resetting `HEAD~1`. We can recover the lost commit with the `reset` command. We can use the identifier or the the `commit ID`.
