/* 
 *
 * Task: Find the error in the following program fragment and fix it.
 *
 * if (n % 2 == 0);
 * 		printf("n is even\n");
 *
 * A: extra semicolon at the end of if statement leads to print
 * "n is even" every time.
 *
 * Date: 2025-02-12
 * Time: 07:41 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 4;

	if (n % 2 == 0)
		printf("n is even\n");

	exit(EXIT_SUCCESS);
}
