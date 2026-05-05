/*
 *
 * Project 6.
 *
 * Task:
 *		Modify Programming Project 5 so that it uses qsort to sort
 *		the array of pointers.
 *
 * Date: 2026-05-04
 * Time: 06:25 PM
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define WORD_LEN 20
#define WORDS_MAX 50

int compar(const void *, const void *);

int main(void) {
	char p[WORD_LEN];
	char *warr[WORDS_MAX];
	int i = 0;

	for (int chars = 0; i < WORDS_MAX; i++) {
		printf("Enter word: ");

		fgets(p, WORD_LEN, stdin);

		if (p[0] == '\n')
			break;

		if (p[strlen(p)-1] == '\n')
			p[strlen(p)-1] = '\0';

		if ((warr[i] = malloc(strlen(p) + 1)) == NULL) {
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		strcpy(warr[i], p);
	}

	qsort(warr, i, sizeof(char *), compar);

	printf("\nIn sorted order: ");

	for (int j = 0; j < i; j++)
		printf("%s ", *(warr+j));
	putchar('\n');

	exit(EXIT_SUCCESS);
}

int compar(const void *a, const void *b) {
	return strcmp(*(char **)a, *(char **)b);
}
