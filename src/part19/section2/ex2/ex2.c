/*
 *
 * Task:
 *		Modify the stack2.c file to use the PUBLIC and PRIVATE macros.
 *
 * Date: 2025-09-11
 * Time: 05:20 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(void) {

	if (is_empty()) {
        printf("Stack is empty.\n");
	} else {
        printf("Stack is not empty.\n");
	}

    if (is_full()) {
        printf("Stack is full.\n");
	} else {
		printf("Stack is not full.\n");
    }

    printf("push 5 on stack...\n");
    push(5);

    printf("push 4 on stack...\n");
    push(4);

	if (is_empty()) {
        printf("Stack is empty.\n");
	} else {
        printf("Stack is not empty.\n");
	}

    printf("poped %d from stack...\n", pop());
    printf("poped %d from stack...\n", pop());

    if (is_empty()) {
        printf("Stack is empty.\n");
	} else {
        printf("Stack is not empty.\n");
	}

	exit(EXIT_SUCCESS);
}
