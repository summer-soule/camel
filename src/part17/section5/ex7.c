/*
 *
 * Task:
 *		The following loop is supposed to delete all nodes from
 *		a linked list and release the memory that they occupy.
 *		Unfortunately, the loop is incorrect. Explain what's
 *		wrong with it and show how to fix the bug.
 *
 *		for (p = first; p != NULL; p = p->next)
 *			free(p);
 *
 * Answer:
 *		After first iteration first node is freed so the *first
 *		points to nothing. As a result we can't access to p->next.
 *		Also there is memory leak happened because we can't free
 *		unaccessable nodes. After fixed loop we must update the
 *		*first to NULL.
 *
 * Date: 2025-05-29
 * Time: 01:35 PM
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
	struct node *p;
	struct node *first = NULL;
	struct node *tmp;

	first = add_to_list(first, 15);
	first = add_to_list(first, 2);
	first = add_to_list(first, 5);

	print_list(first);
	putchar('\n');

	p = first;
	while (p != NULL) {
		tmp = p;
		p = p->next;
		free(tmp);
	}
	first = NULL;

	first = add_to_list(first, 1);
	print_list(first);

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
	if (list == NULL)
		printf("end of list reached\n");
}
