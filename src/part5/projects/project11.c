/* 
 *
 * Project 11.
 *
 * Task: Write a program that asks the user for a two-digit number, then prints
 * the English word for the number:
 *
 * Enter a two-digit number: 45
 * You entered the number forty-five.
 *
 * Hint: Break the number into two digits. Use one switch statement to print
 * the word for the first digit ("twenty", "thirty" and so forth). Use a second
 * switch statement to print the word for the second digit. Don't forget that
 * the numbers between 11 and 19 require special treatment.
 *
 * Date: 2025-02-11
 * Time: 08:24 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int first, second = 0;
	int input = 0;

	printf("Enter a two-digit number: ");
	scanf("%d", &input);

	printf("You entered the number ");

	first = input / 10;
	second = input % 10;

	if (input >= 10 && input < 100) {
		switch (first) {
			case 1:
				switch(second) {
					case 0:
						printf("ten.\n");
						break;
					case 1:
						printf("eleven.\n");
						break;
					case 2:
						printf("twelve.\n");
						break;
					case 3:
						printf("thirteen.\n");
						break;
					case 4:
						printf("fourteen.\n");
						break;
					case 5:
						printf("fifteen.\n");
						break;
					case 6:
						printf("sixteen.\n");
						break;
					case 7:
						printf("seventeen.\n");
						break;
					case 8:
						printf("eighteen.\n");
						break;
					case 9:
						printf("nineteen.\n");
						break;
				}
				break;
			case 2:
				printf("twenty");
				switch (second) {
					case 1:
						printf("-one.\n");
						break;
					case 2:
						printf("-two.\n");
						break;
					case 3:
						printf("-three.\n");
						break;
					case 4:
						printf("-four.\n");
						break;
					case 5:
						printf("-five.\n");
						break;
					case 6:
						printf("-six.\n");
						break;
					case 7:
						printf("-seven.\n");
						break;
					case 8:
						printf("-eight.\n");
						break;
					case 9:
						printf("-nine.\n");
						break;
					default:
						printf(".\n");
						break;
				}
				break;
			case 3:
				printf("thirty");
				switch (second) {
					case 1:
						printf("-one.\n");
						break;
					case 2:
						printf("-two.\n");
						break;
					case 3:
						printf("-three.\n");
						break;
					case 4:
						printf("-four.\n");
						break;
					case 5:
						printf("-five.\n");
						break;
					case 6:
						printf("-six.\n");
						break;
					case 7:
						printf("-seven.\n");
						break;
					case 8:
						printf("-eight.\n");
						break;
					case 9:
						printf("-nine.\n");
						break;
					default:
						printf(".\n");
						break;
				}
				break;
			case 4:
				printf("forty");
				switch (second) {
					case 1:
						printf("-one.\n");
						break;
					case 2:
						printf("-two.\n");
						break;
					case 3:
						printf("-three.\n");
						break;
					case 4:
						printf("-four.\n");
						break;
					case 5:
						printf("-five.\n");
						break;
					case 6:
						printf("-six.\n");
						break;
					case 7:
						printf("-seven.\n");
						break;
					case 8:
						printf("-eight.\n");
						break;
					case 9:
						printf("-nine.\n");
						break;
					default:
						printf(".\n");
						break;
				}
				break;
			case 5:
				printf("filthy");
				switch (second) {
					case 1:
						printf("-frank.\n");
						break;
					case 2:
						printf("-frank.\n");
						break;
					case 3:
						printf("-frank.\n");
						break;
					case 4:
						printf("-frank.\n");
						break;
					case 5:
						printf("-frank.\n");
						break;
					case 6:
						printf("-frank.\n");
						break;
					case 7:
						printf("-frank.\n");
						break;
					case 8:
						printf("-frank.\n");
						break;
					case 9:
						printf("-frank.\n");
						break;
					default:
						printf(".\n");
						break;
				}
				break;
			case 6:
				printf("sixty");
				switch (second) {
					case 1:
						printf("-one.\n");
						break;
					case 2:
						printf("-two.\n");
						break;
					case 3:
						printf("-three.\n");
						break;
					case 4:
						printf("-four.\n");
						break;
					case 5:
						printf("-five.\n");
						break;
					case 6:
						printf("-six.\n");
						break;
					case 7:
						printf("-seven.\n");
						break;
					case 8:
						printf("-eight.\n");
						break;
					case 9:
						printf("-nine.\n");
						break;
					default:
						printf(".\n");
						break;
				}
				break;
			case 7:
				printf("seventy");
				switch (second) {
					case 1:
						printf("-one.\n");
						break;
					case 2:
						printf("-two.\n");
						break;
					case 3:
						printf("-three.\n");
						break;
					case 4:
						printf("-four.\n");
						break;
					case 5:
						printf("-five.\n");
						break;
					case 6:
						printf("-six.\n");
						break;
					case 7:
						printf("-seven.\n");
						break;
					case 8:
						printf("-eight.\n");
						break;
					case 9:
						printf("-nine.\n");
						break;
					default:
						printf(".\n");
						break;
				}
				break;
			case 8:
				printf("eighty");
				switch (second) {
					case 1:
						printf("-one.\n");
						break;
					case 2:
						printf("-two.\n");
						break;
					case 3:
						printf("-three.\n");
						break;
					case 4:
						printf("-four.\n");
						break;
					case 5:
						printf("-five.\n");
						break;
					case 6:
						printf("-six.\n");
						break;
					case 7:
						printf("-seven.\n");
						break;
					case 8:
						printf("-eight.\n");
						break;
					case 9:
						printf("-nine.\n");
						break;
					default:
						printf(".\n");
						break;
				}
				break;
			case 9:
				printf("ninety");
				switch (second) {
					case 1:
						printf("-one.\n");
						break;
					case 2:
						printf("-two.\n");
						break;
					case 3:
						printf("-three.\n");
						break;
					case 4:
						printf("-four.\n");
						break;
					case 5:
						printf("-five.\n");
						break;
					case 6:
						printf("-six.\n");
						break;
					case 7:
						printf("-seven.\n");
						break;
					case 8:
						printf("-eight.\n");
						break;
					case 9:
						printf("-nine.\n");
						break;
					default:
						printf(".\n");
						break;
			}
		}
	}
	else
		printf("Error: input is not valid!\n");
					

	exit(EXIT_SUCCESS);
}
