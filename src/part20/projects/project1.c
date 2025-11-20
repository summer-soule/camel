/*
 *
 * Project 1.
 *
 * Task:
 *		Design a union that makes it possible to view a 32-bit value
 *		as either a float or the structure described in Exercise 14.
 *		Write a program that stores 1 in the structure's sign field,
 *		128 in the exponent field, and 0 in the fraction field, then
 *		prints the float value stored in the union. (The answer should
 *		be -2.0 if you've set up the bit-fields correctly.)
 *
 * Date: 2025-11-20
 * Time: 01:37 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

union {
	float value;
        struct fpoint_v {
			unsigned int frac : 23;
            unsigned int exp : 8;
            unsigned int sign : 1;
		} fpoint;
} fp;

int main(void) {
    fp.fpoint.sign = 1;
    fp.fpoint.exp = 128;
    fp.fpoint.frac = 0;

	printf("fp: %.1f\n", fp.value);

	exit(EXIT_SUCCESS);
}
