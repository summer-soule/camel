CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project5 := $(BUILD_DIR)project5

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project5): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

calc.o: calc.c stack.h
	$(CC) $(CFLAGS) -c $< -o $@

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
