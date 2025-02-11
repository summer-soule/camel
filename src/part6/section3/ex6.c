/* 
 *
 * Task: Translate the program fragment of Exercise 1 into a single for
 * statement.
 *
 * i = 1;
 * while (i <= 128) {
 * 		printf("%d ", i);
 * 		i *= 2;
 * }
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

	for (i = 1; i <= 128; i *= 2) printf("%d ", i);

	exit(EXIT_SUCCESS);
}
