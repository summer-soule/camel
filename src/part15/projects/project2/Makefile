CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project2 := $(BUILD_DIR)project2

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project2): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

word.o: word.c word.h
	$(CC) $(CFLAGS) -c $< -o $@

line.o: line.c line.h
	$(CC) $(CFLAGS) -c $< -o $@

justify.o: justify.c line.h word.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
