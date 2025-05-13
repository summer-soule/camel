CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project3 := $(BUILD_DIR)project3

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project3): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

qsort.o: qsort.c quicksort.h
	$(CC) $(CFLAGS) -c $< -o $@

quicksort.o: quicksort.c quicksort.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
