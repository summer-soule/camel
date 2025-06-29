#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "line.h"

#define MAX_LINE_LEN 60

struct node {
	struct node *next;
	char word[];
} *line = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void) {
	struct node *prev;
	while (line != NULL) {
		prev = line;
		line = line->next;
        free(prev);
	}
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word) {
	struct node *p, **q = &line;

	if ((p = malloc(sizeof(struct node) + strlen(word) + 1)) == NULL) {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	strcpy(p->word, word);
	p->next = NULL;

	while (*q)
		q = &(*q)->next;
	*q = p;

	line_len += strlen(word);
	if (num_words > 0)
		line_len++;
	num_words++;
}

int space_remaining(void) {
	return MAX_LINE_LEN - line_len;
}

void write_line(void) {
	int extra_spaces, spaces_to_insert, i;
	int char_count = 0;
	struct node *p = line;
	extra_spaces = space_remaining();

    while (char_count < line_len && p != NULL) {
		printf("%s", p->word);
		if (num_words > 1) {
			spaces_to_insert = extra_spaces / (num_words - 1);
			for (i = 1; i <= spaces_to_insert + 1; i++)
				putchar(' ');
			extra_spaces -= spaces_to_insert;
		}
		char_count += strlen(p->word) + 1;
		num_words--;
		p = p->next;
	}
	putchar('\n');
}

void flush_line() {
	struct node *p = line;

	if (line_len > 0) {
		for (int i = 0; p != NULL; i++) {
			if (i > 0 && p->next != NULL)
				putchar(' ');
			printf("%s ", p->word);
			p = p->next;
		}
	}
	printf("\n");
	clear_line();
}
