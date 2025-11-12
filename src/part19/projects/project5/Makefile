CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19proj5 := $(BUILD_DIR)project5

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19proj5) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

project5.o: project5.c queueADT.h
	$(CC) $(CFLAGS) -c $< -o $@

queueADT.o: queueADT.c queueADT.h
	$(CC) $(CFLAGS) -c $< -o $@
