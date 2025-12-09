/*
 *
 * Task:
 *		Is there any difference between the printf conversion specifications
 *		%.4d and %04d? If so, explain what it is.
 *
 * Answer:
 *		First conversion specifying the precision of 4 numbers and optional
 *		sign character in front of them resulting 4 characters without sign
 *		and 5 characters with it.
 *
 *		Second conversion specifying at least 4 characters even with sign
 *		resulting 4 characters with or without the sign and number less
 *		than 4 characters long.
 *
 * Date: 2025-12-09
 * Time: 10:23 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define EXAMPLE -5

int main(void) {
	printf("%%.4d: %.4d\n", EXAMPLE);
    printf("%%04d: %04d\n", EXAMPLE);

	exit(EXIT_SUCCESS);
}
