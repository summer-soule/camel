CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19proj4 := $(BUILD_DIR)project4

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19proj4) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

project4.o: project4.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT.o: stackADT3.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@
