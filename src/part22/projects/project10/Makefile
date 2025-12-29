CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

project10 := $(BUILD_DIR)project10

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(project10): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

project10.o: project10.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
