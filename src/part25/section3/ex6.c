/*
 *
 * Task:
 *		Modify the following program fragment by replacing as many
 *		characters as possible by trigraphs.
 *
 *		while ((orig_char = getchar()) != EOF) {
 *			new_char = orig_char ^ KEY;
 *			if (isprint(orig_char) && isprint(new_char))
 *				putchar(new_char);
 *			else
 *				putchar(orig_char);
 *		}
 *
 * Date: 2026-04-22
 * Time: 05:13 AM
 *
 */

??=include <stdio.h>
??=include <stdlib.h>
??=include <ctype.h>

??=define KEY 'k'

int main(void) ??<
	char orig_char;
	char new_char;

	while ((orig_char = getchar()) != EOF) ??<
		new_char = orig_char ??' KEY;
		if (isprint(orig_char) && isprint(new_char))
			putchar(new_char);
		else
			putchar(orig_char);
	??>

	exit(EXIT_SUCCESS);
??>
