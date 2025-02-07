/* 
 *
 * Task: The following program fragments illustrate the logical operators.
 * Show the output produced by each, assuming that i, j, and k are int
 * variables.
 *
 * (a)	i = 10; j = 5;
 * 		printf("Variant (a):\n");
 * 		printf("!i < j = %d \n", !i < j);
 *
 * (b)	i = 2; j = 1;
 * 		printf("Variant (b):\n");
 * 		printf("!!i + !j = %d \n", !!i + !j);
 *
 * (c)	i = 5; j = 0; k = -5;
 * 		printf("Variant (c):\n");
 * 		printf("i && j || k = %d \n", i && j || k);
 *
 * (d)	i = 1; j = 2; k = 3;
 * 		printf("Variant (d):\n");
 * 		printf("i < j || k = %d \n", i < j || k);
 *
 * Date: 2025-02-07
 * Time: 11:38 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;

	 i = 10; j = 5;
	 printf("Variant (a):\n");
	 printf("!i < j = %d \n\n", !i < j);
	 
	 i = 2; j = 1;
	 printf("Variant (b):\n");
	 printf("!!i + !j = %d \n\n", !!i + !j);
	 
	 i = 5; j = 0; k = -5;
	 printf("Variant (c):\n");
	 printf("i && j || k = %d \n\n", i && j || k);
	 
	 i = 1; j = 2; k = 3;
	 printf("Variant (d):\n");
	 printf("i < j || k = %d \n", i < j || k);

	 exit(EXIT_SUCCESS);
}
