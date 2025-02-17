/* 
 *
 * Task: Which of the following are not legal types in C?
 *
 * (a) short unsigned int
 * (b) short float | invalid
 * (c) long double
 * (d) unsigned long
 *
 * Date: 2025-02-17
 * Time: 12:51 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	short unsigned int a = 1;
	long double c = 2;
	unsigned long d = 3;

	printf("short unsigned int: %u\n", a);
	printf("short float is invalid type\n");
	printf("long double: %Lf\n", c);
	printf("unsigned long: %ld\n", d);

	exit(EXIT_SUCCESS);
}
