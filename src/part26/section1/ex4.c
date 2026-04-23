/*
 *
 * Task:
 *		Write a function named display that takes any number of
 *		arguments. The first argument must be an integer. The remaining
 *		arguments will be strings. The first argument specifies how
 *		many strings the call contains. The function will print the
 *		strings on a single line, with adjacent strings separated
 *		by one space. For example, the call
 *
 *		display(4, "Special", "Agent", "Dale", "Cooper");
 *
 *		will produce the following output:
 *
 *		Special Agent Dale Cooper
 *
 * Date: 2026-04-23
 * Time: 09:55 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void display(int n, ...);

int main(void) {
	display(4, "Special", "Agent", "Dale", "Cooper");

	exit(EXIT_SUCCESS);
}

void display(int n, ...) {
	va_list ap;
	char *strptr;

	va_start(ap, n);
	for (int i = 0; i < n; i++) {
		if ((strptr = va_arg(ap, char *)) == NULL) {
			perror("display");
			exit(EXIT_FAILURE);
		}
		while (*strptr) {
			putchar(*strptr);
			strptr++;
		}
		if (i != n - 1) {
			putchar(' ');
		}
	}
	putchar('\n');
	va_end(ap);
}
