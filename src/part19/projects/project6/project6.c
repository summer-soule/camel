/*
 *
 * Project 6.
 *
 * Task:
 *		Modify Programming Project 5 so that the items in a queue
 *		are stored in a dynamically allocated array whose length
 *		is passed to the create function.
 *
 * Date: 2025-11-12
 * Time: 17:37
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "queueADT.h"

int main(void) {
	Queue q1, q2;

	Item n;

    q1 = q_create(20);
    q2 = q_create(30);

    q_add_end(q1, 1);
	q_add_end(q1, 2);

    n = q_ret_first(q1);
	printf("dequeued %d from q1\n", n);

    q_add_end(q2, n);

    n = q_ret_first(q1);
    printf("dequeued %d from q1\n", n);

    q_add_end(q2, n);

    q_destroy(q1);

    while (!q_isempty(q2)) {
		printf("dequeued %d from q2\n", q_ret_first(q2));
    }

    q_destroy(q2);

	exit(EXIT_SUCCESS);
}
