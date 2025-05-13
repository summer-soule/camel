/*
 *
 * Project 5.
 *
 * Task:
 *		Modify Programming Project 6 from Chapter 10 so that it has
 *		separate stach.h and stack.c files, as described in
 *		Section 15.2.
 *
 * DATE: 2025-05-13
 * Time: 20:31 PM
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

	printf("Enter an RPN expression: ");
	do {
		scanf(" %c", &ch);
		switch (ch) {
			case '+':
				push(pop() + pop());
				break;
			case '-':
				a = pop();
				b = pop();
				push(b - a);
				break;
			case '*':
				push(pop() * pop());
				break;
			case '/':
				a = pop();
				b = pop();
				push(b / a);
				break;
			case '=':
				printf("Value of expression: %d\n", pop());
				make_empty();
				printf("Enter an RPN expression: ");
				break;
			default:
				if (isdigit(ch))
					push(ch-'0');
				else
					exit(EXIT_SUCCESS);
				break;
		}
	} while(ch != 'q');

	exit(EXIT_SUCCESS);
}
