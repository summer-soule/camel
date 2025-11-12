#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;
typedef struct queue_type *Queue;

Queue q_create(void);
void q_add_end(Queue, Item);
void q_del_first(Queue);
Item q_ret_first(Queue);
Item q_ret_last(Queue);
bool q_isempty(Queue);
void q_destroy(Queue);

#endif
