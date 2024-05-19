# Sharing Tags

## Push tag

By default the `push` command doesn't transfer tags to the **Remote Repository**. We have to explicit `push` them, with the command:
```zsh
git push origin <tag-name>
```
```zsh
git push origin v1.0
```

## Deleted pushed tag

To delete an already pushed tag from the **Remote Repository**, we use the command:
```zsh
git push origin --delete <tag-name>
```
```zsh
git push origin --delete v1.0
```

This only deletes the tag from the **Remote Repository**, it will still be present in the **Local Repository**.
