/* 
 *
 * Task: Repeat Exercise 7, but give the equivalent hexademical escape.
 *
 * (a) \b
 * (b) \n
 * (c) \r
 * (d) \t
 *
 * Date: 2025-02-18
 * Time: 08:42 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Backspace is 010\x08\n");
	printf("New line is 012\x0A");
	printf("Carriage ret is 015\x0D\n");
	printf("Horizontal tab is 011\x09test\n");

	exit(EXIT_SUCCESS);
}
