CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

p19s2e2 := $(BUILD_DIR)ex2

$(p19s2e2): ex2.o stack.o
	$(CC) $(CFLAGS) -o $@ ex2.o stack.o

ex2.o: ex2.c stack.h
	$(CC) $(CFLAGS) -c $< -o $@

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c $< -o $@
