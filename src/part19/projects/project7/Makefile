CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19proj7 := $(BUILD_DIR)project7

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19proj7) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

project7.o: project7.c queueADT.h
	$(CC) $(CFLAGS) -c $< -o $@

queueADT.o: queueADT.c queueADT.h
	$(CC) $(CFLAGS) -c $< -o $@
