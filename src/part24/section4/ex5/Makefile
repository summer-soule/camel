CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

p24s4e5 := $(BUILD_DIR)ex5

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p24s4e5): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

p24s4e5.o: p24s4e5.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
