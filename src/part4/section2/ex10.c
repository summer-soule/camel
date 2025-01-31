/*
*
* Task: Show the output produced by each of the following program fragments.
* Assume that i and j are int variables.
*
* (a) i = 6;
* 	  j = i += i;
* 	  printf("%d %d", i, j);
* (b) i = 5;
* 	  j = (i -= 2) + 1;
* 	  printf("%d %d", i, j);
* (c) i = 7;
* 	  j = 6 + (i = 2.5);
* 	  printf("%d %d", i, j);
* (d) i = 2; j = 8;
* 	  j = (i = 6) + (j = 3);
* 	  printf("%d %d", i, j);
*
* Date: 2025-1-31
* Time: 23:39 PM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	i = 6;
	j = i += i;
	printf("%d %d\n", i, j);

	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d\n", i, j);

	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d\n", i, j);

	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf("%d %d\n", i, j);

	exit(EXIT_SUCCESS);
}
