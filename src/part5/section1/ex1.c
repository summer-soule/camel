/* 
 *
 * Task: The following program fragments illustrate the relational and equality
 * operators. Show the output produced by each, asuuming that i, j, and k are
 * int variables.
 *
 * (a)	i = 2; j = 3;
 * 		k = i * j == 6;
 * 		printf("%d\n", k);
 *
 * (b)	i = 5; j = 10; k = 1;
 * 		printf("%d\n", k > i < j);
 *
 * (c)	i = 3; j = 2; k = 1;
 * 		printf("%d\n", k = 1);
 *
 * (d)	i = 3; j = 4; k = 5;
 * 		printf("%d\n", i % j + i < k);
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
	i = 2; j = 3;
	k = i * j == 6;
	printf("Variant (a):\n");
	printf("k = %d\n", k);
								   
	i = 5; j = 10; k = 1;
	printf("Variant (b):\n");
	printf("k > i < j = %d\n", k > i < j);
								   
	i = 3; j = 2; k = 1;
	printf("Variant (c):\n");
	printf("k = %d\n", k = 1);
								   
	i = 3; j = 4; k = 5;
	printf("Variant (d):\n");
	printf("i % j + i < k = %d\n", i % j + i < k);

	exit(EXIT_SUCCESS);
}
