//-----------------------------------------------------------------------------
//
// Task: 
// (1) Replace the assignments to heigh, length and width with initializers
// (2) Remove weight variable, insteal calculating (volume + 165) / 166 within
//     the last printf
//
//
// Date: 2024-12-20
// Time: 7:36 AM
//
//-----------------------------------------------------------------------------

// dweight.c: computes the dimensional wight of a 12" x 10" x 8" box

#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10;
	int volume, weight;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", ((volume+165)/166));

	return 0;
}
