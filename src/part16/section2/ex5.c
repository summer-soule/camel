/*
 *
 * Task:
 *		Write the following functions, assuming that the date
 *		structure contains three members: month, day, and year
 *		(all of type int).
 *
 *		(a)	int day_of_year(struct date d);
 *
 *			Returns the day of the year (an integer between
 *			1 and 366) that corresponds to the date d.
 *
 *		(b)	int compare_dates(struct date d1, struct date d2);
 *
 *			Returns -1 if d1 is an earlier date than d2, +1 if
 *			d1 is a later date than d2, and 0 if d1 and d2 are the
 *			same.
 *
 * Date: 2025-05-16
 * Time: 11:27 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct date {
	int day, month, year;
};  

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void) {
    struct date d1 = {.day = 12, .month = 3, .year = 1987};
    struct date d2 = {.day = 11, .month = 3, .year = 1987};

    printf("d1 day: %d\n", day_of_year(d1));
    printf("d2 day: %d\n", day_of_year(d2));

    printf("compare dates: %d\n", compare_dates(d1, d2));
        
    exit(EXIT_SUCCESS);
}

/*	Returns the day of the year (an integer between
	1 and 366) that corresponds to the date d. */
int day_of_year(struct date d) {
    
    // days_in_month[0] is for February in leap year
    const int days_in_month[13] = {29, 31, 28, 31, 30, 31, 30,
                                   31, 31, 30, 31, 30, 31};
    int day_number = d.day;

    for (int i = 1; i < d.month; i++)
		if ((i == 2) && ((d.year % 4) == 0))
            day_number += days_in_month[0];
		else
            day_number += days_in_month[i];
    
	return day_number;
}

/*	Returns -1 if d1 is an earlier date than d2, +1 if
	d1 is a later date than d2, and 0 if d1 and d2 are the
	same. */
int compare_dates(struct date d1, struct date d2) {
    if (d1.year < d2.year)
        return -1;
    else if (d1.year > d2.year)
        return 1;
    else if (d1.month < d2.month)
        return -1;
    else if (d1.month > d2.month)
        return 1;
    else if (d1.day < d2.day)
        return -1;
    else if (d1.day > d2.day)
        return 1;
    else
        return 0;
}        
