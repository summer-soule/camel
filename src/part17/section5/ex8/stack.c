#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

void make_empty(struct stack **rpnStackPtr) {
	struct stack *p = *rpnStackPtr;

	if (is_empty(*rpnStackPtr))
		return;

	while ((*rpnStackPtr)->next) {
		p = *rpnStackPtr;
		*rpnStackPtr = (*rpnStackPtr)->next;
		free(p);
	}
	free(rpnStackPtr);
}

bool is_empty(struct stack *rpnStackPtr)
{
	if (rpnStackPtr)
		return false;
	return true;
}

bool push(struct stack **rpnStackPtr, int ch) {
	struct stack *p;
	if ((p = malloc(sizeof(struct stack))) == NULL) {
		stack_overflow();
		return false;
	}
	else {
		p->value = ch;
		p->next = *rpnStackPtr;
		*rpnStackPtr = p;
		return true;
	}
}

int pop(struct stack **rpnStackPtr)
{
	struct stack *p = *rpnStackPtr;

	if (is_empty(*rpnStackPtr)) {
		stack_underflow();
		exit(EXIT_FAILURE);
	}

	int v = (*rpnStackPtr)->value;
	
	if ((*rpnStackPtr)->next) {
		*rpnStackPtr = (*rpnStackPtr)->next;
		free(p);
	} else {
		*rpnStackPtr = NULL;
	}
	return v;
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
}

void stack_overflow(void)
{
	printf("err: can't allocate memory\n");
}
