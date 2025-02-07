/* 
 *
 * Task: The following if statement is unnecessarily complicated. Simplify it
 * as much as possible.
 *
 * Hint: The entire statement can be replaced by a single assignment.
 *
 * if (age >= 13)
 * 		if (age <= 19)
 * 			teenager = true;
 * 		else
 * 			teenager = false;
 * else if (age < 13)
 * 		teenager = false;
 *
 * Date: 2025-02-07
 * Time: 16:10 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	int age, teenager;
	
	printf("Enter age: ");
	scanf("%d", &age);

	printf("Teenager: %d\n", 
			teenager = (age >= 13) && (age <= 19) ? TRUE : FALSE);

	exit(EXIT_SUCCESS);
}
