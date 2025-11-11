/*
 *
 * Project 1.
 *
 * Task:
 *		Modify Programming Project 1 from Chapter 10 so that it uses
 *		the stack ADT described in Section 19.4. You may use any of
 *		the implementations of the ADT described in that section.
 *
 * Date: 2025-11-10
 * Time: 11:20 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "stackADT.h"

#define INPUT_MAX 100

int main(void)
{
	char input[INPUT_MAX];
	Stack s = create();

	printf("Enter parentheses and/or braces: ");
	fgets(input, INPUT_MAX, stdin);

	for (int i = 0; i < INPUT_MAX; i++) {
		switch(input[i]) {
		case '(': case '{':
			push(s, input[i]);
			break;
		case ')': case '}':
			pop(s);
			break;
		}
	}

	if (is_empty(s))
		printf("Parentheses/braces are nested properly\n");
	else
		printf("Parentheses/braces are not nested properly\n");

	exit(EXIT_SUCCESS);
}
