/*
 *
 * Task:
 *		Show how each of the following numbers will look if displayed
 *		by printf with %#012.5g as the conversion specification:
 *
 *		(a) 83.7361
 *		(b) 29748.6607
 *		(c) 1054932234.0
 *		(d) 0.0000235218
 *
 * Date: 2025-12-09
 * Time: 10:19 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("(a) %#012.5g\n", 83.7361);
    printf("(b) %#012.5g\n", 29748.6607);
    printf("(c) %#012.5g\n", 1054932234.0);
    printf("(d) %#012.5g\n", 0.0000235218);

	exit(EXIT_SUCCESS);
}
