#include <stdio.h>
#include <stdlib.h>

#include "queueADT.h"

struct node {
	Item data;
	struct node *next;
};

struct queue_type {
    struct node *start;
    struct node *end;
    int len;
};

Queue q_create(void) {
    Queue q_new = malloc(sizeof(struct queue_type));

    if (q_new == NULL) {
		perror("q_create: malloc failed");
        exit(EXIT_FAILURE);
    }

    q_new->start = NULL;
    q_new->end = NULL;
    q_new->len = 0;

    return q_new;
}

void q_add_end(Queue q, Item item) {
	struct node *new_node = malloc(sizeof(struct node));

    new_node->data = item;
	new_node->next = NULL;

    if (q->start == NULL) {
        q->start = new_node;
        q->end = new_node;
    } else {
        q->end->next = new_node;
        q->end = new_node;
    }
    q->len++;
}

void q_del_first(Queue q) {
    struct node *tmp = q->start;
    q->start = q->start->next;
    free(tmp);
}

Item q_ret_first(Queue q) {
    Item ret_value = q->start->data;
    q_del_first(q);
    q->len--;
    return ret_value;
}

Item q_ret_last(Queue q) {
    return q->end->data;
}

bool q_isempty(Queue q) {
    return q->len == 0;
}

void q_destroy(Queue q) {
    while (q->start)
        q_del_first(q);

    free(q);
}
