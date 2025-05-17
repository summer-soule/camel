/*
 *
 * Task:
 *		Let color be the following structure:
 *
 *		struct color {
 *			int red;
 *			int green;
 *			int blue;
 *		};
 *
 *		(a)	Write a declaration for a const variable named MAGENTA
 *			of type struct color whose members have the values
 *			255, 0, and 255, respectively.
 *
 *		(b)	(C99) Repeat part (a), but use a designated initializer
 *			that doesn't specify the value of green, allowing
 *			it to default to 0.
 *
 * Date: 2025-05-17
 * Time: 01:55 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct color {
	int red;
    int green;
    int blue;
};

int main(void) {
    const struct color MAGENTA = {.red = 255, .blue = 255};

    printf("r: %d\ng: %d\nb: %d\n",
           MAGENTA.red,
           MAGENTA.green,
           MAGENTA.blue);
    
	exit(EXIT_SUCCESS);
}
