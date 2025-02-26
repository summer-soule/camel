/* 
 *
 * Project 10.
 *
 * Task: Write a program that counts the number of vowels (a, e, i, o, and u)
 * in a sentence:
 *
 * Enter a sentence: And that's the way it is.
 * Your sentence contains 6 vowels.
 *
 * Date: 2025-02-26
 * Time: 11:07 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) 
{
	char ch;
	int vowels = 0;

	printf("Enter a sentence: ");

	while((ch = getchar()) != '\n') {
		switch(toupper(ch)) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				vowels++;
				break;
		}
	}

	printf("Your sentence contains %d vowels.\n", vowels);

	exit(EXIT_SUCCESS);
}
