/*
 *
 * Task:
 *		Modify the delete_from_list function so that it uses
 *		only one pointer variable instead of two (cur and prev).
 *
 * Date: 2025-05-28
 * Time: 04:33 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
void delete_from_list(struct node **list, int n);
void print_list(struct node *list);

int main(void) {
	struct node *llist;

	llist = NULL;

	llist = add_to_list(llist, 5);
	llist = add_to_list(llist, 2);
	llist = add_to_list(llist, 15);

	print_list(llist);
	putchar('\n');

	delete_from_list(&llist, 15);

	print_list(llist);

	exit(EXIT_SUCCESS);
}

struct node *add_to_list(struct node *list, int n) {
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		printf("err: malloca failed in add_to_list\n");
		exit(EXIT_FAILURE);
	}
	new_node->value = n;
	new_node->next = list;
	return new_node;
}

struct node *search_list(struct node *list, int n) {
	for (; list != NULL && list->value != n; list = list->next)
		;
	return list;
}

void delete_from_list(struct node **list, int n) {
	struct node *current = *list;

	while (current) {
		if (current->value == n) {
			*list = current->next;
			free(current);
			break;
		}
		list = &current->next;
		current = current->next;
	}
}

void print_list(struct node *list) {
	int i = 0;
	while (list) {
		printf("[%d]: %d\n", i, list->value);
		i++;
		list = list->next;
	}
}
