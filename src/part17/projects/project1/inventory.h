#ifndef INVENTORY_H
#define INVENTORY_H

#include <stdbool.h>

#define NAME_LEN 25
#define MAX_PARTS 100

extern int max_parts;

struct part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
	struct part *next;
};

int find_part(int number);
void insert();
void search();
void update();
void print();

#endif
