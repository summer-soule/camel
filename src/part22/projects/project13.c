/*
 *
 * Project 13.
 *
 * Task:
 *		Modify Programming Project 8 from Chapter 5 so that
 *		the program obtains departure and arrival times from
 *		a file named flights.dat. Each line of the file will
 *		contain a departure time followed by an arrival time,
 *		with one or more spaces separating the two. Times
 *		will be expressed using the 24-hour clock. For example,
 *		here's what flights.dat might look like if it contained
 *		the flight information listed in the original project:
 *
 *		8:00 10:16
 *		9:43 11:52
 *		11:19 13:31
 *		12:47 15:00
 *		14:00 16:08
 *		15:45 17:55
 *		19:00 21:20
 *		21:45 23:58
 *
 * Date: 2025-12-29
 * Time: 10:20 AM
 *
 */

#define _DEFAULT_SOURCE

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>

#define MAX_DATA_STRING 255

typedef struct {
	size_t arrival;
	size_t departure;
} Record;

size_t get_data(Record **, FILE *);
void usage(char *);

int main(int argc, char *argv[]) {
	FILE *fsrc;

	Record *flights;
	unsigned int flights_count = 0;

	size_t uhr, umin, utime;
	int i = 0;

	if (argc != 2) {
		usage(argv[0]);
		exit(EXIT_FAILURE);
	}

    if ((fsrc = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	flights_count = get_data(&flights, fsrc);

	printf("Enter a 25-hour time: ");
	scanf("%ld%*[:]%ld", &uhr, &umin);

	utime = uhr * 60 + umin;

	while (utime > (flights+i)->arrival)
		i++;

	if (i > flights_count)
		i = 0;

    printf("Closest departure time is %ld:%.2ld %s, arriving at %ld:%.2ld %s\n",
           (flights+i)->arrival / 60, (flights+i)->arrival % 60,
           ((flights+i)->arrival / 60) < 12 ? "a.m." : "p.m.",
           (flights+i)->departure / 60, (flights+i)->departure % 60,
           ((flights+i)->departure / 60) < 12 ? "a.m." : "p.m.");

	exit(EXIT_SUCCESS);
}

void usage(char *progname) {
	printf("usage: %s FILE\n", basename(progname));
	printf("\nArguments:\n");
	printf("\tFILE\t\tfile containing formatted lines like\n");
	printf("\n\t\t\t<Arrival Time>,<Departure Time>\n");
	printf("\t\t\t8:00 10:16\n\t\t\t9:43 11:52\n");
}

size_t get_data(Record **flights, FILE *fsrc) {
	Record *arr = NULL;
	size_t size = 0;
	size_t cap = 1;
	char data[MAX_DATA_STRING];
	size_t ihr, imin, ohr, omin;

	arr = malloc(cap * sizeof(Record));

	while (fgets(data, MAX_DATA_STRING, fsrc) != 0) {
		if (size >= cap) {
			cap *= 2;
			arr = reallocarray(arr, cap, cap * sizeof(Record));
		}
		sscanf(data, "%ld%*[:]%ld %ld%*[:]%ld", &ihr, &imin, &ohr, &omin);
		arr[size].arrival = ihr * 60 + imin;
		arr[size].departure = ohr * 60 + omin;
		size++;
	}

	*flights = reallocarray(arr, sizeof(Record), size);

	return cap;
}
