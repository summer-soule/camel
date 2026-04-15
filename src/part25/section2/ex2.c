/*
 *
 * Task:
 *		The Shift-JIS encoding for kanji requires either one or two
 *		bytes per character. If the first byte of a character is
 *		between 0x81 and 0x9f or between 0xe0 and 0xef, a second
 *		byte is required. (Any other byte is treated as a whole
 *		character.) The second byte must be between 0x40 and 0x7e
 *		or between 0x80 and 0xfc. (All ranges are inclusive.)
 *		For each of the following strings, give the value that
 *		the mbcheck function of Section 25.2 will return when
 *		passed that string as its argument, assuming that multibyte
 *		characters are encoded using Shift-JIS in the current locale.
 *
 *		(a) "\x05\x87\x80\x36\x3d\xaa"
 *		(b) "\x20\xe4\x50\x88\x3f"
 *		(c) "\xde\xad\xbe\xef"
 *		(d) "\x8a\x60\x92\x74\x41"
 *
 * Date: 2026-04-14
 * Time: 02:54 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int mbcheck(const char *s);

int main(void) {
	printf("(a): %d\n", mbcheck("\x05\x87\x80\x36\x3d\xaa"));
    printf("(b): %d\n", mbcheck("\x20\xe4\x50\x88\x3f"));
    printf("(c): %d\n", mbcheck("\xde\xad\xbe\xef"));
	printf("(d): %d\n", mbcheck("\x8a\x60\x92\x74\x41"));

	exit(EXIT_SUCCESS);
}

int mbcheck(const char *s) {
	int n;

	for (mblen(NULL, 0); ; s+=n)
        if ((n = mblen(s, MB_CUR_MAX)) <= 0)
			return n;
}
