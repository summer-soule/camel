/*
 *
 * Task:
 *		Using isxdigit, write a function that checks whether a string
 *		represents a valid hexadecimal number (it consists solely of
 *		hexadecimal digits). If so, the function returns the value
 *		of the number as a long int. Otherwise, the fcuntion returns -1.
 *
 * Date: 2026-03-11
 * Time: 03:16 PM
 *
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

long int isxretl(char *);

int main(void) {
	printf("0xFFFF: %ld\n", isxretl("0xFFFF"));
    printf("FFFF: %ld\n", isxretl("FFFF"));
    printf("FFFG: %ld\n", isxretl("FFFG"));

	exit(EXIT_SUCCESS);
}

long int isxretl(char str[]) {
	char *p = str;
	if (p[1] == 'x' || p[1] == 'X') p += 2;
	while (*p) {
		if (!isxdigit(*p))
			return -1;
		p++;
	}
	return strtol(str, NULL, 16);
}
