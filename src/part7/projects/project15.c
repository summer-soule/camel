/* 
 *
 * Project 15.
 *
 * Task: Write a program that computes the factorial of a positive integer:
 *
 * Enter a positive integer: 6
 * Factorioal of 6: 720
 *
 * (a) Use a short variable to store the value of the factorial. What is the
 * largest value of n for which the program correctly prints the
 * factorial of n?
 * (b) Repeat part (a), using an int variable instead.
 * (c) Repeat part (a), using a long variable instead.
 * (d) Repeat part (a), using a long long variable instead (if your computer
 * supports the long long type).
 * (e) Repeat part (a), using a float variable instead.
 * (f) Repeat part (a), using a double variable instead.
 * (g) Repeat part (a), using a long double variable instead.
 *
 * Date: 2025-03-01
 * Time: 08:14 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	short a = 0;
	int b = 0;
	long c = 0;
	long long d = 0;
	float e = 0.0f;
	double f = 0.0f;
	long double g = 0.0f;

	printf("(short) Enter a positive integer: ");
	scanf("%hd", &a);
	printf("Factorial of %hd: ", a);
	for (short i = a - 1; i > 1; i--) a *= i;
	printf("%hd\n\n", a);

	printf("(int) Enter a positive integer: ");
	scanf("%d", &b);
	printf("Factorial of %d: ", b);
	for (int i = b - 1; i > 0; i--) b *= i;
	printf("%d\n\n", b);

	printf("(long) Enter a positive integer: ");
	scanf("%ld", &c);
	printf("Factorial of %ld: ", c);
	for (long i = c - 1; i > 0; i--) c *= i;
	printf("%ld\n\n", c);

	printf("(long long) Enter a positive integer: ");
	scanf("%lld", &d);
	printf("Factorial of %lld: ", d);
	for (long long i = d - 1; i > 0; i--) d *= i;
	printf("%lld\n\n", d);

	printf("(float) Enter a positive integer: ");
	scanf("%f", &e);
	printf("Factorial of %f: ", e);
	for (float i = e - 1; i > 0; i--) e *= i;
	printf("%f\n\n", e);

	printf("(double) Enter a positive integer: ");
	scanf("%lf", &f);
	printf("Factorial of %lf: ", f);
	for (double i = f - 1; i > 0; i--) f *= i;
	printf("%lf\n\n", f);

	printf("(long double) Enter a positive integer: ");
	scanf("%Lf", &g);
	printf("Factorial of %Lf: ", g);
	for (long double i = g - 1; i > 0; i--) g *= i;
	printf("%Lf\n", g);

	exit(EXIT_SUCCESS);
}
