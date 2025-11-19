/*
 *
 * Task:
 *		Describe a simple way to "toggle" a bit (change it from 0 to 1 or
 *		from 1 to 0). Illustrate the technique by writing a statement
 *		that toggles bit 4 of the variable i.
 *
 * Date: 2025-11-19
 * Time: 04:09 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned char bit_toggle(unsigned char, int);

int main(void) {
	unsigned char i = UCHAR_MAX;
    printf("before toggling: %d\n", i);

    printf("after toggling the 4th bit: %d\n", bit_toggle(i, 4));

	exit(EXIT_SUCCESS);
}

unsigned char bit_toggle(unsigned char input, int pos) {
	return input ^ (0x1 << (pos-1));
}
