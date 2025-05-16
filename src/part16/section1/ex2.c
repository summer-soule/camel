/*
 *
 * Task:
 *		(a) Declare structure variables named c1, c2, and c3, each
 *			having members real and imaginary of type double.
 *
 *		(b)	Modify the declaration in part (a) so that c1's
 *			members initially have the values 0.0 and 1.0,
 *			while c2's members are 1.0 and 0.0 initially.
 *			(c3 is not initialized.)
 *
 *		(c)	Write statements that copy members of c2 into c1.
 *			Can this be done in one statement, or does it
 *			require two?
 *
 *		(d)	Write statements that add the corresponding members
 *			of c1 and c2, storing the result in c3.
 *
 * Date: 2025-05-16
 * Time: 02:47 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define PRINT_STRUCT(task, member1, member2) \
					(printf(#task #member1 " = %f\n" \
					#task #member2 " = %f\n", member1, member2))

struct {
	double real;
	double imaginary;
} c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

int main(void) {

	PRINT_STRUCT((b), c1.real, c1.imaginary);
	PRINT_STRUCT((b), c2.real, c2.imaginary);

    c1 = c2;
    putchar('\n');

	PRINT_STRUCT((c), c1.real, c1.imaginary);
	PRINT_STRUCT((c), c2.real, c2.imaginary);

    putchar('\n');
        
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    
	PRINT_STRUCT((d), c3.real, c3.imaginary);
    
	exit(EXIT_SUCCESS);
}
