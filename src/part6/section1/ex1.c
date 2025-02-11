/* 
 *
 * Task: What output does the following program fragment produce?
 *
 * i = 1;
 * while (i <= 128) {
 * 		printf("%d ", i);
 * 		i *= 2;
 * }
 * 
 * A: 1 2 4 8 16 32 64 128 
 *
 * Date: 2025-02-11
 * Time: 15:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	i = 1;

	while (i <= 128) {
		printf("%d ", i);
		i *= 2;
	}

	exit(EXIT_SUCCESS);
}
