/* 
 *
 * Task: We discussed using the expression sizeof(a) / sizeof(a[0]) to
 * calculate the number of elements in an array. The expression 
 * sizeof(a) / sizeof(t), where t is the type of a's elements, would also work,
 * but it's considered an inferior technique. Why?
 *
 * A: If array's type is not set by a macro, then we must change its type in
 * sizeof(t) respectively. Also, it is harder to read source code - we need
 * to find the declaration of array and check its type.
 *
 * Date: 2025-03-16
 * Time: 10:22 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("We discussed using the expression sizeof(a) / sizeof (a[0])\n\
to calculate the number of elements in an array.\n\
The expression sizeof(a) / sizeof(t), where t is the type of a's elements,\n\
would also work, but it's considered an inferior technique. Why?\n\n");

	printf("If array's type is not set by a macro,\
then we must change its type in\n\
sizeof(t) respectively. Also, it is \
harder to read source code - we need\n\
to find the declaration of array and check its type.\n");

	exit(EXIT_SUCCESS);
}
