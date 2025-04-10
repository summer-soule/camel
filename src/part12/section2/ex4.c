/*
 *
 * Task: Rewrite the make_empty, is_empty, and is_full functions of
 * Section 10.2 to use the pointer variable top_ptr instead of the integer
 * variable top.
 *
 * Date: 2025-04-10
 * Time: 02:09 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE	100

int contents[STACK_SIZE] = {0};
int *top_ptr = contents;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {
	for (int i = 0; i < 10; i++)
		push(i);

	while (!is_empty())
		printf("%d\n", pop());

	exit(EXIT_SUCCESS);
}

void make_empty(void)
{
	top_ptr = contents;
}

bool is_empty(void)
{
	return top_ptr == contents;
}

bool is_full(void)
{
	return top_ptr == contents+STACK_SIZE;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		*top_ptr++ = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	return *--top_ptr;
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
