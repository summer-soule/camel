/*
 *
 * Project 18.
 *
 * Task:
 *		Write a program that reads integers from a text file whose
 *		name is given as a command-line argument. Each line of the
 *		file may contain any number of integers (including none)
 *		separated by one or more spaces. Have the program display
 *		the largest number in the file, the smallest number, and
 *		the median (the number closes to the middle if the integers
 *		were sorted). If the file contains an even number of integers,
 *		there will be two numbers in the middle; the program should
 *		display their average (rounded down). You may assume that
 *		the file contains no more 10,000 integers.
 *
 *		Hint: Store the integers in an array and then sort the array.
 *
 * Date: 2026-01-07
 * Time: 03:16 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <ctype.h>
#include <string.h>

#define INTMAX 10000

int compare(const void *, const void *);

int main(int argc, char *argv[]) {
	FILE *fsrc;
	int numbers[INTMAX];
    int ch;
    int i = 0, j = 0;
	char buf[100];
	int median = 0;

	if (argc != 2) {
		fprintf(stderr, "usage: %s source\n", basename(argv[0]));
		exit(EXIT_FAILURE);
	}

    if ((fsrc = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
    }

	buf[0] = '\0';

	while ((ch = fgetc(fsrc)) != EOF) {
		if (isdigit(ch))
			buf[i++] = ch;
		else if (strlen(buf) > 0) {
			buf[i] = '\0';
			numbers[j++] = atoi(buf);
			i = 0, buf[0] = '\0';
		}
	}

	qsort(&numbers[0], j, sizeof(int), compare);

	for (int k = 0; k < j; k++)
		printf("numbers[%d]: %d\n", k, numbers[k]);


	if (j % 2) {
		median = numbers[j/2];
	} else {
		median = (numbers[j/2-1] + numbers[j/2]) / 2;
	}

    printf("smallest: %d\n", numbers[0]);
    printf("largest: %d\n", numbers[j-1]);
    printf("median: %d\n", median);

    fclose(fsrc);

	exit(EXIT_SUCCESS);
}

int compare(const void *a, const void *b) {
	return *(int *) a - *(int *) b;
}
