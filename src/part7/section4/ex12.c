/* 
 *
 * Task: Suppose that i is a variable of type int, f is a variable of type
 * float, and d is a variable of type double. Explain what conversions take
 * place during the execution of the following statement:
 *
 * d = i + f;
 *
 * i converts to double
 * f converts to double
 * d remains double
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

	d = i + f;

	printf("Expression has double type: %f\n", d);

	exit(EXIT_SUCCESS);
}
