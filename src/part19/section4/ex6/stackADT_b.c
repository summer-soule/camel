#include <stdio.h>
#include <stdlib.h>

#include "stackADT_b_fn.h"

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
    if (is_full(s))
        terminate("push: stack is full.");
    s->contents[s->top++] = i;
}

static Item pop(Stack s) {
    if (is_empty(s))
        terminate("pop: stack is empty.");
    return s->contents[--s->top];
}

static Item peek(Stack s) {
    if (is_empty(s))
        printf("stack is empty.\n");
    return s->contents[s->top-1];
}

void example_b(void) {
	Stack s1, s2;
    int n;

    s1 = create(100);
    s2 = create(200);

    printf("\n==== Executing B version ====\n");

    printf("push 1 and 2 onto s1 stack...\n");
    push(s1, 1);
    push(s1, 2);

	printf("peek at s1 stack: %d\n", peek(s1));
    
    n = pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, n);

    n = pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, n);

    destroy(s1);

    while (!is_empty(s2))
		printf("Popped %d from s2\n", pop(s2));

    push(s2, 3);
    make_empty(s2);

    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(s2);
}
