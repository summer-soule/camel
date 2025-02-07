/* 
 *
 * Q: Is the following if statement legal?
 *
 * if (n == 1-10)
 * 		printf("n is between 1 and 10\n");
 *
 * If so, what does it do when n is equal to 0?
 *
 * A: Yes, it's legal. Program will do nothing, until n is not -9.
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

	if (n == 1-10)
		printf("n is between 1 and 10\n");

	exit(EXIT_SUCCESS);
}
