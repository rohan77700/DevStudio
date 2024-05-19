# Formatting the Log Output

## Option `--pretty=format:`

We can personalize the output of the log command with the option: 
```zsh
git log --pretty:format:
```
We must pass it a format string that where we can use plain text combined with placeholder that will be replaced by Git with information. 

In [Git PRETTY FORMATS](https://git-scm.com/docs/pretty-formats) we can see a list of all the placeholders. We can also pass colors to the output.


# Aliases

We can set aliases from frequently used commands so we do not have to type them in the long form. That is done the config property `alias`, like so.

```zsh
git config --global alias.l "log --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
```

We are setting the `l` as an alias of `log --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit`

So after setting that property we can use `git l`.


# Finding Contributors Using Shortlog

If we need to see everyone that made contributions to our project we can use the command:
```zsh
git shortlog
```

- The contributor
- The number of commits 
- The commits messages

The command accepts various options, for example `git shortlog -n` will sort output according to the number of commits per author.

The command `git shortlog -s`, suppress commit descriptions, only provides commit count and authors.

We can also filter using `--before=` and `--after=`, to view the contributor in a date range.


# Finding the Author of Line Using Blame

Git Blame is a command to find the author of a crappy line of code. Run the command:
```zsh
git blame <file>
```

For each line of code in the file

1. The commit ---> ID
2. The author ---> Author
3. Date & Time ---> Date / Time
4. Line number ---> n
5. The code itself

## Git blame with email `-e`

We can use other option with `git blame`, for example `-e` will also return the email of the author.
```zsh
git blame -e main.js
```

## Git blame filter by lines `-L`

We can filter the lines we want using the `-L` and we have to pass to it the start line and end line separated by a comma.
```zsh
git blame -L 1,3 main.js
```