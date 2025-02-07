/* 
 *
 * Q: What does the following statement print if i has the value 17?
 * What does it print if i has the value -17?
 *
 * printf("%d\n", i >= 0 ? i : -i);
 *
 * A: if n = 17, then output will be "17". if n = -17, then output will be "17"
 * In other words, input value will be converted to its absolute value on
 * output.
 *
 * |17| = 17
 * |-17| = 17
 *
 * Date: 2025-02-07
 * Time: 13:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	printf("Enter n: ");
	scanf("%d", &i);

	printf("%d\n", i >= 0 ? i : -i);

	exit(EXIT_SUCCESS);
}
