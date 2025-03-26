/*
 *
 * Project 15.
 *
 * Task: One of the oldest known encryption techniques is the Caesar cipher,
 * attributed to Julius Caesar. It involves replacing each letter in a message
 * with another letter that is a fixed number of positions later in the
 * alphabet. (If the replacement would go past the letter Z, the cipher
 * "wraps around" to the beginnning of the alphabet. For example, if each
 * letter is replaced by the letter two positions after it, then Y would be
 * replaced by A, nad Z would be replaced by B.) Write a program that encrypts
 * a message using a Caesar cipher. The user will enter the message to be
 * encrypted and the shift amount (the number of positions by which letters
 * should be shifted):
 *
 * Enter message to be encrypted: Go ahead, make my day.
 * Enter shift amount (1-25): 3
 * Encrypted message: Jr dkhdg, pdnh pb gdb.
 *
 * Notice that the program can decrypt a message if the user enters 26 minus
 * the original key:
 *
 * Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
 * Enter shift amount (1-25): 23
 * Encrypted message: Go ahead, make my day.
 *
 * You may assume that the message does not exceed 80 characters. Characters
 * other than letters should be left unchanged. Lower-case letters remain
 * lower-case when encrypted, and upper-case letters remain upper-case.
 *
 * Hint: To handle the wrap-around problem, use the expression
 * ((ch - 'A') + n) % 26 + 'A' to calculate the encrypted version of upper-case
 * letter, where ch stores the letter and n stores the shift amount.
 * (You'll need a similar expression for lower-case letters.)
 *
 * Date: 2025-03-25
 * Time: 11:52 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define INPUT_MAX	80

int main(void) {
	char input[INPUT_MAX] = {0};
	int shift;
	int i;

	printf("Enter message to be encrypted: ");
	fgets(input, INPUT_MAX, stdin);

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	printf("Encrypted message: ");

	i = 0;
	while (input[i] != '\0') {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			putchar(((input[i] - 'A') + shift) % 26 + 'A');
		}
		else if (input[i] >= 'a' && input[i] <= 'z') {
			putchar(((input[i] - 'a') + shift) % 26 + 'a');
		}
		else
			putchar(input[i]);
		i++;
	}

	exit(EXIT_SUCCESS);
}
