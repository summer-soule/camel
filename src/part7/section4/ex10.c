/* 
 *
 * Task: Suppose that i is a variable of type int, j is a variable of type long,
 * and k is a variable of type unsigned int. What is the type of the expression
 * i + (int) j * k?
 *
 * A: unsigned int
 *
 * Date: 2025-02-18
 * Time: 08:52 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	long j;
	unsigned int k;

	i = 2;
	j = 3;
	k = 5;

	printf("Expression has int type: %u\n", i + (int) j * k);

	exit(EXIT_SUCCESS);
}
