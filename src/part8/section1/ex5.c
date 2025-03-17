/*
 *
 * Task: The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each
 * number is the sum of the preceding numbers. Write a program fragment that
 * declares an array named fib_numbers of length 40 and fills the array with
 * the first 40 Fibonacci numbers.
 * 
 * Hint: Fill in the first two numbers individually, then use a loop to compute
 * the remaining numbers.
 *
 * Date: 2025-03-17
 * Time: 12:06 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define A_SIZE 40

int main(void) {
	int fib_numbers[A_SIZE] = {0, 1, 1, 2, 3, 5, 8, 13};

	for (int i = 8; i < A_SIZE; i++)
		fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];

	for (int i = 0; i < A_SIZE; i++)
		printf("fib_numbers[%d] = %d\n", i, fib_numbers[i]);

	exit(EXIT_SUCCESS);
}
