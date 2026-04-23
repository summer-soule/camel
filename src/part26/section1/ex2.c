/*
 *
 * Task:
 *		Write a simplified version of printf in which the only
 *		conversion specification is %d, and all arguments after
 *		the first are assumed to have int type. If the function
 *		encounters a % character that's not immediately followed
 *		by a d character, it should ignore both characters.
 *		The function should use calls of putchar to produce
 *		all output. You may assume that the format string doesn't
 *		contain escape sequences.
 *
 * Date: 2026-04-22
 * Time: 11:36 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void myprintf(const char *format, ...);

int main(void) {
	myprintf("test: %d\n", 5);
	myprintf("test: %d\n", -5);
	myprintf("test: %d\n", 0);
	myprintf("test: \n%d\n", 5);
	myprintf("test: % d\n", 5);
	myprintf("test: %d\n", 10);
	myprintf("test: %d\n", 123);
	myprintf("test: %d\n", -123);
	myprintf("test: %d %d\n", 123, -123);

	exit(EXIT_SUCCESS);
}

void myprintf(const char *format, ...) {
	va_list ap;
	int value;
	int power = 1;

	va_start(ap, format);
	for (int i = 0; *(format+i) != '\0'; i++) {
		// check for valid %d
		if (*(format+i) == '%' && *(format+i+1) == 'd') {
			value = va_arg(ap, int);
			if (value == 0)
				putchar('0');
			else {
				if (value < 0) {
					putchar('-');
					value = -value;
				}
				for (int tmp = value; tmp >= 10; tmp /= 10, power *= 10)
					;
				do {
					putchar('0' + value / power);
					value -= (value / power) * power;
					power /= 10;
				} while (power);
			}
			i++;
			power = 1;
		}
		// skip invalid % specification
		else if (*(format+i) == '%' && *(format+i+1) != 'd') {
			i++;
		}
		// print newline character if found
		else if (*(format+i) == '\\' && *(format+i+1) == 'n') {
			putchar('\n');
			i++;
		}
		else
			putchar(*(format+i));
	}
	va_end(ap);
}
