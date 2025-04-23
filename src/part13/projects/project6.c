/*
 *
 * Project 6.
 *
 * Task: Improve the planet.c program of Section 13.7 by having it ignore case
 * when comparing command-line arguments with strings in the planets array.
 *
 * Date: 2025-04-23
 * Time: 11:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
	char *planets[] = {"Mercury", "Venus", "Earth",
					   "Mars", "Jupiter", "Saturn",
					   "Uranus", "Neptune", "Pluto"};
	int i, j;
	char planets_cmp[8];


	for (i = 1; i < argc; i++) {
		char *p = &planets_cmp[1];
		strcpy(planets_cmp, argv[i]);
		planets_cmp[0] = toupper(planets_cmp[0]);
		while (*p) {
			*p = tolower(*p);
			p++;
		}

		for (j = 0; j < NUM_PLANETS; j++)
			if (strcmp(planets_cmp, planets[j]) == 0) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}

	exit(EXIT_SUCCESS);
}
