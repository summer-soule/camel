/*
 *
 * Project 17.
 *
 * Task: Write a program that prints an n x n magic square (a square
 * arrangement of the numbers 1, 2, ..., n^2 in which the sums of the rows,
 * columns, and diagonals are all the same). The user will specify the value
 * of n:
 *
 * This program creates a magic square of a specified size.
 * The size must be an odd number between 1 and 99.
 * Enter size of magic square: 5
 * 	17	24	 1	 8	15
 * 	23	 5	 7	14	16
 * 	 4	 6	13	20	22
 * 	10	12	19	21	 3
 * 	11	18	25	 2	 9
 *
 * 	Store the magic square in a two-dimensional array. Start by placing the
 * 	number 1 in the middle of row 0. Place each of the remaining numbers 2, 3,
 * 	..., n^2 by moving up one row and over one column. Any attempt to go
 * 	outside the bounds of the array should "wrap around" to the opposite side
 * 	of the array. For example, instead of storing the next number in row -1,
 * 	we would store it in row n - 1 (the last row). Instead of storing the next
 * 	number in column n, we would store it in column 0. If a particular array
 * 	element is already occupied, put the number directly below previously
 * 	stored number. If your compiler supports variable-lentgh arrays, declare
 * 	the array to have n rows and n columns. If not, declare the array to have
 * 	99 rows and 99 columns.
 *
 * Date: 2025-03-26
 * Time: 07:02 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int i, j;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	// init square[n][n] VLA (variable-lentgh array)
	int square[n][n];
	
	// set square[n][n] to 0
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			square[i][j] = 0;

	// check oddness
	if (n % 2 == 0) {
		printf("err: size of magic square must be an odd number, but %d is not odd.\n", n);
		exit(EXIT_SUCCESS);
	}

	// init first position
	i = 0;
	j = (n + 1) / 2 - 1;
	square[i][j] = 1;

	// cursed roaming loop
	for (int m = 2; m <= n * n; m++) {
		if (square
				[    ((i - 1) >=      0)  ? (i - 1) : (n - 1)]
				[    ((j + 1) >  (n - 1)) ?      0  : (j + 1)]
					== 0)
		{
			square
				[i = ((i - 1) >=      0)  ? (i - 1) : (n - 1)]
				[j = ((j + 1) >  (n - 1)) ?      0  : (j + 1)]
					=  m;
		} else {
			square
				[i = ((i + 1) <= (n - 1)) ? (i + 1) :       0]
				[j]
					=  m;
		}
	}

	// print result
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%2d\t", square[i][j]);
		putchar('\n');
	}

	exit(EXIT_SUCCESS);
}
