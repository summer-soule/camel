/*
 *
 * Project 8.
 *
 * Task: Modify Programming Project 7 so that it prompts for five quiz grades
 * for each of five students, then computes the total score and average score
 * for each student, and the average score, high score, and low score for each
 * quiz.
 *
 * Date: 2025-03-21
 * Time: 02:05 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ROW	5
#define COL	5

int main(void) {
	int input[ROW][COL] = {0};

	for (int i = 0; i < ROW; i++) {
		printf("Enter row %d: ", i+1);
		for (int j = 0; j < COL; j++) {
			scanf("%d", &input[i][j]);
		}
	}

	// total score
	int score_total = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			score_total += input[i][j];
	}
	printf("\nTotal score: %d\n\n", score_total);

	// average score per student
	float score_avg_student;
	for (int i = 0; i < ROW; i++) {
		score_avg_student = 0;
		for (int j = 0; j < COL; j++)
			score_avg_student += input[i][j];
		printf("Student %d average score: %.1f\n", i + 1, score_avg_student / COL);
	}
	
	// quiz average score
	printf("\nQuiz average score: %.1f\n", (float) score_total / (ROW * COL));

	// quiz high score
	int score_high = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			score_high = input[i][j] > score_high ? input[i][j] : score_high;
	}
	printf("High score: %d\n", score_high);

	// quiz low score
	int score_low = score_high;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			score_low = input[i][j] < score_low ? input[i][j] : score_low;
	}
	printf("Low score: %d\n", score_low);

	exit(EXIT_SUCCESS);
}
