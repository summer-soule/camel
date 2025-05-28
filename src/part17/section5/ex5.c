/*
 *
 * Task:
 *		Suppose that f and p are declared as follows:
 *
 *		struct {
 *			union {
 *				char a, b;
 *				int c;
 *			} d;
 *			int e[5];
 *		} f, *p = &f;
 *
 *		Which of the following statements are legal?
 *
 *		(a) p->b = ' ';
 *		(b) p->e[3] = 10;
 *		(c) (*p).d.a = '*';
 *		(d) p->d->c = 20;
 *
 * Answer:
 *		legal:		(b), (c)
 *		illegal:	(a) - b is a member of union d
 *						  correct usage will be p->d.b
 *					(d) - c is a member of union d which is
 *						  can be accessed by '.' operator
 *						  correct usage will be p->d.c
 *
 * Date: 2025-05-28
 * Time: 04:15 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct {
	union {
		char a, b;
		int c;
	} d;
	int e[5];
} f, *p = &f;

int main(void) {
	/* p->b = ' '; not legal because b is not a member of p */

	p->e[3] = 10;
	printf("p->e[3]: %d\n", p->e[3]);

	(*p).d.a = '*';
	printf("(*p).d.a: %c\n", (*p).d.a);

	/* p->d->c = 20; not legal because a is a member of union and not a
	 * struct */

	exit(EXIT_SUCCESS);
}
