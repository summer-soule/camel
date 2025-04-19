/*
 *
 * Task: Write the following function:
 *
 * 	void remove_filename(char *url);
 *
 * url points to a string containing a URL (Uniform Resource Locator) that ends
 * with a file name (such as "http://www.knking.com/index.html"). The function
 * should modify the string by removing the file name and the preceding slash.
 * (In this example, the result will be "http://www.knking.com/".)
 * Incorporate the "search for the end of a string" idom into your function.
 *
 * Hint: Have the function replace the last slash in the string by a null
 * character.
 *
 * Date: 2025-04-19
 * Time: 12:48 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void remove_filename(char *url);

int main(void) {
	char url[] = "http://www.knking.com/index.html";

	remove_filename(url);
	printf("'%s'\n", url);

	exit(EXIT_SUCCESS);
}

void remove_filename(char *url)
{
	char *p = url;

	while (*p)
		p++;

	while (p-->url)
		if (*p == '/') {
			*p = '\0';
			break;
		}
}
