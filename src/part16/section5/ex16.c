/*
 *
 * Task:
 *		Which of the following statements about enumeration
 *		constants are ture?
 *
 *		(a)	An enumeration constant may represent any integer
 *			specified by the programmer.
 *		(b)	Enumeration constants have exactly the same properties
 *			as constants created using #define.
 *		(c)	Enumeration constants have the values 0, 1, 2, ... by default.
 *		(d)	All constants in an enumeration must have different values.
 *		(e)	Enumeration constants may be used as integers in expressions.
 *
 * Answer:
 *		valid: (a), (c), (e)
 *		invalid:
 *			(b) not affected by preprocessor
 *			(d) values can be any like for macros
 *
 * Date: 2025-05-19
 * Time: 01:19 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

enum test {
	FIRST_NOT_ZERO = 5,
	SECOND_DEFAULT_ONE
};

int main(void) {
	printf("3+FIRST_NOT_ZERO = %d\n", 3 + FIRST_NOT_ZERO);
	
	exit(EXIT_SUCCESS);
}
