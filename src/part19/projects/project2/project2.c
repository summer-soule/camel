/*
 *
 * Project 1.
 *
 * Task:
 *		Modify Programming Project 6 from Chapter 10 so that it uses
 *		the stack ADT described in Section 19.4. You may use any of
 *		the implementations of the ADT described in that section.
 *
 * Date: 2025-11-10
 * Time: 11:20 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "stackADT.h"

#define INPUT_MAX 100

int main(void) {

	char ch;
	int a, b;

	Stack s = create();

	printf("Enter an RPN expression: ");
	do {
		scanf(" %c", &ch);
		switch (ch) {
			case '+':
				push(s, pop(s) + pop(s));
				break;
			case '-':
				a = pop(s);
				b = pop(s);
				push(s, b - a);
				break;
			case '*':
				push(s, pop(s) * pop(s));
				break;
			case '/':
				a = pop(s);
				b = pop(s);
				push(s, b / a);
				break;
			case '=':
				printf("Value of expression: %d\n", pop(s));
				make_empty(s);
				printf("Enter an RPN expression: ");
				break;
			default:
				if (isdigit(ch))
					push(s, ch-'0');
				else
					exit(EXIT_SUCCESS);
				break;
		}
	} while(ch != 'q');

	destroy(s);

	exit(EXIT_SUCCESS);
}
