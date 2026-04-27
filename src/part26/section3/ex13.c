/*
 *
 * Task:
 *		Section 26.3 described some of the ISO 8601 date and time
 *		formats. Here are a few more:
 *
 *		(a) Year followed by day of year: YYYY-DDD, where DDD is a
 *		number between 001 and 366
 *
 *		(b) Year, week, and day of week: YYYY-Www-D, where ww is a
 *		number between 01 and 53, and D is a digit between 1 through
 *		7, beginning with Monday and ending with Sunday
 *
 *		(c) Combined date and time: YYYY-MM-DDThh:mm:ss
 *
 *		Give strftime strings that correspond to each of these formats.
 *
 * Date: 2026-04-27
 * Time: 02:54 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *var_a(const struct tm *);
char *var_b(const struct tm *);
char *var_c(const struct tm *);

int main(void) {
	time_t now = time(NULL);
	struct tm time_now = *localtime(&now);

    char *a = var_a(&time_now);
    char *b = var_b(&time_now);
	char *c = var_c(&time_now);

	printf("var_a: %s\n", a);
	printf("var_b: %s\n", b);
	printf("var_c: %s\n", c);

	exit(EXIT_SUCCESS);
}

char *var_a(const struct tm *t) {
	char *str = NULL;

    if ((str = malloc(sizeof(char) * 50)) == NULL) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	strftime(str, 50, "%Y-%j", t);

	return str;
}

char *var_b(const struct tm *t) {
	char *str;

    if ((str = malloc(sizeof(char) * 50)) == NULL) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	strftime(str, 50, "%Y-W%V-%u", t);

	return str;
}

char *var_c(const struct tm *t) {
	char *str;

    if ((str = malloc(sizeof(char) * 50)) == NULL) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	strftime(str, 50, "%FT%X", t);

	return str;
}
