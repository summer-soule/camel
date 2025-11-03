#ifndef STACK_H
#define STACK_H

#define Q_STACK
//#define Q_LLIST

#include <stdbool.h>

typedef int Item;
typedef struct stack_t *Stack;

Stack create(void);
void destroy(Stack);
void make_empty(Stack);
bool is_empty(const Stack);
bool is_full(const Stack);
void push(Stack, Item);
Item pop(Stack);

#endif
