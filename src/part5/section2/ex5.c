/* 
 *
 * Q: Is the following if statement legal?
 *
 * if (n >= 1 <= 10)
 * 		printf("n is between 1 and 10\n");
 *
 * If so, what does it do when n is equal to 0?
 *
 * A: Yes, it's legal. But compiler will throw warnings:
 * 1. Comparison of constant '10' with boolean expression is always "true"
 * 2. Comparisons like 'X<=Y<=Z' do not have their mathematical meaning
 *
 * Which means expression of if statement will be true when n is any value.
 *
 * Date: 2025-02-07
 * Time: 13:18 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");

	exit(EXIT_SUCCESS);
}
