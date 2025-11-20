/*
 *
 * Task:
 *		Write the following functions:
 *
 *		unsigned int reverse_bits(unsigned int n);
 *
 *		reverse_bits should return an unsigned integer whose bits are
 *		the same as those in n but in reverse order.
 *
 * Date: 2025-11-20
 * Time: 01:16 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define UINT_BITS (sizeof(int) * 8 - 1)

unsigned int reverse_bits(unsigned int n);

int main(void) {
	unsigned int input;

	printf("Enter number: ");
    scanf("%u", &input);

    printf("\nConverted number: %u\n", reverse_bits(input));

	exit(EXIT_SUCCESS);
}

unsigned int reverse_bits(unsigned int n) {
    unsigned int tmp = 0;

	for (int i = 0; i <= UINT_BITS; i++) {
		tmp |= ((n >> i) & 0x1) << (UINT_BITS - i);
    }

    return tmp;
}
