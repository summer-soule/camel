#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "stackADT.h"

int errno;

struct stack_t {
    struct node *top;
};

struct node {
    Item item;
    struct node *next;
};

Stack create(void) {
    Stack s = malloc(sizeof(struct stack_t));

    if (s == NULL) {
        perror("create");
        exit(errno);
    }

    s->top = NULL;
    return s;
}

void destroy(Stack s) {
    make_empty(s);
    free(s);
}

void make_empty(Stack s) {
    while (!is_empty(s))
        pop(s);

}

bool is_empty(const Stack s) {
	return (s->top == NULL) ? true : false;
}

bool is_full(const Stack s) {
	return false;
}

void push(Stack s, Item item) {
	struct node *tmp = malloc(sizeof(struct node));
    if (tmp == NULL) {
        perror("push: malloc failed");
        exit(EXIT_FAILURE);
    }
    tmp->item = item;
    tmp->next = s->top;
    s->top = tmp;
}

Item pop(Stack s) {
    if (is_empty(s)) {
        perror("pop: stack underflow\n");
		exit(EXIT_FAILURE);
	}
    struct node *tmp = s->top;
    Item item_ret = s->top->item;
    s->top = s->top->next;
    free(tmp);
    return item_ret;
}
