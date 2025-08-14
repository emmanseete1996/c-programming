# My C Cheatsheet

This is a simple C program containing all of my cheatsheet.

This project demonstrates how to structure a C application with separate source files, a Makefile, and useful build commands.

---

## Build Instructions

Build (Release mode, optimized with `-O2`):
```zsh
make
```

Build (Debug mode, with `-O0 -g`):
```zsh
make debug
```

Build (Explicit release mode):
```zsh
make release
```

Clean build artifacts:
```zsh
make clean
```

---

## Running the Program

Run without arguments:
```zsh
make run
```

---

## Debugging with GDB

If you built with **debug mode**:
```zsh
make debug
```

Run the program under GDB:
```zsh
gdb ./my_program
```

Inside gdb, run your program:
```zsh
run
```

Quit GDB:
```zsh
quit
```
