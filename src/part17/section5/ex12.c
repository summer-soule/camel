/*
 *
 * Task:
 *		Write the following function:
 *
 *		struct node *find_last(struct node *list, int n);
 *
 *		The list parameter popints to a linked list. The function should
 *		return a pointer to the last node that contains n; it should
 *		return NULL if n doesn't appear in the list. Assume that the
 *		node structure is the one defined in Section 17.5.
 *
 * Date: 2025-06-06
 * Time: 12:16 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node *node_create(struct node *list, int n);
struct node *find_last(struct node *list, int n);

int main(void) {
	struct node *flist = NULL;
	struct node *p = NULL;

	// the sequence of node's values are 5-2-3-2 from last to first created
	flist = node_create(flist, 2);
	flist = node_create(flist, 3);
	flist = node_create(flist, 2);
	flist = node_create(flist, 5);

	p = find_last(flist, 3);
	printf("Value of p: %d\n", p->value);

	exit(EXIT_SUCCESS);
}

struct node *node_create(struct node *list, int n) {
	struct node *p = NULL;
	if ((p = malloc(sizeof(struct node)))) {
		p->value = n;
		p->next = list;
	} else {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

struct node *find_last(struct node *list, int n) {
	struct node *p = NULL;
	int node_number = 0;
	int node_last = node_number;
	while (list) {
		node_number++;
		if (list->value == n) {
			p = list;
			node_last = node_number;
		}
		list = list->next;
	}
	// this printf here just to show last node
	printf("Last node with number %d is %d\n", n, node_last);
	return p;
}
