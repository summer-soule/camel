/*
 *
 * Task:
 *		(a) Add a peek function to stackADT.c. This function will have
 *			a parameter of type Stack. When called, it returns the top
 *			item on the stack but doesn't modify the stack.
 *
 *		(b) Repeat part (a), modifying stackADT2.c this time.
 *
 *		(c) Repeat part (a), modifying stackADT3.c this time.
 *
 * Date: 2025-11-04
 * Time: 01:34 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "stackADT_abc.h"

int main(void) {

	example_clean();
    example_a();
    example_b();
    example_c();

	exit(EXIT_SUCCESS);
}
