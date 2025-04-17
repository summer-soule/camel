/*
 *
 * Task: Modify the read_line function in each of the following ways:
 *
 * 	(a) Have it skip white space before beginning to store input characters.
 * 	(b) Have it stop reading at the first white-space character.
 * 		Hint: To determine whether or not a character is white space, call the
 * 		isspace function.
 * 	(c) Have it stop reading at the first new-line character, then store the
 * 		new-line character in the string.
 * 	(d) Have it leave behind characters that it doesn't have room to store.
 *
 * Date: 2025-04-16
 * Time: 07:47 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ARR_L 	50
#define ARR_L_D	5

int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);
int read_line_d(char str[], int n);

int main(void) {
	char arr_a[ARR_L];
	char arr_b[ARR_L];
	char arr_c[ARR_L];
	char arr_d[ARR_L_D];
	char remainded[ARR_L];
	char ch;
	int i;
	int j = 0;

	printf("(a) input: ");
	i = read_line_a(arr_a, ARR_L);
	printf("read_line_a: '%s' | %d\n", arr_a, i);

	printf("(b) input: ");
	i = read_line_b(arr_b, ARR_L);
	printf("read_line_b: '%s' | %d\n", arr_b, i);

	printf("(c) input: ");
	i = read_line_c(arr_c, ARR_L);
	printf("read_line_c: '%s' | %d\n", arr_c, i);

	printf("(d) input: ");
	i = read_line_d(arr_d, ARR_L_D);
	printf("read_line_d: '%s' | %d\n", arr_d, i);


	while ((ch = getchar()) != '\n')
		remainded[j++] = ch;
	printf("remainded in stdin: '%s' | %d\n", remainded, j);

	exit(EXIT_SUCCESS);
}

/* 	
 * (a) Have it skip white space before beginning to store input characters.
 */
int read_line_a(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i == 0 && isspace(ch))
			;
		else if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

/*
 * (b) Have it stop reading at the first white-space character.
 * 		Hint: To determine whether or not a character is white space, call the
 * 		isspace function.
*/
int read_line_b(char str[], int n)
{
	int ch, i = 0;

	// better way is do while(!isspace(ch = getchar())) {...}
	// but I keep my solution here for history
	// P.S. from answers by author
	while ((ch = getchar()) != '\n' && !isspace(ch))
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

/*
 * (c) Have it stop reading at the first new-line character, then store the
 * new-line character in the string.
 */
int read_line_c(char str[], int n)
{
	int ch, i = 0;

	do {
		ch = getchar();
		if (i < n-1)
			str[i++] = ch;
	} while (ch != '\n');
	str[i] = '\0';

	return i;
}

/*
 * (d) Have it leave behind characters that it doesn't have room to store.
 */
int read_line_d(char str[], int n)
{
	int ch, i = 0;

	// it is important to test i < n-1 before getting new character
	while (i < n-1 && (ch = getchar()) != '\n')
		str[i++] = ch;
	str[i] = '\0';
	return i;
}
