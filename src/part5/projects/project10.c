/* 
 *
 * Project 10.
 *
 * Task: Using the switch statement, write a program that converts a numerical
 * grade into a letter grade:
 *
 * Enter numerical grade: 84
 * Letter grade: B
 *
 * Use the following scale: 
 * A = 90-100
 * B = 80-89
 * C = 70-79
 * D = 60-69
 * F = 0-59
 *
 * Print an error message if the grade is larger than 100 or less than 0.
 *
 * Hint: Break the grade into two digits, then use a switch statement to test
 * the ten's digit.
 *
 * Date: 2025-02-10
 * Time: 14:17 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int grade = 0;
	int label = 0;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade <= 100 && grade >= 0) {
		grade /= 10;
		switch (grade) {
			case 9: case 10:
				label = 'A';
				break;
			case 8:
				label = 'B';
				break;
			case 7:
				label = 'C';
				break;
			case 6:
				label = 'D';
				break;
			case 5: case 4: case 3: case 2: case 1: case 0:
				label = 'F';
				break;
		}
		printf("Letter grade: %c\n", label);
	}
	else
		printf("Error: Input value is out of scope!\n");

	exit(EXIT_SUCCESS);
}
