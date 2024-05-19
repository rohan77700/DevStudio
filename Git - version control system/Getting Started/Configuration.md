# Configuring Git

## Settings

The fist time we use git we have to specify a few configuration settings.

- Name
- Email
- Default editor
- Line ending

## Settings Level

We can specify these configurations settings at three different levels:

1. System => Apply to all users of the current computer.
2. Global => Apply to all repositories of the current user.
3. Local => Apply to the current repository.

## Command to apply settings

The command to apply setting is `git config --global <setting> <value>`. The flag `--global` specifies we are applying setting the the Global level.

In the terminal:

```zsh
git config --global user.name "Your Name"
    
git config --global user.email your.email@example.com
    
git config --global core.editor "code --wait"

git config --global -e
```
    
code for **Visual Studio Code** the `--wait` tells the terminal to wait until the window is closed.

`-e` or `--edit` command to open the config file in the editor.

### End of lines

To handle end of lines correctly we have to configure a property called `core.autocrlf`. These is a very important setting, so git can properly handle end of lines.

### macOS / Linux

On macOS and Linux end of lines are marked with one special character:

- Line Feed: `\n`

```zsh
git config --global core.autocrlf input
```

### Windows

On Windows end of lines are marked with two special characters:

- Carriage Return: `\r`
- Line Feed: `\n`

```zsh
git config --global core.autocrlf true
```

![End of Line Characters](../../assets/git-assets/04.png "End of Line Characters")


## Getting Help

To get help about git command we simply type: 
    
```zsh
git config --help 
```

will give us the help command about the `config` command. Press `space` to go to the next page and `esc` to exit.

If we use the flag `-h` we will get a shorter summary of the help command.