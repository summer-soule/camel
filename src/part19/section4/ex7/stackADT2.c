#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stackADT2.h"

struct stack_type {
	Item *contents;
    int top;
    int size;
};

static void terminate(const char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

static Stack create(int size) {
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
		terminate("create: stack could not be created.");

    s->contents = malloc(size * sizeof(Item));
    if (s->contents == NULL) {
        free(s);
        terminate("create: stack could not be created.");
    }

    s->top = 0;
    s->size = size;
    return s;
}

static void destroy(Stack s) {
    free(s->contents);
    free(s);
}

static void make_empty(Stack s) {
	s->top = 0;
}

static bool is_empty(Stack s) {
	return s->top == 0;
}

static bool is_full(Stack s) {
	return s->top == s->size;
}

static void push(Stack s, Item i) {
    if (is_full(s)) {
        printf("Maximum size of stack reached. Extending from %d to %d...\n",
               s->size, s->size*2);
        Item *tmp = malloc(sizeof(Item) * s->size * 2);

		memcpy(tmp, s->contents, sizeof(Item)*s->size);

		Item *cont_ptr = s->contents;
        s->contents = tmp;
        free(cont_ptr);
	}
    s->contents[s->top++] = i;
}

static Item pop(Stack s) {
    if (is_empty(s))
        terminate("pop: stack is empty.");
    return s->contents[--s->top];
}

void example(void) {
	Stack s;

    s = create(5);

    for (int i = 0; i < 10; i++) {
		printf("push %d onto stack...\n", i);
		push(s, i);
	}

	while (!is_empty(s))
        printf("pop: %d\n", pop(s));

    destroy(s);
}
