/*
 *
 * Task:
 *		Modify the queue.h header of Exercise 1 so that it defines a Queue
 *		type, where Queue is a structure containing a fixed-length array
 *		(see Exercise 3(a)). Modify the functions in queue.h to take
 *		a Queue * parameter.
 *
 * Date: 2025-09-08
 * Time: 01:01 AM
 *
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

// Definition of struct queue_type will be inside queue.c file
// Because of that fact there is no need to show implementation
// As example, queue_type possible can be like:
// 
// #define Q_SIZE 100
// struct queue_type {
//		Item q[Q_SIZE];
// }
typedef struct queue_type *Queue;

void add_end(Queue *, Item);
void del_first(Queue *);
Item ret_first(Queue *);
Item ret_last(Queue *);
bool isempty(Queue *);

#endif
