/*
 *
 * Task:
 *		Find the error in the following program fragment and show
 *		how to fix it.
 *
 *		FILE *fp;
 *
 *		if (fp = fopen(filename, "r")) {
 *			read characters until end-of-file
 *		}
 *		fclose(fp);
 *
 * Date: 2025-12-08
 * Time: 12:00 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <linux/limits.h>

int main(int argc, char *argv[]) {
	FILE *fp;
    int ch;
    char cwd[PATH_MAX];

	printf("This program must be executed from the root of repository.\n");

    // get path to working directory and change it to file to read
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
		printf("current working dir: %s\n", cwd);
        strcat(cwd, "/Makefile");
        printf("file to read: %s\n", cwd);
	} else {
        perror("getcwd");
        exit(EXIT_FAILURE);
	}

	// fixed program fragment starts here
    if ((fp = fopen(cwd, "r")) != NULL) {
		while ((ch = fgetc(fp)) != EOF)
			;
    } else {
		printf("fopen: can't open file\n");
        exit(EXIT_FAILURE);
    }

    printf("Successfully read until EOF.\n");
    fclose(fp);

	exit(EXIT_SUCCESS);
}
