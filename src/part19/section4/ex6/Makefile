CC := /usr/bin/gcc
CFLAGS := -Wall -std=c99 -g -O0

p19s4e6 := $(BUILD_DIR)ex6

SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)

$(p19s4e6): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

ex6.o: ex6.c stackADT.h stackADT_abc.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT_clean.o: stackADT_clean.c stackADT.h stackADT_clean.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT_a.o: stackADT_a.c stackADT_a.h stackADT_a_fn.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT_b.o: stackADT_b.c stackADT_b.h stackADT_b_fn.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT_c.o: stackADT_c.c stackADT_c.h
	$(CC) $(CFLAGS) -c $< -o $@

stackADT.o: stackADT.c stackADT.h
	$(CC) $(CFLAGS) -c $< -o $@
