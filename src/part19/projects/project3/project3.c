/*
 *
 * Project 3.
 *
 * Task:
 *		Modify the stackADT3.c file of Section 19.4 by adding an int member
 *		named len to the stack_type structure. This member will keep track
 *		of how many items are currently stored in stack. Add a new function
 *		named length that has a Stack parameter and returns the value of the
 *		len member. (Some of the existing functions in stackADT3.c will need
 *		to be modified as well.) Modify stackclient.c so that it calls the
 *		length function (and displays the value that it returns) after each
 *		operation that modifies a stack.
 *
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
	Stack s1, s2;
    int n;

    s1 = create();
    s2 = create();

    push(s1, 1);
    printf("s1 size: %d\n", length(s1));
    push(s1, 2);
    printf("s1 size: %d\n", length(s1));

	n = pop(s1);
    printf("Popped %d from s1\n", n);
    printf("s1 size: %d\n", length(s1));


    push(s2, n);
    printf("s2 size: %d\n", length(s2));

    n = pop(s1);
    printf("Popped %d from s1\n", n);
    printf("s1 size: %d\n", length(s1));

    push(s2, n);
    printf("s2 size: %d\n", length(s2));

    destroy(s1);

    while (!is_empty(s2)) {
		printf("Popped %d from s2\n", pop(s2));
		printf("s2 size: %d\n", length(s2));
    }

    push(s2, 3);
    printf("s2 size: %d\n", length(s2));

    make_empty(s2);

    if (is_empty(s2))
        printf("s2 is empty\n");
    else
		printf("s2 is not empty\n");

	exit(EXIT_SUCCESS);
}
