#include <stdio.h>
#include <stdlib.h>

#include "queueADT.h"

#define Q_SIZE 100

struct queue_type {
	Item queue[Q_SIZE];
	int len;
    int start;
    int end;
};

Queue q_create(void) {
    Queue q_new = malloc(sizeof(struct queue_type));

    if (q_new == NULL) {
		perror("q_create: malloc failed");
        exit(EXIT_FAILURE);
    }

    q_new->start = 0;
    q_new->end = 0;
    q_new->len = 0;

    return q_new;
}

void q_add_end(Queue q, Item item) {
    q->queue[q->end] = item;
    (q->end + 1) >= Q_SIZE ? q->end = 0 : q->end++;
    q->len++;
}

void q_del_first(Queue q) {
    (q->start + 1) >= Q_SIZE ? q->start = 0 : q->start++;
    q->len--;
}

Item q_ret_first(Queue q) {
	q->len--;
    return q->queue[q->start++];
}

Item q_ret_last(Queue q) {
    return q->queue[q->end];
}

bool q_isempty(Queue q) {
    return !q->len;
}

void q_destroy(Queue q) {
	free(q);
}
