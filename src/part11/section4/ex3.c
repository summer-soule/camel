/*
 *
 * Task: The following function supposedly computes the sum and average of the
 * numbers in the array a, which has length n. avg and sum point to variables
 * that the function should modify. Unfortunatly, the function contains several
 * errors: find and correct them.
 *
 * 	void avg_num(double a[], int n, double *avg, double *sum)
 * 	{
 * 		int i;
 *
 * 		sum = 0.0;
 * 		for (i = 0; i < n; i++)
 * 			sum += a[i];
 * 		avg = sum / n;
 * 	}
 *
 * Date: 2025-04-09
 * Time: 12:26 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_L	10

void avg_num(double a[], int n, double *avg, double *sum);

int main(void) {
	double avg_1, avg_2, avg_3;
	double sum_1, sum_2, sum_3;

	double *avg, *sum;

	double arr[ARR_L] = {0};

	srand(time(NULL));

	// 1st run avg_num()
	avg = &avg_1;
	sum = &sum_1;

	for (int i = 0; i < ARR_L; i++)
		arr[i] = rand() % (1 + 100 - 1);

	avg_num(arr, ARR_L, avg, sum);
	printf("avg_1: %f\nsum_1: %f\n", avg_1, sum_1);

	// 2nd run avg_num()
	avg = &avg_2;
	sum = &sum_2;

	for (int i = 0; i < ARR_L; i++)
		arr[i] = rand() % (1 + 100 - 1);

	avg_num(arr, ARR_L, avg, sum);
	printf("avg_2: %f\nsum_2: %f\n", avg_2, sum_2);

	// 3rd run avg_num()
	avg = &avg_3;
	sum = &sum_3;

	for (int i = 0; i < ARR_L; i++)
		arr[i] = rand() % (1 + 100 - 1);

	avg_num(arr, ARR_L, avg, sum);
	printf("avg_3: %f\nsum_3: %f\n", avg_3, sum_3);

	exit(EXIT_SUCCESS);
}

void
avg_num(double 	a[],
		int 	n,
		double 	*avg,
		double 	*sum)
{
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}
