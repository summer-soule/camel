CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

BUILD := build
ROOT := ../../../..

ex5 := $(BUILD_DIR)ex5

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(ex5): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

main.o: main.c f1.h
	$(CC) $(CFLAGS) -c $< -o $@

f1.o: f1.c f1.h f2.h
	$(CC) $(CFLAGS) -c $< -o $@

f2.o: f2.c f1.h f2.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
