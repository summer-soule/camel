#ifndef STACKADT1_H
#define STACKADT1_H

#include <stdbool.h>

#include "stackADT_c.h"

typedef int Item;
typedef struct stack_type *Stack;

static Stack create(void);
static void destroy(Stack s);
static void make_empty(Stack s);
static bool is_empty(Stack s);
static bool is_full(Stack s);
static void push(Stack s, int i);
static Item pop(Stack s);
static Item peek(Stack s);

#endif
