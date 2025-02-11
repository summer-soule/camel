/* 
 *
 * Task: What output does the following program fragment produce?
 *
 * i = 9384;
 * do {
 * 		printf("%d ", i);
 * 		i /= 10;
 * } while (i > 0);
 * 
 * A: 9384 938 93 9 
 *
 * Date: 2025-02-11
 * Time: 15:55 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	i = 9384;

	do {
		printf("%d ", i);
		i /= 10;
	} while (i > 0);

	exit(EXIT_SUCCESS);
}
