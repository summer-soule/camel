/* 
 *
 * Task: For each of the following character escapes, give the equivalent octal
 * escape. (Assume that the character set is ASCII.) You may wish to consult
 * Appendix E, which lists the numerical codes for ASCII characters.
 *
 * (a) \b
 * (b) \n
 * (c) \r
 * (d) \t
 *
 * Date: 2025-02-17
 * Time: 18:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Backspace is 010\010\n");
	printf("New line is 012\012");
	printf("Carriage ret is 015\015\n");
	printf("Horizontal tab is 011\011test\n");

	exit(EXIT_SUCCESS);
}
