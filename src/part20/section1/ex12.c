/*
 *
 * Task:
 *		The following function supposedly combines two bytes to form
 *		an unsigned short integer. Explain why the function doesn't
 *		work and show how to fix it.
 *
 *		unsigned short create_short(unsigned char high_byte,
 *									unsigned char low_byte)
 *		{
 *			return high_byte << 8 + low_byte;
 *		}
 *
 * Date: 2025-11-20
 * Time: 12:04 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

unsigned short create_short(unsigned char, unsigned char);

int main(void) {
	unsigned char high_byte = 5, low_byte = 2;

    printf("new value: %hu\n", create_short(high_byte, low_byte));

	exit(EXIT_SUCCESS);
}

// operator '<<' has lower precedence than '+'; '+' will be evaluated firts
// add braces to high_byte << 8
unsigned short create_short(unsigned char high_byte, unsigned char low_byte) {
	return (high_byte << 8) + low_byte;
}
