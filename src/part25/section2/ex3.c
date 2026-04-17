/*
 *
 * Task:
 *		One of the useful properties of UTF-8 is that no sequence
 *		of bytes within a multibyte character can possibly
 *		represent another valid multibyte character. Does the Shift-JIS
 *		encoding for kanji (discussed in Exercise 2) have this property?
 *
 * Date: 2026-04-15
 * Time: 08:07 PM
 *
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iconv.h>
#include <errno.h>

int main(void) {
	unsigned char sjis_str[] = {0x96, 0x7B, 0x93, 0x5A, 0x00};
	size_t in_len = strlen((char*)sjis_str);
	size_t out_len = in_len * 4;
	char *utf8_str = malloc(out_len + 1);
	if (!utf8_str) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	iconv_t cd = iconv_open("UTF-8", "SHIFT-JIS");
	if (cd == (iconv_t)-1) {
		perror("iconv_open");
		free(utf8_str);
		exit(EXIT_FAILURE);
    }

	char *in_ptr = (char*)sjis_str;
	char *out_ptr = utf8_str;
	size_t in_bytes_left = in_len;
	size_t out_bytes_left = out_len;

    if (iconv(cd, &in_ptr, &in_bytes_left, &out_ptr, &out_bytes_left) ==
        (size_t)-1) {
        perror("iconv");
        iconv_close(cd);
        exit(EXIT_FAILURE);
    }

    *out_ptr = '\0';
    iconv_close(cd);

	printf("Kanji string (via iconv): %s\n", utf8_str);

    unsigned char wo1byte[] = { 0x7B, 0x5A, 0x00 };
	printf("Without first byte string: %s\n", wo1byte);

	printf("Shift-JIS encoding doesn't have this property.\n");

    free(utf8_str);
    exit(EXIT_SUCCESS);
}
