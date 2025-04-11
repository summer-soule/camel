/*
 *
 * Project 2.
 *
 * Task:
 * (a) Write a program that reads a message, then checks whether it's a
 * palindrome (the letters in the message are the same from left to right as
 * from right to left):
 *
 * Enter a message: He lived as a devil, eh?
 * Palindrome
 *
 * 	Enter a message: Madam, I am Adam.
 * 	Not a palindrome
 *
 * Ignore all characters that aren't letters. Use integer variables to keep
 * track of positions in the array.
 *
 * (b) Revise the program to use pointers instead of integers to keep track of
 * positions in the array.
 *
 * Date: 2025-04-11
 * Time: 02:08 PM
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
	char *ptr_left = &message[0];
	char *ptr_right = &message[0];
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
