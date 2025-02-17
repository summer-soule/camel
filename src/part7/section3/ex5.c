/* 
 *
 * Task: Which one of the following is not a legal way to write the number 65?
 * (Assume that the character set is ASCII.)
 *
 * (a) 'A'
 * (b) 0b1000001 | illegal: despite the program will compile & run without
 * 				   warnings or errors, the binary format is not the correct
 * 				   way to represent numeric value of char type. Otherwise,
 * 				   only 'A', octal and hex format are legal to use.
 * (c) 0101
 * (d) 0x41
 *
 * Date: 2025-02-17
 * Time: 13:22 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	putchar('A');
	putchar('\n');
	printf("%d\n", 'A');

	putchar(0b1000001);
	putchar('\n');
	printf("%d\n", 0b1000001);

	putchar(0101);
	putchar('\n');
	printf("%d\n", 0101);

	putchar(0x41);
	putchar('\n');
	printf("%d\n", 0x41);

	exit(EXIT_SUCCESS);
}
