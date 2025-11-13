CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19proj3 := $(BUILD_DIR)project3

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19proj3) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

project3.o: project3.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT3.o: stackADT3.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@
