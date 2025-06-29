CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project4 := $(BUILD_DIR)project4

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project4): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

line.o: line.c line.h
	$(CC) $(CFLAGS) -c $< -o $@

word.o: word.c word.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
