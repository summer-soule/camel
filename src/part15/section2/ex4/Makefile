CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g

p15s2e4 := $(BUILD_DIR)ex4

$(p15s2e4): testdebug.o
	$(CC) $(CFLAGS) -o $@ testdebug.o

testdebug.o: testdebug.c debug.h
	$(CC) $(CFLAGS) -c testdebug.c
