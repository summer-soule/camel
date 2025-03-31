/*
 *
 * Project 5.
 *
 * Task: Modify Programming Project 17 from Chapter 8 so that it includes the
 * following functions:
 *
 * void create_magic_square(int n, char magic_square[n][n]);
 * void print_magic_square(int n, char magic_square[n][n]);
 *
 * After obtaining the number n from the user, main will call
 * create_magic_square, passing it an n x n array that is declared inside main.
 * create_magic_square will fill the array with the numbers 1, 2, ..., n^2 as
 * described in the original project. main will then call print_magic_square,
 * which will display the array in the format described in the original project.
 *
 * Note: If your compiler dousn't support variable-length arrays, declare the
 * array in main to be 99 x 99 instead of n x n and use the following
 * prototypes instead:
 *
 * void create_magic_square(int n, char magic_square[99][99]);
 * void print_magic_square(int n, char magic_square[99][99]);
 *
 *
 * Date: 2025-03-31
 * Time: 04:43 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ERR_N_INPUT "err: size of magic square must be an odd number,"\
					" but %d is not odd.\n"

void
create_magic_square(
		int n,
		char magic_square[n][n]);

void
print_magic_square(
		int n,
		char magic_square[n][n]);

int main(void) {
	int n;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	// init square[n][n] VLA (variable-lentgh array)
	char square[n][n];
	
	// set square[n][n] to 0
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			square[i][j] = 0;

	// check oddness
	if (n % 2 == 0) {
		printf(ERR_N_INPUT, n);
		exit(EXIT_SUCCESS);
	}

	create_magic_square(n, square);
	print_magic_square(n, square);

	exit(EXIT_SUCCESS);
}

void
create_magic_square(
		int n,
		char magic_square[n][n])
{
	int i, j;

	// init first position
	i = 0;
	j = (n + 1) / 2 - 1;
	magic_square[i][j] = 1;

	// cursed roaming loop
	for (int m = 2; m <= n * n; m++) {
		if (magic_square
				[    ((i - 1) >=      0)  ? (i - 1) : (n - 1)]
				[    ((j + 1) >  (n - 1)) ?      0  : (j + 1)]
					== 0)
		{
			magic_square
				[i = ((i - 1) >=      0)  ? (i - 1) : (n - 1)]
				[j = ((j + 1) >  (n - 1)) ?      0  : (j + 1)]
					=  m;
		} else {
			magic_square
				[i = ((i + 1) <= (n - 1)) ? (i + 1) :       0]
				[j]
					=  m;
		}
	}
}

void
print_magic_square(
		int n,
		char magic_square[n][n])
{
	// print result
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%2d\t", magic_square[i][j]);
		putchar('\n');
	}
}
