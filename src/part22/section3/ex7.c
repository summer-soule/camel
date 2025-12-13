/*
 *
 * Task:
 *		Suppose that we call scanf as follows:
 *
 *		n = scanf("%d%f%d", &i, &x, &j);
 *
 *		(i, j, and n are int variables and x is a float variable.)
 *		Assuming that the input stream contains the characters shown,
 *		give the values of i, j, n, and x after the call. In addition,
 *		indicate which characters were consumed by the call.
 *
 *		(a) 10 20 30\n
 *		(b) 1.0 2.0 3.0\n
 *		(c) 0.1 0.2 0.3\n
 *		(d) .1 .2 .3\n
 *
 * date: 2025-12-09
 * Time: 05:17 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define STRIKETHROUGH_ON	"\033[9m"
#define STRIKETHROUGH_OFF	"\033[29m"

void scan_string(const char *, char);

int main(void) {

	char var_a[] = "10 20 30\n";
    char var_b[] = "1.0 2.0 3.0\n";
    char var_c[] = "0.1 0.2 0.3\n";
	char var_d[] = ".1 .2 .3\n";

    printf("scan specifier: \"%%d%%f%%d\"\n");
    printf("variable value -1 means \"undefined\"\n\n");

    scan_string(var_a, 'a');
    printf("consumed: %s10 20 30\\n%s\n\n",
           STRIKETHROUGH_ON, STRIKETHROUGH_OFF);

    scan_string(var_b, 'b');
    printf("consumed: %s1.0 2%s.0 3.0\n\n",
           STRIKETHROUGH_ON, STRIKETHROUGH_OFF);

    scan_string(var_c, 'c');
	printf("consumed: %s0.1 0%s.2 0.3\n\n",
		   STRIKETHROUGH_ON, STRIKETHROUGH_OFF);

    scan_string(var_d, 'd');
    printf("consumed: .1 .2 .3\n");

	exit(EXIT_SUCCESS);
}

void scan_string(const char *str, char variant) {
    int i = -1, j = -1, n = -1;
    float x = -1.0;

    n = sscanf(str, "%d%f%d", &i, &x, &j);

    printf("Variant %c\n", variant);
    printf("string: %s", str);
    printf("i: %d\nj: %d\nn: %d\nx: %f\n", i, j, n, x);
}
