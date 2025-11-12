CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19proj6 := $(BUILD_DIR)project6

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19proj6) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

project6.o: project6.c queueADT.h
	$(CC) $(CFLAGS) -c $< -o $@

queueADT.o: queueADT.c queueADT.h
	$(CC) $(CFLAGS) -c $< -o $@
