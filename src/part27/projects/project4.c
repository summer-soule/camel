/*
 *
 * Project 4.
 *
 * Task:
 *		(C99) Write a program that displays the nth roots of unity when
 *		given a positive integer n. The nth roots of unity are given
 *		by the formula exp^(2*PI*i*(k/n)), where k is an integer
 *		between 0 and n - 1.
 *
 * Date: 2026-05-04
 * Time: 04:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <complex.h>

#define PI 3.14159

int main(void) {
	int n;
	double complex root;

	printf("Enter positive n: ");
	scanf("%d", &n);

	for (int k = 0; k < n; k++) {
		root = cexp((2 * PI * I * k / n));

		if (cimag(root) == 0)
			printf("1root of unity %d: %g\n", k, creal(root));
		else if (cimag(root) == 1 || cimag(root) == -1)
			printf("2root of unity %d: %g %c i\n", k, creal(root),
				   (cimag(root) > 0) ? '+' : '-');
		else
			printf("3root of unity %d: %g %c %gi\n", k, creal(root),
				   (cimag(root) > 0) ? '+' : '-', fabs(cimag(root)));
	}

	exit(EXIT_SUCCESS);
}
