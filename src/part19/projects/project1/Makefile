CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19proj1 := $(BUILD_DIR)project1

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19proj1) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

project1.o: project1.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT.o: stackADT.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@
