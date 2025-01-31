/*
*
* Task: Show the output produced by each of the following program fragments.
* Assume that i, j and k are int variables.
*
* (a) i = 7; j = 8;
*     i *= j + 1;
* 	  printf("%d %d", i, j);
* (b) i = j = k = 1;
* 	  i += j += k;
* 	  printf("%d %d %d", i, j, k);
* (c) i = 1; j = 2; k = 3;
* 	  i -= j -= k;
* 	  printf("%d %d %d", i, j, k);
* (d) i = 2; j = 1; k = 0;
* 	  i *= j *= k;
* 	  printf("%d %d %d", i, j, k);
*
* Date: 2025-1-31
* Time: 11:20 AM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;

	/*	variant a */
	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d\n", i, j);

	/*	variant b */
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);

	/*	variant c */
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k);

	/*	variant d */
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d\n", i, j, k);
	
	exit(EXIT_SUCCESS);
}
