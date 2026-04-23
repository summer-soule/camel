/*
 *
 * Task:
 *		Extend the function of Exercise 2 so that it allows
 *		two conversion specifications: %d and %s. Each %d
 *		in the format string indicates an int argument, and
 *		each %s indicates a char * (string) argument.
 *
 * Date: 2026-04-23
 * Time: 09:32 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void myprintf(const char *format, ...);

int main(void) {
	myprintf("test: %d\n", 5);
	myprintf("test: %s\n", "qwe");

	exit(EXIT_SUCCESS);
}

void myprintf(const char *format, ...) {
	va_list ap;
	int value;
	int power = 1;
	char *str = NULL;

	va_start(ap, format);
	for (int i = 0; *(format+i) != '\0'; i++) {
		if (*(format+i) != '%')
			putchar(*(format+i));
		else
			switch (*(format+i+1)) {
			case 'd':
				value = va_arg(ap, int);
				if (value >= 0 && value < 10)
					putchar('0' + value);
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
				break;
			case 's':
				if ((str = va_arg(ap, char *)) != NULL)
					while (*str != '\0') {
						putchar(*str);
						str++;
					}
				i++;
				break;
			case '\n':
				putchar('\n');
				i++;
				break;
			default:
				i++;
			}
	}
	va_end(ap);
}
