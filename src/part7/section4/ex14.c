/* 
 *
 * Task: Does the following statement always compute the fractional part of f
 * correctly (assuming that f and f frac_part are float variables)?
 *
 * frac_part = f - (int) f;
 *
 * If not, what's the problem?
 *
 * A: No. The value of f that exceeds type int leads to incorrect result.
 *
 * Date: 2025-02-19
 * Time: 12:41 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float f, frac_part;
	f = 2147483648.5;

	printf("f - (int) f = %f\n", frac_part = f - (int) f);
	printf("%d\n", (int) f);

	exit(EXIT_SUCCESS);
}
