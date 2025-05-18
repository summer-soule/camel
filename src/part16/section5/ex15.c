/*
 *
 * Task:
 *		(a)	Declare a tag for an enumeration whose values represent
 *			the seven days of the week.
 *		(b)	Use typedef to define a name for the enumeration of part (a).
 *
 * Date: 2025-05-19
 * Time: 01:10 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>


/* enum week { */
/* 	MONDAY, */
/* 	TUESDAY, */
/* 	WEDNESDAY, */
/* 	THURSDAY, */
/* 	FRIDAY, */
/* 	SATURDAY, */
/* 	SUNDAY */
/* }; */

typedef enum {
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
} week;

int main(void) {
	week day = WEDNESDAY;
	printf("day: %d\n", day);
	
	exit(EXIT_SUCCESS);
}
