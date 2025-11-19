/*
 *
 * Task:
 *		Write macros named GET_RED, GET_GREEN, and GET_BLUE that, when
 *		given a color as an argument (see Exercise 4), return its 8-bit
 *		red, green, and blue intensities.
 *
 * Date: 2025-11-19
 * Time: 09:22 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MK_COLOR(r,g,b) ((long) (b) << 16 | (g) << 8 | (r))

#define GET_RED(x)   ((unsigned char) ((x) & ~0x08))
#define GET_GREEN(x) ((unsigned char) ((x) >> 8) & ~(0x08 << 8))
#define GET_BLUE(x)  ((unsigned char) ((x) >> 16))

int main(void) {
	long color = MK_COLOR(32, 64, 128);

    printf("RED: %d\n", GET_RED(color));
    printf("GREEN: %d\n", GET_GREEN(color));
    printf("BLUE: %d\n", GET_BLUE(color));

	exit(EXIT_SUCCESS);
}
