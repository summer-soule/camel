/*
 *
 * Task:
 *		The islower function, which belongs to <ctype.h>, tests whether
 *		a character is a lower-case letter. Why would the following macro
 *		version of islower not be legal, according to the C standard?
 *		(You may assume that the character set is ASCII.)
 *
 *		#define islower(c) ((c) >= 'a' && (c) <= 'z')
 *
 * Answer:
 *		islower already defined as macro in ctype.h
 *		to fix it programmer should undef function and then
 *		define his own macro
 *
 * Date: 2025-11-24
 * Time: 04:54 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#undef islower
#define islower(c) ((c) >= 'a' && (c) <= 'z')

int main(void) {
	printf("'a' is lower : %d\n", islower('a'));

	exit(EXIT_SUCCESS);
}
