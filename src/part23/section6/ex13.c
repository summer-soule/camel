/*
 *
 * Task:
 *		Use strtok to write the following function:
 *
 *		int count_words(char *sentence);
 *
 *		count_words returns the number of words in the string sentence,
 *		where a "word" is any sequence of non-white charaters.
 *		cout_words is allowed to modify the string.
 *
 * Date: 2026-03-20
 * Time: 05:43 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(char *sentence);

int main(void) {
	char str[] = "1 22 333 4444";

	printf("In string '%s' %d words\n", str, count_words(str));

	exit(EXIT_SUCCESS);
}

int count_words(char *sentence) {
	if (!sentence) return 0;

	size_t i = 0;

	char *tmp = malloc(strlen(sentence)+1);
    strcpy(tmp, sentence);

	char *p = strtok(tmp, " \t");
	if (!p) return 0;
	i++;

    while ((p = strtok(NULL, " \t"))) i++;

	free(tmp);

	return i;
}
