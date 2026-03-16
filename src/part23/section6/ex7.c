/*
 *
 * Task:
 *		Section 23.6 explains how to call strchr repeatedly to
 *		locate all occurrences of a character within a string.
 *		Is it possible to locate all occurrences in reverse order
 *		by calling strrchr repeatedly?
 *
 * Date: 2026-03-17
 * Time: 12:02 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[] = "ababababababa";
	char *p1, *p2;

	p1 = strrchr(str, 'b');
	p2 = p1;

    while (p2) {
		*p2 = '\0';
		p2 = strrchr(str, 'b');
    }

    if (p1 == p2) {
        printf("pointers are equal which means multiple call strrchar()\n"
               "doesn't allow to locate all occurrences in reverse order\n");
    } else {
        printf("pointers are not equal which means multiple call strrchar()\n"
               "allow to locate all occurrences in reverse order, but it's not trivial\n");
	}

	exit(EXIT_SUCCESS);
}
