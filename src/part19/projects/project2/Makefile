CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19proj2 := $(BUILD_DIR)project2

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19proj2) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

project2.o: project2.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT.o: stackADT.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@
