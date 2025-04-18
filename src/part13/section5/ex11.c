/*
 *
 * Task: The Q&A section at the end of this chapter shows how the strcmp
 * function might be written using array subscripting. Modify the function
 * to use pointer arithmetic instead.
 *
 * Date: 2025-04-18
 * Time: 02:21 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int mystrcmp(char *s, char *t);

int main(void) {
	char a[5] = "123";
	char b[5] = "312";
	char c[5] = "123";

	printf("%d\n", mystrcmp(a, b));
	if (mystrcmp(a, b) < 0) printf("a<b: '%s' < '%s'\n", a, b);
	if (mystrcmp(a, b) > 0) printf("a>b: '%s' > '%s'\n", a, b);
	if (mystrcmp(a, b) == 0) printf("a==b: '%s' == '%s'\n", a, b);

	if (mystrcmp(a, c) == 0) printf("a==c: '%s' == '%s'\n", a, c);

	exit(EXIT_SUCCESS);
}

int mystrcmp(char *s, char *t)
{
	while (*s == *t) {
		if (!*s) return 0;
		s++; t++;
	}
	return *s - *t;
}
