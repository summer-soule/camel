/* 
 *
 * Task: The following program fragments illustrate the short-circuit
 * behavior of logical expressions. Show the output produced by each, assuming
 * that i, j, and k are int variables.
 *
 * (a)	i = 3; j = 4; k = 5;
 * 		printf("Variant (a):\n");
 * 		printf("i < j || ++ j < k = %d \n", i < j || ++ j < k);
 * 		printf("i = %d\nj = %d\nk = %d\n", i, j, k);
 *
 * (b)	i = 7; j = 8; k = 9;
 * 		printf("Variant (b):\n");
 * 		printf("i - 7 && j++ < k = %d \n", i - 7 && j++ < k);
 * 		printf("i = %d\nj = %d\nk = %d\n", i, j, k);
 *
 * (c)	i = 7; j = 8; k = 9;
 * 		printf("Variant (c):\n");
 * 		printf("(i = j) || (j = k) = %d \n", (i = j) || (j = k));
 * 		printf("i = %d\nj = %d\nk = %d\n", i, j, k);
 *
 * (d)	i = 1; j = 1; k = 1;
 * 		printf("Variant (d):\n");
 * 		printf("++i || ++j && ++k = %d \n", ++i || ++j && ++k);
 * 		printf("i = %d\nj = %d\nk = %d\n", i, j, k);
 *
 * Date: 2025-02-07
 * Time: 07:16 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;
	
	i = 3; j = 4; k = 5;
	printf("Variant (a):\n");
	printf("i < j || ++ j < k = %d \n", i < j || ++ j < k);
	printf("i = %d\nj = %d\nk = %d\n\n", i, j, k);

	i = 7; j = 8; k = 9;
	printf("Variant (b):\n");
	printf("i - 7 && j++ < k = %d \n", i - 7 && j++ < k);
	printf("i = %d\nj = %d\nk = %d\n\n", i, j, k);

	i = 7; j = 8; k = 9;
	printf("Variant (c):\n");
	printf("(i = j) || (j = k) = %d \n", (i = j) || (j = k));
	printf("i = %d\nj = %d\nk = %d\n\n", i, j, k);

	i = 1; j = 1; k = 1;
	printf("Variant (d):\n");
	printf("++i || ++j && ++k = %d \n", ++i || ++j && ++k);
	printf("i = %d\nj = %d\nk = %d\n", i, j, k);

	exit(EXIT_SUCCESS);
}
