/*
*
* Task: Show the output produced by each of the following program fragments.
* Assume that i and j are int variables.
*
* (a) i = 5;
* 	  j = ++i * 3 - 2;
* 	  printf("i = %d\nj = %d\n", i, j);
* (b) i = 5;
* 	  j = 3 - 2 * i++;
* 	  printf("i = %d\nj = %d\n", i, j);
* (c) i = 7;
* 	  j = 3 * i-- + 2;
* 	  printf("i = %d\nj = %d\n", i, j);
* (d) i = 7;
* 	  j = 3 + --i * 2;
* 	  printf("i = %d\nj = %d\n", i, j);
*
* Date: 2025-2-1
* Time: 06:21 AM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	i = 5;
	j = ++i * 3 - 2;
	printf("Variant (a):\n");
	printf("i = %d\nj = %d\n\n", i, j);
	i = 5;
	j = 3 - 2 * i++;
	printf("Variant (b):\n");
	printf("i = %d\nj = %d\n\n", i, j);
	i = 7;
	j = 3 * i-- + 2;
	printf("Variant (c):\n");
	printf("i = %d\nj = %d\n\n", i, j);
	i = 7;
	j = 3 + --i * 2;
	printf("Variant (d):\n");
	printf("i = %d\nj = %d\n", i, j);
	
	exit(EXIT_SUCCESS);
}
