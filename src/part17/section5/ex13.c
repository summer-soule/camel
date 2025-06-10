/*
 *
 * Task:
 *		The following function is supposed to insert a new node into
 *		its proper place in an ordered list, returning a pointer to
 *		the first node in the modified list. Unfortunately, the
 *		function doesn't work correctly in all cases. Explain
 *		what's wrong with it and show how to fix it. Assume that the
 *		node structure is the one defined in Section 17.5.
 *
 *		struct node *insert_into_ordered_list(struct node *list,
 *											  struct node *new_node)
 *		{
 *			struct node *cur = list, *prev = NULL;
 *			while (cur->value <= new_node->value) {
 *				prev = cur;
 *				cur = cur->next;
 *			}
 *			prev->next = new_node;
 *			new_node->next = cur;
 *			return list;
 *		}
 *
 * Date: 2025-06-06
 * Time: 03:15 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node *insert_into_ordered_list(struct node *list,
									  struct node *new_node);
struct node *node_create(struct node *list, int n);
void list_print(struct node *list);

int main(void) {
	struct node *flist = NULL;
	struct node *node_test = NULL;

	if ((node_test = malloc(sizeof(struct node))) != NULL) {
		node_test->value = 4;
		node_test->next = NULL;
	} else {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	flist = node_create(flist, 5);
	flist = node_create(flist, 3);
	flist = node_create(flist, 2);
	flist = node_create(flist, 1);
	flist = insert_into_ordered_list(flist, node_test);

	list_print(flist);

	exit(EXIT_SUCCESS);
}

struct node *node_create(struct node *list, int n) {
	struct node *p = NULL;
	if ((p = malloc(sizeof(struct node)))) {
		p->value = n;
		p->next = list;
	}
	return p;
}

struct node *insert_into_ordered_list(struct node *list,
									  struct node *new_node) {
	struct node *p = list;
	struct node *q = list;
	while (p) {
		if (p->value >= new_node->value)
			break;
		q = p;
		p = p->next;
	}
	q->next = new_node;
	new_node->next = p;
	return list;
}

void list_print(struct node *list) {
	int i = 0;
	while (list) {
		printf("[%d] %d\n", i, list->value);
		list = list->next;
		i++;
	}
}
