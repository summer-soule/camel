/* 
 *
 * Task: Suppose that i is a variable of type int, f is a variable of type
 * float, and d is a variable of type double. What is the type of the
 * expression i * f / d?
 *
 * A: double
 *
 * Date: 2025-02-18
 * Time: 11:52 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	float f;
	double d;

	i = 2;
	f = 3.2f;
	d = 5.0f;

	printf("Expression has double type: %f\n", i * f / d);

	exit(EXIT_SUCCESS);
}
