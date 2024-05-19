# Cloning a Repository

To clone a repository we need the repository url. For example: **`https://github.com/rohan77700/DevStudio.git`**.

Then in our machine we run the command: 
```zsh
git clone <url>
```
This will create a local copy of the repository. This command only copies the `main` branch, which is the default branch, even if there are other branches in the **Remote Repository**.

```zsh
❯ git clone https://github.com/rohan77700/DevStudio.git
Cloning into 'DevStudio'...
remote: Enumerating objects: 107, done.
remote: Counting objects: 100% (107/107), done.
remote: Compressing objects: 100% (70/70), done.
remote: Total 107 (delta 29), reused 97 (delta 24), pack-reused 0
Receiving objects: 100% (107/107), 1.64 MiB | 307.00 KiB/s, done.
Resolving deltas: 100% (29/29), done.
```

## Changing the default directory

When using the `clone` command Git will create a directory with the same name of the repository. We can change it by passing a new name after the url
```zsh
git clone <url> <my-folder>
```

## Remote Repository

When we clone a **Remote Repository**, in the case from GitHub, Git names this source repository `origin`.

### Reference `origin/main`

The **`origin/main`** pointer, tell us where is the **`main`** branch in the **Remote Repository**. If we start to work and commit to the **Local Repository**, this one will move forward, but **`origin/main`**, will stay here it is until we push our work.

Technically this is called a remote tracking branch, we can not switch to it or commit to it.

### List remote repositories

We can have more than one **Remote Repositories**, with the command `git remote` we can list all the **Remote Repositories** connected to our **Local Repository**.

```zsh
❯ git remote -v
origin  https://github.com/rohan77700/DevStudio.git (fetch)
origin  https://github.com/rohan77700/DevStudio.git (push)
```

Using the `-v` option we get a more verbose output, showing more details. In this example we only have one **Remote Repository**.
