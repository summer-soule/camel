/* 
 *
 * Task: Write a single expression whose value is either -1, 0, or +1,
 * depenging on whether i is less than, equal to, or greater than j,
 * respectively.
 *
 * Date: 2025-02-07
 * Time: 13:18 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	printf("Enter i: ");
	scanf("%d", &i);
	printf("Enter j: ");
	scanf("%d", &j);

	printf("Result: %d\n", (i > j) - (i < j));

	exit(EXIT_SUCCESS);
}
