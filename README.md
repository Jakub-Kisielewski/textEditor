## Terminal Based Text Editor
This project is a lightweight, terminal-based text editor inspired by the [original](https://github.com/antirez/kilo) Kilo editor by Salvatore Sanfilippo.

# What I learned
This is a learning project for myself to get familiar with low level manipulation of the terminal and interacting with the OS more confortably via system calls.

# Features
Raw terminal mode - no external dependencies <br>
Basic text editing - insert, delete, new lines <br>
File persistence - Saving, Opening <br>
Modular Syntax Highlighting - currently supports .c, .h and .cpp files <br>
Search functionality - With live highlighting <br>
Status bar - Displays information about file such as file length, current line and file type <br>
Message bar - Displays messages to user such as confirmation of successful save operations <br>
Supports tabs, scrolling and window resizing <br>

# Keyboard Shortcuts
```
Ctrl-s -> Save file
Ctrl-Q -> Quit
Ctrl-F -> Search
Arrow keys -> Move cursor
Home/End/PageUp/PageDown -> Navigation
```

# Build & Run
To run this you will need GCC or Clang, a linux or macOS terminal. Once you have cloned this repository, run `./kilo [filename]`. If the file doesn't exist, then this text editor will create it when you save.
