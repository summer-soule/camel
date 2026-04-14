/*
 *
 * Task:
 *		Determine which locales are supported by your compiler.
 *
 * Date: 2026-04-13
 * Time: 11:16 PM
 *
 */

#define _POSIX_C_SOURCE 2

#include <stdio.h>
#include <stdlib.h>

int main(void) {

#if defined(unix) || defined (__unix__) || defined (__unix)
	FILE *fp;
	char buffer[4096];

	fp = popen("locale -a", "r");
	if (!fp) {
		perror("popen");
		exit(EXIT_FAILURE);
	}

    printf("Available generated locales:\n");
    while(fgets(buffer, sizeof(buffer), fp) != NULL)
		printf("%s", buffer);

	if (pclose(fp) == -1) {
		perror("pclose");
		exit(EXIT_FAILURE);
	}

    fp = fopen("/usr/share/i18n/SUPPORTED", "r");
	if (!fp) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

    printf("\nAvailable locales from /usr/share/i18n/SUPPORTED file:\n");
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
		printf("%s", buffer);

	if (fclose(fp) == -1) {
		perror("fclose");
		exit(EXIT_FAILURE);
	}

#else
	printf("This solution designed to run on UNIX-like systems. Try it.\n");
#endif

	exit(EXIT_SUCCESS);
}
