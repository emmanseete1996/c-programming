# Copyright (c) 2025-Present, Emmanuel See Te.
# All rights reserved.

CC = clang
CFLAGS_DEBUG = -Wall -Wextra -Wpedantic -std=c99 -O0 -g -Werror
CFLAGS_RELEASE = -Wall -Wextra -Wpedantic -std=c99 -O2

CFLAGS = $(CFLAGS_RELEASE)

TARGET = my_program

DIR = src
SRC = $(wildcard $(DIR)/*.c)
OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

$(DIR)/%.o: $(DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)

run: $(TARGET)
	./$(TARGET)

debug: CFLAGS=$(CFLAGS_DEBUG)
debug: clean $(TARGET)

release: CFLAGS=$(CFLAGS_RELEASE)
release: clean $(TARGET)

.PHONY: clean run debug release
