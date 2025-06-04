CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

ex8 := $(BUILD_DIR)ex8

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(ex8): $(OBJ)
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
