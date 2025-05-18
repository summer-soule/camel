/*
 *
 * Task:
 *		Suppose that b and i are declared as follows:
 *
 *		enum {FALSE, TRUE} b;
 *		int i;
 *
 *		Which of the following statements are legal? Which ones are "safe"
 *		(always yield a meaningful result)?
 *
 *		(a)	b = FALSE;
 *		(b)	b = i;
 *		(c)	b++;
 *		(d)	i = b;
 *		(e)	i = 2 * b + 1;
 *
 * Answer:
 *		all statements are legal, but (b) and (c) are unsafe because
 *		i = 3 can be assigned to b which is out of range (0-1) and
 *		same with multiple increments.
 *
 * Date: 2025-05-19
 * Time: 02:16 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	enum {FALSE, TRUE} b;
	int i;

	b = FALSE;
	printf("b is %d\n", b);

	i = 3;
	b = i;
	printf("b is out of range (0-1): %d\n", b);

	b++;
	printf("b is also out of range (0-1): %d\n", b);

	i = b;
	printf("i: %d\n", i);

	i = 2 * b + 1;
	printf("i: %d\n", i);
	
	exit(EXIT_SUCCESS);
}
