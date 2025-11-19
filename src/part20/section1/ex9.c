/*
 *
 * Task:
 *		(a) Write the following function:
 *
 *		int count_ones(unsigned char ch);
 *
 *		count_ones should return the number of 1 bits in ch.
 *
 *		(b) Write the function in part (a) without using a loop.
 *
 * Date: 2025-11-20
 * Time: 12:38 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int count_ones_a(unsigned char ch);
int count_ones_b(unsigned char ch);

int main(void) {
	printf("(a) 0x7F: %d\n", count_ones_a(127));
	printf("(b) 0x7F: %d\n", count_ones_b(127));

	exit(EXIT_SUCCESS);
}

int count_ones_a(unsigned char ch) {
	int ones = 0;
    for (int i = 0; i < UCHAR_MAX / 8; i++)
		if ((ch >> i) & 0x1)
			ones++;
    return ones;
}

int count_ones_b(unsigned char ch) {
    if (ch == 0)
        return 0;
    return count_ones_b(ch & (ch - 1)) + 1;
}
