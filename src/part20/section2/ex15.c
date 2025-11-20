/*
 *
 * Task:
 *		(a) Assume that the variable s has been declared as follows:
 *
 *		struct {
 *			int flag : 1;
 *		} s;
 *
 *		With some compilers, executing the following statements
 *		causes 1 to be displayed, but with other compilers, the output
 *		is -1. Explain the reason for this behavior.
 *
 *		s.flag = 1;
 *		printf("%d\n", s.flag);
 *
 *		(b) How can this problem be avoided?
 *
 * Date: 2025-11-20
 * Time: 12:45 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

// (a) some compilers may interpret flag value as a sign bit
struct {
	int flag : 1;
} s_a;

// (b) specify unsigned type to fix it
struct {
	unsigned int flag : 1;
} s_b;



int main(void) {
    s_a.flag = 1;
    s_b.flag = 1;

    printf("s_a: %d\n", s_a.flag);
    printf("s_b: %d\n", s_b.flag);

	exit(EXIT_SUCCESS);
}
