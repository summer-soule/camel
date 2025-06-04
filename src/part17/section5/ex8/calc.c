/*
 *
 * Task:
 *		Section 15.2 describes a file, stack.c, that provides
 *		functions for storing integers in a stack. In that
 *		section, the stack was implemented as an array. Modify
 *		stack.c so that a stack is now stored as a linked list.
 *		Replace the contents and top variables by a single
 *		variable that points to the first node in the list
 *		(the "top" of the stack). Write the functions in stack.c
 *		so that they use this pointer. Remove the is_full function,
 *		instead having push return either true (if memory was
 *		available to create a node) or false (if not).
 *
 * Date: 2025-05-30
 * Time: 08:10 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#include "stack.h"

int main(void) {

	char ch;
	int a, b;

	struct stack *rpnStackPtr = NULL;

	printf("Enter an RPN expression: ");
	do {
		scanf(" %c", &ch);
		switch (ch) {
			case '+':
				push(&rpnStackPtr, pop(&rpnStackPtr) + pop(&rpnStackPtr));
				break;
			case '-':
				a = pop(&rpnStackPtr);
				b = pop(&rpnStackPtr);
				push(&rpnStackPtr, b - a);
				break;
			case '*':
				push(&rpnStackPtr, pop(&rpnStackPtr) * pop(&rpnStackPtr));
				break;
			case '/':
				a = pop(&rpnStackPtr);
				b = pop(&rpnStackPtr);
				push(&rpnStackPtr, b / a);
				break;
			case '=':
				printf("Value of expression: %d\n", pop(&rpnStackPtr));
				make_empty(&rpnStackPtr);
				printf("Enter an RPN expression: ");
				break;
			default:
				if (isdigit(ch))
					push(&rpnStackPtr, ch-'0');
				else
					exit(EXIT_SUCCESS);
				break;
		}
	} while(ch != 'q');

	exit(EXIT_SUCCESS);
}
