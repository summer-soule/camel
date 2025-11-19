/*
 *
 * Task:
 *		Write the following functions:
 *
 *		unsigned int rotate_left(unsigned int i, int n);
 *		unsigned int rotate_right(unsigned int i, int n);
 *
 *		rotate_left should return the result of shifting the bits in i
 *		to the left by n places, with the bits that were "shifted off"
 *		moved to the right end of i. (For example, the call
 *		rotate_left(0x12345678, 4) should return 0x23456781 if integers
 *		are 32 bits long.) rotate_right is similar, but it should
 *		"rotate" bits to the right instead of the left.
 *
 * Date: 2025-11-19
 * Time: 11:09 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void) {
	unsigned int input;

	printf("Enter a hexadecimal number: ");
	scanf("%x", &input);

    printf("rotate %x to right %d places: %08x\n", input, 4,
           rotate_right(input, 4));
    printf("rotate %x to left %d places: %08x\n", input, 4,
           rotate_left(input, 4));

	exit(EXIT_SUCCESS);
}

unsigned int rotate_left(unsigned int i, int n) {
	return i << n | i >> ((sizeof(int) * 8) - n);
}

unsigned int rotate_right(unsigned int i, int n) {
	return i >> n | i << ((sizeof(int) * 8) - n);
}
