#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "stack.h"

int contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int ch)
{
	if (is_full())
		stack_underflow();
	else
		contents[top++] = ch;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();

	return contents[--top];
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
	exit(EXIT_FAILURE);
}

void stack_overflow(void)
{
	printf("Expression is too comples\n");
	exit(EXIT_FAILURE);
}
