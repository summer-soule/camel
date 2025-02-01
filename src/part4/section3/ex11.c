/*
*
* Task: Show the output produced by each of the following program fragments.
* Assume that i, j and k are int variables.
*
* (a) i = 1;
* 	  printf("%d ", i++ - 1);
* 	  printf("%d", i);
* (b) i = 10; j = 5;
* 	  printf("%d ", i++ - ++j);
* 	  printf("%d %d", i, j);
* (c) i = 7; j = 8;
* 	  printf("%d ", i++ - --j);
* 	  printf("%d %d", i, j);
* (d) i = 3; j = 4; k = 5;
* 	  printf("%d ", i++ - j++ + --k);
* 	  printf("%d %d %d", i, j, k);
*
* Date: 2025-2-1
* Time: 06:21 AM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;

	i = 1;
	printf("Variant (a):\n");
	printf("i++ - 1 = %d \n", i++ - 1);
	printf("i = %d\n\n", i);

	i = 10; j = 5;
	printf("Variant (b):\n");
	printf("i++ - ++j = %d \n", i++ - ++j);
	printf("i = %d\nj = %d\n\n", i, j);

	i = 7; j = 8;
	printf("Variant (c):\n");
	printf("i++ - --j = %d \n", i++ - --j);
	printf("i = %d\nj = %d\n\n", i, j);

	i = 3; j = 4; k = 5;
	printf("Variant (d):\n");
	printf("i++ - j++ + --k = %d \n", i++ - j++ + --k);
	printf("i = %d\nj = %d\nk = %d\n", i, j, k);

	exit(EXIT_SUCCESS);
}
