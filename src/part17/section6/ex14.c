/*
 *
 * Task:
 * 		Modify the delete_from_list function (Section 17.5) so that
 * 		its first parameter has type struct node ** (a pointer
 * 		to a pointer to the first node in a list) and its return type
 * 		is void. delete_from_list must modify its first argument to
 * 		point to the list after the desired node has been deleted.
 *
 * Date: 2025-06-11
 * Time: 02:38 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

void delete_from_list(struct node **list, int n);
struct node *node_create(struct node *list, int n);
void list_print(struct node *list);

int main(void) {
	struct node *flist = NULL;

	flist = node_create(flist, 5);
	flist = node_create(flist, 4);
	flist = node_create(flist, 3);
	flist = node_create(flist, 2);
	flist = node_create(flist, 1);
	flist = node_create(flist, 0);

	list_print(flist);

	delete_from_list(&flist, 3);

	list_print(flist);

	exit(EXIT_SUCCESS);
}

void delete_from_list(struct node **list, int n) {
	struct node *cur = *list;
	struct node *prev = cur;

	while (cur) {
		if (cur->value == n) {
			prev->next = cur->next;
			free(cur);
			break;
		}
		prev = cur;
		cur = cur->next;
	}
}

struct node *node_create(struct node *list, int n) {
	struct node *p = NULL;
	if ((p = malloc(sizeof(struct node)))) {
		p->next = list;
		p->value = n;
	} else {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	return p;
}

void list_print(struct node *list) {
	for (int i = 0; list; i++, list = list->next)
		printf("[%d]: %d\n", i, list->value);
}
