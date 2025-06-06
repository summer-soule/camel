/*
 *
 * Task:
 *		Write the following function:
 *
 *		int count_occurrences(struct node *list, int n);
 *
 *		The list parameter points to a linked list; the function
 *		should return the number of times that n appears in this list.
 *		Assume that the node structure is the one defined in Section 17.5.
 *
 * Date: 2025-06-05
 * Time: 08:27 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int count_occurrences(struct node *list, int n);
struct node *node_create(struct node *list, int n);

int main(void) {
	struct node *lfirst = NULL;

	lfirst = node_create(lfirst, 2);
	lfirst = node_create(lfirst, 2);
	lfirst = node_create(lfirst, 5);
	lfirst = node_create(lfirst, 6);

	printf("number 2 has %d occurrences in list\n",
		   count_occurrences(lfirst, 2));

	exit(EXIT_SUCCESS);
}

int count_occurrences(struct node *list, int n) {
	int count = 0;
	while (list) {
		if (list->value == n)
			count++;
		list = list->next;
	}
	return count;
}

struct node *node_create(struct node *list, int n) {
	struct node *p;
	if ((p = malloc(sizeof(struct node)))) {
		p->value = n;
		p->next = list;
	}
	return p;
}
