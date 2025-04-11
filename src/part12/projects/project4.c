/*
 *
 * Project 4.
 *
 * Task: Simplify Programming Project 2(b) by taking advantage of the fact that
 * an array name can be used as a pointer.
 *
 * Date: 2025-04-11
 * Time: 05:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define MSG_L	50

char *rread(char a[], int n, char *pos);
char *lread(char a[], int n, char *pos);

int main(void) {
	char message[MSG_L];
	char *ptr_left = message;
	char *ptr_right = message;
	bool palindrome = true;

	printf("Enter a message: ");
	fgets(message, MSG_L, stdin);

	while (*(ptr_right+1) != '\0') ptr_right++;

	while (ptr_left < message+(MSG_L-1) && ptr_right >= message) {

		while (!isalpha(*ptr_right)) ptr_right--;
		while (!isalpha(*ptr_left)) ptr_left++;

		if (toupper(*ptr_right) != toupper(*ptr_left)){
			palindrome = false;
			break;
		}
		ptr_right--;
		ptr_left++;
	}

	if (palindrome)
		printf("\nPalindrome\n");
	else
		printf("\nNot a palindrome\n");

	exit(EXIT_SUCCESS);
}
