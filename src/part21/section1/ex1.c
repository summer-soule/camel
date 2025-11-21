/*
 *
 * Task:
 *		Locate where header files are kept on your system. Find the
 *		nonstandard headers and determine the purpose of each.
 *
 * Date: 2025-11-20
 * Time: 11:42 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

// libpaper is a library for configuring and getting information
// on paper sizes.
//
// its header file located at /usr/include/paper.h
#if __has_include("paper.h")
#include <paper.h>
#define PAPER_
#endif

int main(void) {

#ifdef PAPER_
	if (paperinit() != 0) {
        perror("paperinit: error in init");
        exit(EXIT_FAILURE);
	}

    const struct paper *defPaper;
    defPaper = paperfirst();

    printf("default paper: %s\n", papername(defPaper));
    printf("width: %f\n", paperwidth(defPaper));
    printf("height: %f\n", paperheight(defPaper));
#else
	printf("libpaper not found.\n");
	printf("you can find it at https://github.com/rrthomas/libpaper\n");
#endif

	exit(EXIT_SUCCESS);
}
