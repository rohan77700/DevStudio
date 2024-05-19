# Initializing a Repository

### Create a directory:  

```zsh    
mkdir project
```

### Navigate to your project directory:

```zsh
cd path/to/your/project/
```

### Initialize the Git repository:

```zsh
git init
```

This command should return the following message:

```zsh
❯ git init

Initialized empty Git repository in /path/to/your/project/.git/
```

Inside our project directory the command `git init` as created a directory `.git`, by default it is hidden because we are not supposed to touch it. With the command `ls -a` we can see the git sub directory.