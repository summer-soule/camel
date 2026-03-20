/*
 *
 * Task:
 *		Many versions of <string.h> provide additional (nonstandard)
 *		functions, such as those listed below. Write each function using
 *		only the features of the C standard.
 *
 *		(a) strdup(s) - Returns a pointer to a copy of s stored in memory
 *		obtained by calling malloc. Returns a null pointer if enough memory
 *		couldn't be allocated.
 *
 *		(b) stricmp(s1, s2) - Similar to strcmp, but ignores the case
 *		of letters.
 *
 *		(c) strlwr(s) - Converts upper-case letters in s to lower case,
 *		leaving other characters unchanged; returns s.
 *
 *		(d) strrev(s) - Reverses the characters in s (except the null
 *		character); returns s.
 *
 *		(e) strset(s, ch) - Fills s with copies of the character ch; returns s.
 *
 *		If you test any of these functions, you may need to alter its name.
 *		Functions whose names begin with str are reserver by the C standard.
 *
 * Date: 2026-03-17
 * Time: 10:52 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *a_strdup(char *s);
int b_stricmp(char *s1, char *s2);
char *c_strlwr(char *s);
char *d_strrev(char *s);
char *e_strset(char *s, char ch);

int main(void) {
	char str_a[] = "test";
	char str_b_1[] = "test2";
	char str_b_2[] = "TEST2";

	printf("Variant (a):\n");
    printf("Original string: '%s' at %p\n", str_a, str_a);
	char *pa = a_strdup(str_a);
	printf("Copied string: '%s' at %p\n\n", pa, pa);

    printf("Variant (b):\n");
    printf("compare '%s' with '%s': %d\n", str_a, str_b_2,
           b_stricmp(str_a, str_b_2));
    printf("compare '%s' with '%s': %d\n", str_b_1, str_b_2,
           b_stricmp(str_b_1, str_b_2));
    printf("compare '%s' with '%s': %d\n\n", str_b_2, str_a,
           b_stricmp(str_b_2, str_a));


    printf("Variant (c):\n");
	char *p = a_strdup(str_b_2);
    printf("Original string: '%s'\n", p);
    printf("Converted string: '%s'\n\n", c_strlwr(p));
	free(p);

    printf("Variant (d):\n");
	printf("Original string: '%s'\n", str_b_1);
	printf("Reversed string: '%s'\n\n", d_strrev(str_b_1));

    printf("Variant (e):\n");
	printf("Original string: '%s'\n", str_a);
	printf("String filled with 1: '%s'\n\n", e_strset(str_a, '1'));

    printf("Tests completed.\n");

	exit(EXIT_SUCCESS);
}

// Returns a pointer to a copy of s stored in memory obtained by calling
// malloc. Returns a null pointer if enough memory couldn't be allocated
char *a_strdup(char *s) {
	char *str = NULL;
    if (!(str = malloc(strlen(s) + 1)))
        return NULL;

    return strcpy(str, s);
}

// similar to strcmp, but ignores the case letters
int b_stricmp(char *s1, char *s2) {
	while (tolower(*s1) == tolower(*s2) && *s1 != '\0')
		s1++, s2++;

	if (*s1 == '\0' && *s2 == '\0')
		return 0;

	if (tolower(*s1) < tolower(*s2))
		return -1;
	else
		return 1;
}

// Converts upper-case letters in s to lower case,
// leaving other characters unchanged; returns s.
char *c_strlwr(char *s) {
    char *p = s;
    while (*p != '\0') {
        if (isupper(*p))
			*p = tolower(*p);
		p++;
	}
	return s;
}

// Reverses the characters in s (except the null character); returns s.
char *d_strrev(char *s) {
    if (!s) return NULL;

	int i = 0;
	int j = strlen(s)-1;

    while (i < j) {
		char ch = s[i];
		s[i] = s[j];
		s[j] = ch;
		i++, j--;
    }

	return s;
}

// Fills s with copies of the character ch; returns s.
char *e_strset(char *s, char ch) {
	memset(s, ch, strlen(s));

	return s;
}
