CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19s4e7 := $(BUILD_DIR)ex7

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19s4e7): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

ex7.o: ex7.c stackADT2_example.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT2.o: stackADT2.c stackADT2.h stackADT2_example.h
	$(CC) $(CFLAGS) -c $< -o $@
