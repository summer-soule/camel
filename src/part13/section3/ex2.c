/*
 *
 * Task: Suppose that p has been declared as follows:
 *
 * 	char *p = "abc";
 *
 * Which of the following function calls are legal? Show the output produced
 * by each legal call, and explain why the others are illegal.
 *
 * 	(a) putchar(p);		// putchar expects int type, but * provided
 * 	(b) putchar(*p);
 * 	(c) puts(p);
 * 	(d) puts(*p);		// puts expects * type, but int provided
 *
 * 	Output:
 *
 * aabc
 *
 * 	Explanation:
 *
 * 	first char 'a' printed by putchar(*p) - means print char at [0] from
 * 	string "abc"
 *
 * 	next 'abc' is the whole string "abc" printed from [0] to last char 
 * 	before '\0' occur
 *
 * Date: 2025-04-16
 * Time: 07:19 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *p = "abc";

//	putchar(p);
	putchar(*p);
	puts(p);
//	puts(*p);

	exit(EXIT_SUCCESS);
}
