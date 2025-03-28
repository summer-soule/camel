/*
 *
 * Task: Write the following function:
 *
 * float compute_GPA(char grades[], int n);
 *
 * The grades array will contain letter grades (A, B, C, D, or F, either
 * upper-case or lower-case); n is the length of the array. The function should
 * return the average of the grades (assume that A = 4, B = 3, C = 2, D = 1,
 * and F = 0).
 *
 * Date: 2025-03-28
 * Time: 04:02 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define STDNTS	10

float
compute_GPA(char [], int);

int main(void) {
	char grades[STDNTS] = { 'A', 'C', 'D', 'A', 'A', 'F', 'B', 'B', 'D', 'A' };

	printf("GPA: %.1f\n", compute_GPA(grades, STDNTS));

	exit(EXIT_SUCCESS);
}

float
compute_GPA(char grades[], int n)
{
	float avg = 0.0f;
	for (int i = 0; i < n; i++) {
		switch (grades[i]) {
			case 'A':
				avg += 4;
				break;
			case 'B':
				avg += 3;
				break;
			case 'C':
				avg += 2;
				break;
			case 'D':
				avg += 1;
				break;
			case 'F':
				avg += 0;
				break;
		}
	}
	return avg / n;
}
