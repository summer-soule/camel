#include <stdio.h>
#include <stdlib.h>

#include "stackADT_c_fn.h"

struct node {
	Item data;
	struct node *next;
};

struct stack_type {
	struct node *top;
};

static void terminate(const char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

static Stack create(void) {
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
		terminate("create: stack could not be created.");
    s->top = NULL;
    return s;
}

static void destroy(Stack s) {
    make_empty(s);
    free(s);
}

static void make_empty(Stack s) {
    while (!is_empty(s))
		pop(s);
}

static bool is_empty(Stack s) {
	return s->top == NULL;
}

static bool is_full(Stack s) {
	return false;
}

static void push(Stack s, int i) {
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("push: stack is full.");

    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

static Item pop(Stack s) {
    struct node *old_top;
    Item i;

    if (is_empty(s))
        terminate("pop: stack is empty.");

    old_top = s->top;
    i = old_top->data;
    s->top = old_top->next;
    free(old_top);
    return i;
}

static int peek(Stack s) {
    if (s == NULL)
        printf("stack is empty.\n");
    return s->top->data;
}

void example_c(void) {
	Stack s1, s2;
    int n;

    s1 = create();
    s2 = create();

    printf("\n==== Executing C version ====\n");

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
