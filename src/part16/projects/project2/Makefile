CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project2 := $(BUILD_DIR)project2

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project2): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

project2.o: project2.c readline.h inventory.h quicksort.h
	$(CC) $(CFLAGS) -c $< -o $@

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

quicksort.o: quicksort.c quicksort.h inventory.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
