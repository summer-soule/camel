/*
 *
 * Task:
 *		When stored according to the IEEE floating-point standard,
 *		a float value consists of a 1-bit sign (the leftmost --
 *		or most significant -- bit), an 8-bit exponent, and a
 *		23-bit fraction, in that order. Design a structure type
 *		that occupies 32 bits, with bit-field members corresponding
 *		to the sign, exponent, and fraction. Declare the bit-fields
 *		to have type unsigned int. Check the manual for your compiler
 *		to determine the order of the bit-fields.
 *
 * Date: 2025-11-20
 * Time: 12:18 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct fpoint {
    unsigned int frac : 23;
    unsigned int exp : 8;
	unsigned int sign : 1;
};

int main(void) {
    struct fpoint test;

    test.exp = ~0;
    test.frac = ~0;
    test.sign = ~0;

    printf("exp: %d\n", test.exp);
    printf("frac: %d\n", test.frac);
    printf("sign: %d\n", test.sign);

	exit(EXIT_SUCCESS);
}
