/*
 *
 * Task:
 *		Give a C string literal that represents each of the following
 *		phrases. Assume that the characters à, è, é, ê, î, ô, û and ü
 *		are represented by single-byte Latin-1 characters. (You'll
 *		need to look up the Latin-1 code points for these characters.)
 *		For example, the phrase déjà vu could be represented by the
 *		string "d\xe9j\xe0 vu".
 *
 *		(a) Côte d'Azur
 *		(b) crème brûlée
 *		(c) crème fraîche
 *		(d) Fahrvergnügen
 *		(e) tête-à-tête
 *
 * Date: 2026-04-17
 * Time: 03:55 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iconv.h>
#include <string.h>

char *s2utf8(unsigned char *strin, const char *tocode, const char *fromcode);

int main(void) {
	unsigned char var_a[] =
		{'C',  0xF4, 't', 'e', ' ', 'd', '\'', 'A',  'z', 'u', 'r', 0x00};
	unsigned char var_b[] =
		{'c', 'r', 0xE8, 'm', 'e', ' ', 'b', 'r', 0xFB, 'l', 0xE9, 'e', 0x00};
	unsigned char var_c[] =
		{'c', 'r', 0xE9, 'm', 'e', ' ', 'f', 'r', 'a', 0xEE, 'c', 'h', 'e', 0x00};
	unsigned char var_d[] =
		{'F', 'a', 'h', 'r', 'v', 'e', 'r', 'g', 'n', 0xFC, 'g', 'e', 'n', 0x00};
	unsigned char var_e[] =
		{'t', 0xEA, 't', 'e', '-', 0xE0, '-', 't', 0xEA, 't', 'e', 0x00};

	printf("(a): %s\n", s2utf8(var_a, "UTF-8", "ISO-8859-1"));
	printf("(b): %s\n", s2utf8(var_b, "UTF-8", "ISO-8859-1"));
    printf("(c): %s\n", s2utf8(var_c, "UTF-8", "ISO-8859-1"));
	printf("(d): %s\n", s2utf8(var_d, "UTF-8", "ISO-8859-1"));
	printf("(e): %s\n", s2utf8(var_e, "UTF-8", "ISO-8859-1"));

	exit(EXIT_SUCCESS);
}

char *s2utf8(unsigned char *strin, const char *tocode,
             const char *fromcode)
{

    size_t in_len = strlen((char*)strin);
    size_t out_len = in_len * 2;
    char *utf8_str = malloc(out_len + 1);
    if (!utf8_str) {
        perror("malloc");
		exit(EXIT_FAILURE);
    }

    iconv_t cd = iconv_open(tocode, fromcode);
    if (cd == (iconv_t)-1) {
        perror("iconv_open");
        free(utf8_str);
		exit(EXIT_FAILURE);
    }

    char *in_ptr = (char*)strin;
    char *out_ptr = utf8_str;
    size_t in_bytes_left = in_len;
    size_t out_bytes_left = out_len;

    if (iconv(cd, &in_ptr, &in_bytes_left, &out_ptr, &out_bytes_left) == (size_t)-1) {
        perror("iconv");
        iconv_close(cd);
        free(utf8_str);
        exit(EXIT_FAILURE);
    }

    *out_ptr = '\0';
    iconv_close(cd);

	return utf8_str;
}
