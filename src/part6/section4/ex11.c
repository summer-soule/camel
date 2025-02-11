/* 
 *
 * Task: What output does the following program fragment produce?
 *
 * sum = 0;
 * for (i = 0; i < 10; i++) {
 * 		if (i % 2)
 * 			continue;
 * 		sum += i;
 * }
 * printf("%d\n", sum);
 *
 * A: 20
 *
 * Date: 2025-02-11
 * Time: 17:36 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 10; i++) {
		if (i % 2)
			continue;
		sum += i;
	}
	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
