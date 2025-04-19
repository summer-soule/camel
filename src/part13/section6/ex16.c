/*
 *
 * Task: Use the techniques of Section 13.6 to condense the count_spaces
 * function of Section 13.4. In particular, replace the for statement by a
 * while loop.
 *
 * Date: 2025-04-19
 * Time: 12:01 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int count_spaces(const char []);

int main(void) {

	printf("in string '%s' %d spaces\n", "1 2 3", count_spaces("1 2 3"));

	exit(EXIT_SUCCESS);
}

int count_spaces(const char s[])
{
	int count = 0;

	while (*s)
		if (*s++ == ' ')
			count++;
	return count;
}
