/*
 *
 * Task:
 *		(a) Write an implementation of the Stack type, assuming that
 *			Stack is a structure containing a fixed-length array.
 *
 *		(b) Redo the Stack type, this time using a linked-list
 *			representation instead of an array.
 *			(Show both stack.h and stack.c)
 *
 * Date: 2025-10-22
 * Time: 03:40 PM
 *
 */

/*
 * To switch between versions (a) and (b) go to stack.h file
 * and define desired option. Don't define both at same time.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(void) {

	Stack s1 = create();

    if (is_empty(s1))
		printf("stack is empty\n");
    else
        printf("stack is not empty\n");

    printf("push 1, 2 and 5...\n");
    push(s1, 1);
    push(s1, 2);
    push(s1, 5);

    printf("pop %d and %d...\n", pop(s1), pop(s1));

    printf("clearing the s1 stack...\n");
    make_empty(s1);

    if (is_empty(s1))
		printf("stack is empty\n");
    else
        printf("stack is not empty\n");

    printf("destroying existing stack...\n");
    destroy(s1);

    printf("End of program.\n");

	exit(EXIT_SUCCESS);
}
