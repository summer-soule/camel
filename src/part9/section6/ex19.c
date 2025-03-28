/*
 *
 * Task: Consider the following "mystery" function:
 *
 * 	void pb(int n)
 * 	{
 * 		if (n != 0) {
 * 			pb(n / 2);
 * 			putchar('0' + n % 2);
 * 		}
 * 	}
 *
 * 	Trace the execution of the function by hand. Then write a program that
 * 	calls the function, passing it a number entered by the user. What does the
 * 	funtion do?
 *
 * 	A: converts n to sequence of 1 and 0 which represents n in binary form
 *
 * Date: 2025-03-28
 * Time: 06:36 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void
pb(int);

int main(void) {
	int n;

	printf("Enter n value: ");
	scanf("%d", &n);

	printf("pb(%d): ", n);
	pb(n);
	putchar('\n');

	exit(EXIT_SUCCESS);
}

void
pb(int n)
{
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}
}
