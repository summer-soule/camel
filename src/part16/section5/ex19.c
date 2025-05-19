/*
 *
 * Task:
 *		Declare a structure with the following members whose tag
 *		is pinball_machine:
 *
 *		name - a string of up to 40 characters
 *		year - an integer (representing the year of manufacture)
 *		type - an enumeration with the values EM (electromechanical)
 *			   and SS(solid state)
 *		players - an integer (representing the maximum number of players)
 *
 * Date: 2025-05-19
 * Time: 04:35 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct pinball_machine {
	char name[40];
	int year;
	enum {EM, SS} type;
	int players;
};

int main(void) {
	struct pinball_machine machine1 = {
		.name = "Mfr. Detroit Game Mechanics",
		.year = 1978,
		.type = EM,
		.players = 2		
	};

	printf("Description of machine1:\n");
	printf("Name: %s\n", machine1.name);
	printf("Year: %d\n", machine1.year);
	printf("Type: %d\n", machine1.type);
	printf("Players: %d\n", machine1.players);
	
	exit(EXIT_SUCCESS);
}
