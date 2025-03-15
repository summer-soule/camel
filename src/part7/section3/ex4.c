/* 
 *
 * Task: If c is a variable of type char, which one of the following statements
 * is illegal?
 *
 * (a) i += c; i has type int
 * (b) c = 2 * c - 1;
 * (c) putchar(c);
 * (d) printf(c); | warning: passing argument 1 of 'printf' makes pointer from
 * 						     integer without a cast 
 * 				  | causes segfault
 *
 * Date: 2025-02-17
 * Time: 13:04 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char c;

	c = '#';
	i = 1;

	printf("c: %c\n", c);
	printf("i: %d\n", i);
	printf("i += c: %d\n", i += c);

	c = 2 * c - 1;
	printf("c = 2 * c - 1: %c\n", c);
	putchar(c);
//	printf(c);	// illegal

	exit(EXIT_SUCCESS);
}
