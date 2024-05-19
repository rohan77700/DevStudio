# Branches

Branches allows us to work in an isolated environment from the main line. So branches are a kind of separate isolated workspace.

![Branches line of work](../../assets/git-assets/11.png "Branches line of work")

The principal line of work (branch) is called ***master*** or ***main***. When we need to work, for example, on a new feature we can create a new branch to work on that feature. And when we are done we merge the new feature branch into the ***main*** branch.

## How does git manages branches

When we create a new branch Git creates a new pointer for that branch. When we work in that branch and make new commits Git moves that pointer forward, and the master or main pointer stays where it is. This way Git knows the latest code in each branch. To know in which branch we are working on, Git uses the **HEAD** pointer, when we switch banches Git points the **HEAD** pointer to the branch we want to work on, and updates the **Working Directory** accordingly.

![Git branches](../../assets/git-assets/12.png "Git branches")
