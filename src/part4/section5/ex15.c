/*
*
* Task: Give the values of i and j after each of the following expression
* statements has been executed. (Assume that i has the value 1 initially and
* j has the value 2.)
*
* (a) i += j;
* (b) i--;
* (c) i * j / i;
* (d) i % ++j;
*
* Date: 2025-2-02
* Time: 09:18 AM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	i = 1;
	j = 2;

	i += j;
	printf("i += j\ni = %d\nj = %d\n\n", i, j);
	i--;
	printf("i--\ni = %d\n\n", i);
	printf("i * j / i: %d\ni = %d\nj = %d\n\n",i * j / i, i, j);
	printf("i %% ++j: %d\ni = %d\nj = %d\n",i % ++j, i, j);

	exit(EXIT_SUCCESS);
}
