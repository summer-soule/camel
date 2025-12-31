/*
 *
 * Project 14.
 *
 * Task:
 *		Modify Programming Project 15 from Chatper 8 so that the program
 *		prompts the user to enter the name of a file containing
 *		the message to be encrypted:
 *
 *		Enter name of file to be encrypted: message.txt
 *		Enter shift amount (1-25): 3
 *
 *		The program then writes the encrypted message to a file with
 *		the same name but an added extension of .enc. In this example,
 *		the original file name is message.txt, so the encrypted message
 *		will be stored in a file named message.txt.enc. There's no
 *		limit on the size of the file to be encrypted or on the
 *		length of each line in the file.
 *
 * Date: 2025-12-31
 * Time: 09:08 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <linux/limits.h>
#include <string.h>
#include <ctype.h>

#define INPUT_MAX	80

int main(void) {
	FILE *fsrc, *fdst;
	char fsrcfile[PATH_MAX];
	char fdstfile[PATH_MAX];
	char ch;

	char input[INPUT_MAX] = {0};
	int shift;
	int i;

	printf("Enter name of file to be encrypted: ");
	scanf("%s", fsrcfile);

	strcpy(fdstfile, fsrcfile);
	strcat(fdstfile, ".enc");


    if ((fsrc = fopen(fsrcfile, "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", fsrcfile);
		exit(EXIT_FAILURE);
    }

	if ((fdst = fopen(fdstfile, "w+")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", fdstfile);
		exit(EXIT_FAILURE);
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	while ((ch = fgetc(fsrc)) != EOF) {
		if (isupper(ch)) {
			fputc(((ch - 'A') + shift) % 26 + 'A', fdst);
		} else if (islower(ch)) {
			fputc(((ch - 'a') + shift) % 26 + 'a', fdst);
		} else if (isdigit(ch)) {
			fputc(((ch - '0') + shift) % 10 + '0', fdst);
		} else
			fputc(ch, fdst);
	}

	fclose(fsrc);
	fclose(fdst);

	exit(EXIT_SUCCESS);
}
