//-----------------------------------------------------------------------------
//
// Task: write a program that declares several int and float variables without
// initializing them and prints their values.
//
// Q1: Is there any pattern to the values? (usually there isn't)
// A1: uninitialized int gets values near maximum of short int (2 bytes)
// uninitialized float has no obvious value patterns.
//
// Date: 2024-12-22
// Time: 18:24 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
	int integer;
	float bloat;

	printf("integer: %d\nfloat: %f\n", integer, bloat);
	return 0;
}
