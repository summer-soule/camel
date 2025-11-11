/*
 *
 * Project 1.
 *
 * Task:
 *		Modify the stackADT.h and stackADT3.c files of Section 19.4
 *		so that a stack stores values of type void *, as described
 *		in Section 19.5; the Item type will no longer be used.
 *		Modify stackclient.c so that it stores pointers to strings
 *		in the s1 and s2 stacks.
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

	void *n = NULL;

    s1 = create();
    s2 = create();

    push(s1, "string1");
    push(s1, "string2");

    n = pop(s1);
	printf("Popped %s from s1\n", (char *) n);

    push(s2, n);

    n = pop(s1);
    printf("Popped %s from s1\n", (char *) n);

    push(s2, n);

    destroy(s1);

    while (!is_empty(s2)) {
		printf("Popped %s from s2\n", (char *) pop(s2));
    }

    push(s2, "string3");

    make_empty(s2);

    if (is_empty(s2))
        printf("s2 is empty\n");
    else
		printf("s2 is not empty\n");

	exit(EXIT_SUCCESS);
}
