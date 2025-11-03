CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

p19s3e4 := $(BUILD_DIR)ex4

$(p19s3e4): ex4.o stack.o
	$(CC) $(CFLAGS) -o $@ ex4.o stack.o

ex4.o: ex4.c stack.h
	$(CC) $(CFLAGS) -c $< -o $@

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c $< -o $@
