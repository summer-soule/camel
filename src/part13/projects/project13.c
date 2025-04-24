/*
 *
 * Project 13.
 *
 * Task: Modify Programming Project 15 from Chapter 8 so that it includes the
 * following function:
 *
 * 	void encrypt(char *message, int shift);
 *
 * The function expects message to point to a string containing the message
 * to be encrypted; shift represents the amount by which each letter in the
 * message is to be shifted.
 *
 * Date: 2025-04-24
 * Time: 06:07 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define INPUT_MAX	80

void encrypt(char *message, int shift);

int main(void) {
	char input[INPUT_MAX];
	int shift;

	printf("Enter message to be encrypted: ");
	fgets(input, INPUT_MAX, stdin);

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	printf("Encrypted message: ");

	encrypt(input, shift);

	printf("%s", input);

	exit(EXIT_SUCCESS);
}

void encrypt(char *message, int shift)
{
	while (*message) {
		if (isupper(*message)) {
			*message = ((*message - 'A') + shift) % 26 + 'A';
			message++;
		}
		if (islower(*message)) {
			*message = ((*message - 'a') + shift) % 26 + 'a';
			message++;
		}
		else
			message++;
	}
}
