#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

// array based implementation
#ifdef Q_VER_A

#define ARR_SIZE 100

struct queue_type {
	int head, tail, icount;
	int queue_arr[ARR_SIZE];
};

static Queue qalloc(void) {
	return (Queue) malloc(sizeof(struct queue_type));
}

Queue qinit(void) {
    Queue p = qalloc();
    if (!p) {
		perror("qalloc");
		exit(EXIT_FAILURE);
    }

    // init all as zero
    p->icount = 0;
    p->head = 0;
    p->tail = 0;

    return p;
}

void add_end(Queue q, Item item) {
	if ((ARR_SIZE - q->icount - 1) > 0) {
		q->queue_arr[q->head] = item;
        q->head =
            ((q->head + 1) == ARR_SIZE) ? 0 : q->head + 1;
		q->icount++;
    } else
        printf("error: queue is full\n");
}

void del_first(Queue q) {
    (q->tail == ARR_SIZE - 1) ? q->tail = 0 : q->tail++;
    q->icount--;
}

Item ret_first(Queue q) {
	return q->queue_arr[q->tail];
}

Item ret_last(Queue q) {
	return q->queue_arr[q->head-1];
}

bool isempty(Queue q) {
	return (q->icount > 0) ? false : true;
}

#endif

// linked-list based implementation
#ifdef Q_VER_B

struct queue_type {
    Item value;
    Queue next;
};

static Queue head = NULL;

static Queue qalloc(void) {
	return (Queue) malloc(sizeof(struct queue_type));
}

Queue qinit(void) {
    Queue p = qalloc();
	p->next = NULL;

	head = p;
        
    return p;
}

void add_end(Queue q, Item item) {
    head->value = item;
    head->next = qalloc();
    head = head->next;
}

void del_first(Queue *q) {
    Queue tmp = *(q);
    *q = tmp->next;
    free(tmp);
}

Item ret_first(Queue q) {
	return q->value;
}

Item ret_last(Queue q) {
    while (q->next != head)
        q++;
    return q->value;
}

bool isempty(Queue q) {
	return (q) ? true : false;
}

#endif
