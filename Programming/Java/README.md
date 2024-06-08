# Java Programming Language

Java is a high-level, object-oriented programming language, is designed to be platform-independent, meaning that Java programs can run on any device that has a *Java Virtual Machine (JVM)*, regardless of the underlying hardware and software architecture.

## Java is widely used for developing:

- Applications
- Web Applications 
- Mobile Apps (Android apps are largely built using Java)
- Enterprise Software
- Scientific Applicationsa 

It has a large and active community, which contributes to its extensive ecosystem of libraries, frameworks, and tools that make Java development efficient and productive.

## Features

- Platform Independence
- Object-Oriented
- Simple and Familiar
- Robust
- Secure
- Multithreaded
- Dynamic and Extensible
- High Performance
- Distributed
- Standard Library
- Scalability and Performance
- Open Source

## Installation

### Installation on macOS
1. Download the JDK:
    - Go to the Oracle Java SE Downloads page.
    - Select the latest JDK version and download the macOS installer (usually a .dmg file).

2. Install the JDK:
    - Open the downloaded `.dmg` file and run the installer.
    - Follow the installation instructions.

3. Set Environment Variables:
    - Open the Terminal.
    - To set `JAVA_HOME` temporarily, use:

    ```zsh
    export JAVA_HOME=$(/usr/libexec/java_home)
    ```

    - To set it permanently, add the above line to your `~/.bash_profile` or `~/.zshrc` file (depending on your shell).

4. Verify the Installation:
    - Open a terminal and type `java --version` and `javac --version` to verify that Java is installed and the version is correct.

### Installation on Windows
1. Download the JDK:
    - Go to the Oracle Java SE Downloads page.
    - Select the latest JDK version and click on the "JDK Download" button.
    - Choose the appropriate installer for your Windows system (x64 Installer).

2. Install the JDK:
    - Run the downloaded `.exe` file.
    - Follow the installation instructions. By default, Java will be installed in the `C:\Program Files\Java` directory.

3. Set Environment Variables:
    - Open the Control Panel and go to System and Security > System.
    - Click on "Advanced system settings" and then "Environment Variables".
    - Under "System variables", click "New" and add a variable named `JAVA_HOME` with the path to your JDK installation directory (e.g., `C:\Program Files\Java\jdk-16`).
    - Find the `Path` variable in the "System variables" section, select it, and click "Edit". Add a new entry with `%JAVA_HOME%\bin`.

4. Verify the Installation:
    - Open a command prompt and type `java --version` and `javac --version` to verify that Java is installed and the version is correct.

## Resources

- [Official Website](https://www.java.com/en/)
- [Documentation](https://docs.oracle.com/en/java/javase/index.html)
- [Java Tutorial](https://docs.oracle.com/javase/tutorial/index.html)
- [Java SE API Specification](https://docs.oracle.com/en/java/javase/16/docs/api/index.html)