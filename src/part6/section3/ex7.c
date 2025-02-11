/* 
 *
 * Task: Translate the program fragment of Exercise 2 into a single for
 * statement.
 *
 * i = 9384;
 * do {
 * 		printf("%d ", i);
 * 		i /= 10;
 * } while (i > 0) 
 *
 * Date: 2025-02-11
 * Time: 16:18 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 9384; i > 0; i /= 10) printf("%d ", i);

	exit(EXIT_SUCCESS);
}
