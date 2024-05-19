# Tagging

Tags are use to mark a certain point in the project. Most of the times they are used to mark release version, like v1.0.

There are two type of tags lightweight, and annotated tag. The lightweight as only the tag name, and a annotated tag has more properties, like tagger name, email and message. Because a annotated tag can have more info they are preferes to lightweight.

## Tagging in the last commit

If we want to tag the last commit run the command:
```zsh
git tag <name of the tag>
```

```zsh
git tag v1.0
```

## Tagging an earlier commit

To tag an earlier commit we have to pass the commit after the tag.
```zsh
git tag <name of teh tag> <referent to commit>
```

```zsh
git tag v1.0 9fceb02
```

With `git log --oneline` we can see the tag.

```zsh
b71dc32 (HEAD -> main) Initial commit
9fceb02 (tag: v1.0) fix bug in js
acdc33e restore file
```

## Reference a commit using a tag

It is also possible to reference a commit by it tag.
```zsh
git checkout v1.0
```

## See all the tags

To see all the tag in the project run the command:
```zsh
git tag
```

## Annotated tag `-a`

To create a annotated tag we use the option `-a`, followed by the tag name and then `-m` and a message.
```zsh
git tag -a v1.1 -m 'Release version 1.1'
```

## Tags messages `-n`

To view the tags and messages use the `-n`option.
```zsh
git tag -n
```

This will output:
```zsh
v1.0            fix bug in js
v1.2            Release version 1.2
```

The lightweight tag is associated with the commit message that it point to. And the annotated tag has a custom message.

## Show Tag

Run `git show <tag name>` to view all the infos of that tag. Similar to `git show <commit>`. If the command is ran on an annotated tag besides the commit info we also have the tag info.
```zsh
tag v1.1
Tagger: John Doe <johndoe@example.com>
Date:   Fri May 17 14:32:25 2024 -0400

Release version 1.1

commit 9fceb02b0c7f8e8fb7a61c7a62892b766e0f1e67 (tagged)
Author: Jane Smith <janesmith@example.com>
Date:   Thu May 16 14:00:00 2024 -0400

    Initial commit

diff --git a/README.md b/README.md
new file mode 100644
index 0000000..e69de29
```

## Delete a tag `-d`

To delete a tag use the `-d` option.
```zsh
git tag -d v1.0
```

This returns the deleted tag:
```zsh
Deleted tag 'v1.0' (was 9fceb02)
```
