/* 
 *
 * Task: Which one of the following statements is not equivalent to the other
 * two (assuming that the loop bodies are the same)?
 *
 * (a) for (i = 0; i < 10; i++) ...
 * (b) for (i = 0; i < 10; ++i) ...
 * (c) for (i = 0; i++ < 10; ) ...
 *
 * A: Variant (c) is not equivalent, because iteration of i happening before
 * comparison operator.
 *
 * Date: 2025-02-11
 * Time: 16:06 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++) printf("Variant (a): i = %d\n", i);
	putchar('\n');
	for (i = 0; i < 10; ++i) printf("Variant (b): i = %d\n", i);
	putchar('\n');
	for (i = 0; i++ < 10;) printf("Variant (c): i = %d\n", i);

	exit(EXIT_SUCCESS);
}
