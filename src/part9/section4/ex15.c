/*
 *
 * Task: The following (rather confusing) function finds the median of three
 * numbers. Rewrite the function so that it has just one return statement.
 *
 * double median(double x, double y, double z)
 * {
 * 		if (x <= y)
 * 			if (y <= z) return y;
 * 				else if (x <= z) return z;
 * 				else return x;
 * 			if (z <= y) return y;
 * 			if (x <= z) return x;
 * 			return z;
 * }
 *
 * Date: 2025-03-28
 * Time: 05:48 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

double median(double, double, double);

int main(void) {
	int x = 1.0f;
	int y = 2.0f;
	int z = 3.0f;

	printf("mid: %f\n", median(x, y, z));

	exit(EXIT_SUCCESS);
}

double median(double x, double y, double z)
{
	double mid = x;
	if ((y <= x && y >= z) || (y <= z && y >= x))
		mid = y;
	else if ((z <= x && z >= y) || (z <= y && z >= x))
		mid = z;

	return mid;
}
