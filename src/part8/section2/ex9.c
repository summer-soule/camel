/*
 *
 * Task: Using the array of Exercise 8, write a program fragment that computes
 * the average temperature for a month (averaged over all days of the month
 * and all hours of the day).
 *
 * Date: 2025-03-18
 * Time: 09:58 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define	DAYS 		30
#define	HOURS 		24

#define TEMP_MIN	-30
#define TEMP_MAX	50

int main(void) {
	float temp_avg = 0;
	int temperature_readings[DAYS][HOURS] = {0};

	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			temperature_readings[i][j] = 
				rand() % (TEMP_MAX + 1 - TEMP_MIN) + TEMP_MIN;
			temp_avg += (float) temperature_readings[i][j];
		}
		temp_avg /= DAYS;
		printf("Avg temperature at day %d: %.1f\n", i+1, temp_avg);
		temp_avg = 0;
	}
	
	exit(EXIT_SUCCESS);
}
