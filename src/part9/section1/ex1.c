/*
 *
 * Task: The following function, which computes the area of a triangle,
 * contains two errors. Locate the errors and show how to fix them.
 *
 * Hint: There are no errors in the formula.
 *
 * A: 
 * (1) In triangle_area declaration second parameter "height" isn't a type and
 * must have a type.
 * Possible fix: add double type before "height"
 *
 * (2)  The "double product;" must be declared before function and it can't
 * be between function declaration and its body block.
 * Possible fix: place "double product;" before "triangle_area()" declaration.
 *
 * Date: 2025-03-27
 * Time: 11:40 PM
 *
 */

double product;
double triangle_area(double base, double height)
{
	product = base * height;
	return product / 2;
}
