/*
 *
 * Project 6.
 *
 * Task:
 *		Write a program that displays the contents of a file as bytes
 *		and as characters. Have the user specify the file name on the
 *		command line. Here's what the output will look like when the
 *		program is used to display the pun.c file of Section 2.1:
 *
 *		Offset              Bytes              Characters
 *		------  -----------------------------  ----------
 *		     0  23 69 6E 63 6C 75 64 65 20 4C  #include <
 *		    10  73 74 64 69 6F 2E 68 3E 0D 0A  stdio.h>..
 *		    20  0D 0A 69 6E 74 20 6D 61 69 6E  ..int main
 *		    30  28 76 6F 69 64 29 0D 0A 7B 0D  (void)..{.
 *		    40  0A 20 20 70 72 69 6E 74 66 28  .  printf(
 *		    50  22 54 6F 20 43 2C 20 6F 72 20  "To C, or
 *		    60  6E 6F 74 20 74 6F 20 43 3A 20  not to C:
 *		    70  74 68 61 74 20 69 73 20 74 68  that is th
 *		    80  65 20 71 75 65 73 74 69 6F 6E  e question
 *		    90  2E 5C 6E 22 29 3B 0D 0A 20 20  .\n");..
 *		   100  72 65 74 75 72 6E 20 30 3B 0D  return 0;.
 *		   110  0A 7D                          .}
 *
 *		Each line shows 10 bytes from the file, as hexadecimal numbers
 *		and as characters. The number in the Offset column indicates the
 *		position within the file of the first byte on the line. Only
 *		printing characters (as determined by the isprint function) are
 *		displayed; other characters are shown as periods. Note that the
 *		appearance of a text file may vary, depending on the character
 *		set and the operating system. The example above assumes that
 *		pun.c is a Windows file, so 0D and 0A bytes (the ASCII
 *		carriage-return and line-feed characters) appear at the end of
 *		each line.
 *
 *		Hint: Be sure to open the file in "rb" mode.
 *
 * Date: 2025-12-20
 * Time: 04:39 AM
 *
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define OBCSTR_L 100

bool obcstr_form(FILE *, char *, long offset);

int main(int argc, char *argv[]) {
	FILE *fp;
	char line[OBCSTR_L];

	if (argc != 2) {
		fprintf(stderr, "usage: project6 FILENAME\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

    printf("%s%19s%24s\n", "Offset", "Bytes", "Characters");
    printf("------  -----------------------------  ----------\n");

	long k = 0;
	bool ereached = false;
	while (!ereached) {
		ereached = obcstr_form(fp, line, k);
		printf("%s\n", line);
		k += 10;
	}

    fclose(fp);

	exit(EXIT_SUCCESS);
}

bool obcstr_form(FILE *fp, char *line, long offset) {
	char strbuf[OBCSTR_L];
	unsigned char bytesbuf[12];
	size_t chread = 0;
	int pos = 0;
	int remaining = sizeof(strbuf);

    // move to offset, get data, set booleans
    if (fseek(fp, offset, SEEK_SET) == -1)
		return false;

	chread = fread(bytesbuf, sizeof(char), 10, fp);

    if (chread == 0)
		return true;

	bytesbuf[chread+1] = '\0';

    if (feof(fp))
		return true;

    // form the strbuf buffer

    // add offset
	pos += snprintf(strbuf + pos, remaining - pos, "%6ld  ", offset);

	// add bytes section
	for (int i = 0; i < 10; i++) {
		if (i < chread)
			pos += snprintf(strbuf + pos, remaining - pos, "%02X ", bytesbuf[i]);
		else
			pos += snprintf(strbuf + pos, remaining - pos, "   ");
	}

	// convert nonprinted chars to '.'
	for (int k = 0; bytesbuf[k] != '\0'; k++)
		if (!isprint(bytesbuf[k]))
			bytesbuf[k] = '.';

	// add printed string from strbuf
	snprintf(strbuf + pos, remaining - pos, " %s", bytesbuf);

	// write strbuf to target string
	strcpy(line, strbuf);

	return feof(fp);
}
