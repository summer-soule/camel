/*
 *
 * Task:
 *		True or false: If x is a structure and a is a member
 *		of that structure, then (&x)->a is the same as x.a.
 *		Justify your answer.
 *
 * Answer:
 *		True. -> equals to dereference of structure with . operator
 *		to its member. It means that (&z)->a transforms to *(&z).a which
 *		same as z.a.
 *
 * Date: 2025-06-05
 * Time: 11:01 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct x {
	int a;
};

int main(void) {
	struct x z;
	(&z)->a = 2;
	z.a = 3;

	exit(EXIT_SUCCESS);
}
