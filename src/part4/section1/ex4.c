/*
*
* Task: Repeat exercise 3 for C99.
*
* Date: 2025-1-22
* Time: 23:08 PM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	printf("Task: Repeat exercise 3 for C99.\n");

	printf("%d / %d = %d\n", 8, 5, 8/5);
	printf("%d / %d = %d\n", -8, 5, (-8)/5);
	printf("%d / %d = %d\n", 8, -5, 8/(-5));
	printf("%d / %d = %d\n\n", -8, -5, (-8)/(-5));

	printf("%d / %d / %d = %d\n", 8, 4, 2, 8/4/2);
	printf("%d / %d / %d = %d\n", -8, 4, 2, (-8)/4/2);
	printf("%d / %d / %d = %d\n", 8, -4, 2, 8/(-4)/2);
	printf("%d / %d / %d = %d\n", 8, 4, -2, 8/4/(-2));
	printf("%d / %d / %d = %d\n", (-8), (-4), 2, (-8)/(-4)/2);
	printf("%d / %d / %d = %d\n", (-8), 4, (-2), (-8)/4/(-2));
	printf("%d / %d / %d = %d\n", (-8), (-4), (-2), (-8)/(-4)/(-2));

	exit(EXIT_SUCCESS);
}
