CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project1 := $(BUILD_DIR)project1

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project1): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

project1.o: project1.c readline.h inventory.h
	$(CC) $(CFLAGS) -c $< -o $@

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

inventory.o: inventory.c inventory.h readline.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
