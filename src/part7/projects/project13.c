/* 
 *
 * Project 13.
 *
 * Task: Write a program that calculates the average word length for a sentence:
 *
 * Enter a sentence: It was deja vu all over again.
 * Average word length: 3.4
 *
 * For simplicity, your program should consider a punctuation mark to be part
 * of the word to which it is attached. Display the average word length to
 * one decimal place.
 *
 * Date: 2025-02-27
 * Time: 00:30 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char ch;
	int words = 0, chars = 0;
	float avg = 0.0f;

	printf("Enter a sentence: ");
	
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') words++;
		else chars++;
	}
	words++;

	printf("words: %d\nchars: %d\n", words, chars);
	avg = (float) chars / words;
	printf("Average word length: %.1f\n", avg);

	exit(EXIT_SUCCESS);
}
