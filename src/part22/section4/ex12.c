/*
 *
 * Task:
 *		Find the error in the following function and show how to fix it.
 *
 *		int count_periods(const char *filename) {
 *			FILE *fp;
 *			int n = 0;
 *
 *			if ((fp = fopen(filename, "r")) != NULL) {
 *				while (fgetc(fp) != EOF)
 *					if (fgetc(fp) == '.')
 *						n++;
 *				fclose(fp);
 *			}
 *
 *			return n;
 *		}
 *
 * Date: 2025-12-14
 * Time: 01:17 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int count_periods(const char *);

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("usage: ex12 filename\n");
		exit(EXIT_FAILURE);
	}

	printf("periods in file: %d\n", count_periods(argv[1]));

	exit(EXIT_SUCCESS);
}

int count_periods(const char *filename) {
	FILE *fp;
    int n = 0;
    char ch;

	if ((fp = fopen(filename, "r")) != NULL) {
		while ((ch = fgetc(fp)) != EOF)
			if (ch == '.')
				n++;
		fclose(fp);
	}

	return n;
}
