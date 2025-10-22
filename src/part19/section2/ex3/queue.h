#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

/// define Q_VER_A for array based implementation
/// or Q_VER_B for linked-list implementation
#define Q_VER_A

typedef int Item;
typedef struct queue_type *Queue;

Queue qinit(void);
void add_end(Queue, Item);

bool isempty(Queue);

#ifdef Q_VER_A
	void del_first(Queue);
	Item ret_first(Queue);
    Item ret_last(Queue);
#else
	void del_first(Queue *);
	Item ret_first(Queue);
	Item ret_last(Queue);
#endif
    
#endif
