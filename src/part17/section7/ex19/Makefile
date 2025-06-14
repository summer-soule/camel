CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

ex19 := $(BUILD_DIR)ex19

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(ex19): $(OBJ)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)
	rm -f $(OBJ)

ex19.o: ex19.c filecmd.h
	$(CC) $(CFLAGS) -c $< -o $@

filecmd.o: filecmd.c filecmd.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f ./*.o
