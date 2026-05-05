/*
 *
 * Project 5.
 *
 * Task:
 *		Write a program that sorts a series of words entered by the user:
 *
 *		Enter word: foo
 *		Enter word: bar
 *		Enter word: baz
 *		Enter word: quux
 *		Enter word:
 *
 *		In sorted order: bar baz foo quux
 *
 *		Assume that each word is no more than 20 characters long.
 *		Stop reading when the user enters an empty word (i.e., presses
 *		Enter without entering a word). Store each word in a dynamically
 *		allocated string, using an array of pointers to keep track of the
 *		strings, as in the remind2.c program (Section 17.2). After all
 *		words have been read, sort the array (using any sorting technique)
 *		and then use a loop to print the words in sorted order.
 *
 *		Hint: Use the read_line function to read each word, as in remind2.c.
 *
 * Date: 2025-07-02
 * Time: 10:58 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define WORD_LEN 20
#define WORDS_MAX 50

int partition(char *[], int, int);
void swap(char **, char **);
void quickSort(char *[], int, int);

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

	quickSort(warr, 0, i - 1);

	printf("\nIn sorted order: ");

	for (int j = 0; j < i; j++)
		printf("%s ", *(warr+j));
	putchar('\n');

	exit(EXIT_SUCCESS);
}

int partition(char *arr[], int low, int high) {
	char *pivot = arr[high];

	int i = low - 1;

	for (int j = low; j <= high - 1; j++) {
		if (strcmp(arr[j], pivot) < 0) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i+1], &arr[high]);

	return i + 1;
}

void swap(char **a, char **b) {
	char *t = *a;
	*a = *b;
	*b = t;
}

void quickSort(char *arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
