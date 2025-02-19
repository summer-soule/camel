/* 
 *
 * Project 3.
 *
 * Task: Modify the sum2.c program of Section 7.1 to sum a series of double
 * values.
 *
 * Date: 2025-02-19
 * Time: 2:23 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");

	scanf("%lf", &n);

	while (n != 0) {
		sum += n;
		scanf("%lf", &n);
	}

	printf("The sum is: %lf\n", sum);

	exit(EXIT_SUCCESS);
}
