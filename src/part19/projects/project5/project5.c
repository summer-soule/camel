/*
 *
 * Project 5.
 *
 * Task:
 *		Starting from the queue.h header of Exercise 1, create a file
 *		named queueADT.h that defines the following Queue type:
 *
 *		typedef struct queue_type *Queue;
 *
 *		queue_type is an incomplete structure type. Create a file named
 *		queueADT.c that contains the full definition of queue_type as
 *		well as definitions for all the functions in queue.h. Use a
 *		fixed-length array to store the items in a queue (see Exercise 3(a)).
 *		Create a file named queueclient.c (similar to the stackclient.c file
 *		of Section 19.4) that creates two queues and performs operations
 *		on them. Be sure to provide create and destroy functions for your ADT.
 *
 * Date: 2025-11-11
 * Time: 20:25 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "queueADT.h"

int main(void) {
	Queue q1, q2;

	Item n;

    q1 = q_create();
    q2 = q_create();

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
