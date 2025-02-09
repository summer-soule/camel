/* 
 *
 * Project 7.
 *
 * Task: Write a program that finds the largest and smallest of four integers
 * entered by the user:
 *
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest: 10
 *
 * Use as few if statements as possible.
 *
 * Hint: Four if statements are sufficient.
 *
 * Date: 2025-02-09
 * Time: 07:30 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i1, i2, i3, i4;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	/* is it 3 for largest and 3 for smallest if statements or only 3? */
	/* idk */
	printf("Largest: %d\n", 	((i1 + i2) - (i3 + i4)) > 0 ? 
								((i1 - i2 > 0) ? i1 : i2) : 
								((i3 - i4 > 0) ? i3 : i4));

	printf("Smallest: %d\n", 	((i1 + i2) - (i3 + i4)) < 0 ? 
								((i1 - i2 < 0) ? i1 : i2) : 
								((i3 - i4 < 0) ? i3 : i4));

	exit(EXIT_SUCCESS);
}
