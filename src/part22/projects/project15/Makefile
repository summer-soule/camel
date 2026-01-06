CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project15 := $(BUILD_DIR)project15

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project15): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

word.o: word.c word.h
	$(CC) $(CFLAGS) -c $< -o $@

line.o: line.c line.h
	$(CC) $(CFLAGS) -c $< -o $@

project15.o: project15.c line.h word.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
