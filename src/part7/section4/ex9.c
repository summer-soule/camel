/* 
 *
 * Task: Suppose that i and j are variables of type int. What is the type of
 * the expression i / j + 'a'?
 *
 * Date: 2025-02-18
 * Time: 08:47 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	i = 2;
	j = 3;

	printf("Expression has int type: %d\n", i / j + 'a');

	exit(EXIT_SUCCESS);
}
