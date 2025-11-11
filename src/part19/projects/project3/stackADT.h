#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef unsigned char Item;
typedef struct stack_t *Stack;

Stack create(void);
void destroy(Stack);
void make_empty(Stack);
bool is_empty(const Stack);
bool is_full(const Stack);
void push(Stack, Item);
Item pop(Stack);
int length(Stack);

#endif
