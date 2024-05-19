# Installing Git

### On macOS

1. Using Homebrew(recommended):

    If you don’t have Homebrew installed, you can install it by running the following command in the Terminal:

    ```zsh
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
    ```

    Once Homebrew is installed, you can install Git by running:

    ```zsh
    brew install git
    ```

2. Using Git Installer:

    - Download the latest Git installer for macOS from the official Git website: [Git for macOS](https://git-scm.com/download/mac).
    - Open the downloaded ***.dmg*** file and follow the installation instructions.

3. Using Xcode Command Line Tools:

    If you have Xcode installed, you might already have Git. To check, open the Terminal and type:

    ```zsh
    git --version
    ```

    If Git is not installed, you can install the Xcode Command Line Tools which include Git by running:

    ```zsh
    xcode-select --install
    ```

### On Windows

1. Using Git Installer:

    - Download the latest Git for Windows installer from the official Git website: [Git for Windows](https://gitforwindows.org).
    - Run the installer and follow the installation instructions. The default options are usually sufficient for most users.

2. Using Chocolatey (alternative method):

    If you have Chocolatey installed, you can install Git by running the following command in the Command Prompt or PowerShell:

    ```zsh
    choco install git
    ```

## Verify Git Installation

- After installing Git, you can verify the installation by opening a command line. 
- Terminal on macOS
- Command Prompt or PowerShell on Windows

```zsh
git --version
```