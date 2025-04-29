/*
 *
 * Task: Suppose that a program needs to display messages in either English,
 * 		 French, or Spanish. Using conditional compilation, write a program
 * 		 fragment that displays one of the following three messages, depending
 * 		 on whether or not the specified macro is defined:
 *
 * 		 	Insert Disk 1			(if ENGLISH is defined)
 * 		 	Inserez Le Disque 1		(if FRENCH is defined)
 * 		 	Inserte El Disco 1		(if SPANISH is defined)
 *
 * Date: 2025-04-29
 * Time: 06:55 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define SPANISH

#ifdef ENGLISH
#define INSERT_DISC "Insert Disk 1"
#
#elif defined(FRENCH)
#define INSERT_DISC "Inserez Le Disque 1"
#
#elif defined(SPANISH)
#define INSERT_DISC "Inserte El Disco 1"
#endif

int main(void) {
	printf("%s\n", INSERT_DISC);

	exit(EXIT_SUCCESS);
}
