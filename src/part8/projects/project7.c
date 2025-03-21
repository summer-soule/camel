/*
 *
 * Project 7.
 *
 * Task: Write a program that reads a 5x5 array of integers and then prints
 * the row sums and the column sums:
 *
 * Enter row 1: 8 3 9 0 19
 * Enter row 2: 3 5 17 1 1
 * Enter row 3: 2 8 6 23 1
 * Enter row 4: 15 7 3 2 9
 * Enter row 5: 6 14 2 6 0
 *
 * Row totals: 30 27 40 36 28
 * Column totals: 34 37 37 32 21
 *
 * Date: 2025-03-21
 * Time: 01:39 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input[5][5] = {0};
	int total_row, total_col;

	for (int i = 0; i < 5; i++) {
		printf("Enter row %d: ", i+1);
		for (int j = 0; j < 5; j++) {
			scanf("%d", &input[i][j]);
		}
	}

	printf("Row totals: ");
	for (int i = 0; i < 5; i++) {
		total_row = 0;
		for (int j = 0; j < 5; j++)
			total_row += input[i][j];
		printf("%d ", total_row);
	}

	printf("\nColumn totals: ");
	for (int j = 0; j < 5; j++) {
		total_col = 0;
		for (int i = 0; i < 5; i++)
			total_col += input[i][j];
		printf("%d ", total_col);
	}
	putchar('\n');


	exit(EXIT_SUCCESS);
}
