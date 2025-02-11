/* 
 *
 * Task: Which one of the following statements is not equivalent to the other
 * two (assuming that the loop bodies are the same)?
 *
 * (a) while (i < 10) {...}
 * (b) for (; i < 10;) {...}
 * (c) do {...} while (i < 10);
 *
 * A: Variant (c) is different because body always executes atleast once.
 *
 * Date: 2025-02-11
 * Time: 16:18 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	i = 10;

	while (i < 10) {
		printf("Variant (a): i = %d\n", i);
		i++;
	}
	putchar('\n');

	i = 10;

	for (; i < 10;) {
		printf("Variant (b): i = %d\n", i);
		i++;
	}
	putchar('\n');

	i = 10;

	do {
		 printf("Variant (c): i = %d\n", i);
		 i++;
	} while (i < 10);

	exit(EXIT_SUCCESS);
}
