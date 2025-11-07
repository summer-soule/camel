#ifndef STACKADT_B_FN_H
#define STACKADT_B_FN_H

#include <stdbool.h>

#include "stackADT_b.h"

typedef int Item;

typedef struct stack_type *Stack;

static Stack create(int size);
static void destroy(Stack s);
static void make_empty(Stack s);
static bool is_empty(Stack s);
static bool is_full(Stack s);
static void push(Stack s, Item i);
static Item pop(Stack s);
static Item peek(Stack s);

#endif
