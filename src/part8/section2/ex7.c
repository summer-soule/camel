/*
 *
 * Task: Using the shortcuts described in Section 8.2, shrink the initializer
 * for the segments array (Exercise 6) as much as you can.
 *
 * Date: 2025-03-17
 * Time: 12:51 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1}, 		// 0
								 {0, 1, 1}, 				// 1
								 {1, 1, 0, 1, 1, 0, 1}, 	// 2
								 {1, 1, 1, 1, 0, 1, 0}, 	// 3
								 {0, 1, 1, 0, 0, 1, 1}, 	// 4
								 {0, 0, 1, 1, 0, 1, 1}, 	// 5
								 {1, 0, 1, 1, 1, 1, 1}, 	// 6
								 {1, 1, 1},					// 7
								 {1, 1, 1, 1, 1, 1, 1}, 	// 8
								 {1, 1, 1, 1, 0, 1, 1}}; 	// 9
	
	// print segment id
	printf("\t0 1 2 3 4 5 6\n");

	// print digit ids
	for (int j = 0; j < 10; j++) {
		printf("%d:\t", j);
		for (int i = 0; i < 7; i++)
			printf("%d ", segments[j][i]);
		putchar('\n');
	}

	exit(EXIT_SUCCESS);
}
