/*
*
* Task: What is the value of each of the following expressions in C89?
* (Give all possible values if an expression may have more than one value.)
*
* (a) 8 % 5
* (b) -8 % 5
* (c) 8 % -5
* (d) -8 % -5
*
* Date: 2025-1-23
* Time: 16:35 PM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	printf("Task: What is the value of each of the following expressions in\
 C89?\n(Give all possible values if an expression may have more than one value.)\n");

	printf("%d %% %d = %d\n", 8, 5, 8%5);
	printf("%d %% %d = %d\n", -8, 5, (-8)%5);
	printf("%d %% %d = %d\n", 8, -5, 8%(-5));
	printf("%d %% %d = %d\n\n", -8, -5, (-8)%(-5));

	printf("%d %% %d %% %d = %d\n", 8, 4, 2, 8%4%2);
	printf("%d %% %d %% %d = %d\n", -8, 4, 2, (-8)%4%2);
	printf("%d %% %d %% %d = %d\n", 8, -4, 2, 8%(-4)%2);
	printf("%d %% %d %% %d = %d\n", 8, 4, -2, 8%4%(-2));
	printf("%d %% %d %% %d = %d\n", (-8), (-4), 2, (-8)%(-4)%2);
	printf("%d %% %d %% %d = %d\n", (-8), 4, (-2), (-8)%4%(-2));
	printf("%d %% %d %% %d = %d\n", (-8), (-4), (-2), (-8)%(-4)%(-2));

	exit(EXIT_SUCCESS);
}
