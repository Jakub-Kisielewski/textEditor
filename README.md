## Terminal Based Text Editor
This project is a lightweight, terminal-based text editor inspired by the [original](https://github.com/antirez/kilo) Kilo editor by Salvatore Sanfilippo.

# What I learned
This is a learning project for myself to get familiar with low level manipulation of the terminal and interacting with the OS more confortably via system calls.

# Features
* Basic text editing - insert, delete, new lines 
* File persistence - Saving, Opening 
* Modular Syntax Highlighting - currently supports .c, .h and .cpp files 
* Search functionality - With live highlighting 
* Status bar - Displays information about file such as file length, current line and file type 
* Message bar - Displays messages to user such as confirmation of successful save operations 
* Supports tabs, scrolling and window resizing 

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
