/* 
 *
 * Task: What output does the following for statement produce?
 *
 * for (i = 10; i >= 1; i /= 2)
 * 		printf("%d ", i++);
 *
 * A: Infinite loop.
 * It will print 10 5 3 2 1 and period 1.
 *
 * Date: 2025-02-11
 * Time: 17:24 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 10; i >= 1; i /= 2)
		printf("%d ", i++);

	exit(EXIT_SUCCESS);
}
