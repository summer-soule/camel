/* 
 *
 * Task: Translate the for statement of Exercise 8 into an equivalent while
 * statement. You will need one statement in addition to the while loop itself.
 *
 * for (i = 10; i >= 1; i /= 2)
 * 		printf("%d ", i++);
 *
 * Date: 2025-02-11
 * Time: 17:33 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	i = 10;

	while (i >= 1) {
		printf("%d ", i++);
		i /= 2;
	}

	exit(EXIT_SUCCESS);
}
