# Compiler
CC = clang

# Compiler flags
CFLAGS = -Iinclude -Wall -Werror -g -std=c99

# Source files
SOURCES = src/main.c

# Object files (derived from source files)
OBJECTS = $(patsubst src/%.c, build/%.o, $(SOURCES))

# Executable name
EXECUTABLE = my_program

# Default target
all: $(EXECUTABLE)

# Link object files to create the executable
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

# Compile source files into object files
build/%.o: src/%.c
	@mkdir -p build
	@echo "Compiling $< to $@"
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# Phony targets
# Declares the "all" and "clean" are not actual files,
# 	preventing conflicts with files of the same name.
.PHONE: all clean
