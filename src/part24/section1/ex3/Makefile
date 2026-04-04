CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p24s1e3 := $(BUILD_DIR)ex3

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p24s1e3): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

ex3.o: ex3.c stackADT2_example.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT2.o: stackADT2.c stackADT2.h stackADT2_example.h
	$(CC) $(CFLAGS) -c $< -o $@
