CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project8 := $(BUILD_DIR)project8

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project8): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

project8.o: project8.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
