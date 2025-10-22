/*
 *
 * Task:
 *		(a) Write an array based implementation of the queue module
 *			described in Exercise 1. Use three integers to keep track
 *			of the queue's status, with one integer storing the position
 *			of the first empty slot in the array (used when an item is
 *			inserted), the second storing the position of the next item
 *			to be removed, and the third storing the number of items in
 *			the queue. An insertion or removal that would cause either
 *			of the first two integers to be incremented past the end of
 *			the array should instead reset the variable to zero, thus
 *			causing it to "wrap around" to the beginning of the array.
 *
 *		(b) Write a linked-list implementation of the queue module
 *			described in Exercise 1. Use two pointers, one pointing
 *			to the first node in the list and the other pointing to
 *			the last node. When an item is inserted into queue, add it
 *			to the end of the list. When an item is removed from the
 *			queue, delete the first node in the list.
 *
 * Date: 2025-09-16
 * Time: 09:25 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "queue.h"

int main(void) {
	Queue q = qinit();

    if (!q) {
		perror("qalloc");
        exit(EXIT_FAILURE);
    }
#ifdef Q_VER_A
    printf("==== Array-based Queue example ====\n");
#else
    printf("==== Linked-list Queue example ====\n");
#endif
    
    if (isempty(q)) {
		printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }

    printf("add 1 to queue...\n");
    add_end(q, 1);
    printf("add 2 to queue...\n");
    add_end(q, 2);
    printf("add 3 to queue...\n");
    add_end(q, 3);

	if (isempty(q)) {
		printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }
#ifdef Q_VER_A    
    printf("first in queue: %d\n", ret_first(q));
    printf("last in queue: %d\n", ret_last(q));

    printf("deleting first...\n");
    del_first(q);

    printf("first in queue: %d\n", ret_first(q));

    printf("deleting all in queue...\n");
    while (!isempty(q))
        del_first(q);    
#else    
    printf("first in queue: %d\n", ret_first(q));
    printf("last in queue: %d\n", ret_last(q));

    printf("deleting first...\n");
    del_first(&q);

    printf("first in queue: %d\n", ret_first(q));

    printf("deleting all in queue...\n");
    while (!isempty(q))
        del_first(&q);
#endif
    


    if (isempty(q)) {
		printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }

    printf("End of program. Exiting...\n");
    
	exit(EXIT_SUCCESS);
}
