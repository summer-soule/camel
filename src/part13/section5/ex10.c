/*
 *
 * Task: The following function supposedly creates an identical copy of a
 * string. What's wrong with the function?
 *
 * 	char *duplicate(const char *p)
 * 	{
 * 		char *q;
 *
 * 		strcpy(q, p);
 * 		return q;
 * 	}
 *
 * A: *q points to nothing; did a tmp fix just to run without segfault
 *
 * Date: 2025-04-18
 * Time: 01:59 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *p, char *);

int main(void) {
	char a[20] = "123";
	char b[20];

	printf("b: '%s'\n", duplicate(a, b));
	exit(EXIT_SUCCESS);
}

char *duplicate(const char *p, char *bt)
{
	char *q; // points to nothing, so strcpy to q causes segfault
			 // fix it by hardcoded q = bt
	q = bt;

	strcpy(q, p);
	return q;
}
