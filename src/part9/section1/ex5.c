/*
 *
 * Task: Write a function num_digits(n) that returns the number of digits in n
 * (a positive integer).
 *
 * Hint: To determine the number of digits in a number n, divide it by 10
 * repeatedly. When n reaches 0, the number of divisions indicates how many
 * digits n originally had.
 *
 * Date: 2025-03-28
 * Time: 02:45 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int
num_digits (int);

int main(void) {
	unsigned int n = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d contains %d digits\n", n, num_digits(n));

	exit(EXIT_SUCCESS);
}

unsigned int
num_digits (int n)
{
	int i = 0;
	while ((n /= 10) > 0)
		i++;
	return ++i;
}
