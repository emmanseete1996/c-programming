CC = clang
CFLAGS = -fsanitize=address -fsanitize=undefined -g -Wall -Werror -std=c99
SOURCES = src/main.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = my_program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
