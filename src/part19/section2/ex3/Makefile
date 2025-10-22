CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

p19s2e2 := $(BUILD_DIR)ex3

$(p19s2e2): ex3.o queue.o
	$(CC) $(CFLAGS) -o $@ ex3.o queue.o

ex3.o: ex3.c queue.h
	$(CC) $(CFLAGS) -c $< -o $@

queue.o: queue.c queue.h
	$(CC) $(CFLAGS) -c $< -o $@
