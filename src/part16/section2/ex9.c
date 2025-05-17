/*
 *
 * Task:
 *		Write the following functions. (The color structure is
 *		defined in Exercise 8.)
 *
 *		(a)	struct color make_color(int red, int green, int blue);
 *
 *			Returns a color structure containing the specified red,
 *			green, and blue values. If any argument is less than
 *			zero, the corresponding member of the structure will
 *			contain zero instead. If any argument is greater than
 *			255, the corresponding member of the structure will
 *			contain 255.
 *
 *		(b)	int getRed(struct color c);
 *
 *			Returns the value of c's red member.
 *
 *		(c)	bool equal_color(struct color color1, struct color color2);
 *
 *			Returns true if the corresponding members of color1 and
 *			color2 are equal.
 *
 *		(d)	struct color brighter(struct color c);
 *
 *			Returns a color structure that represents a brighter version
 *			of the color c, except that each member has been divided by
 *			0.7 (with the result truncated to an integer). However, there
 *			are three special cases: (1) If all members of c are zero,
 *			the function returns a color whose members all have the value 3.
 *			(2) If any member of c is greater than 0 but less than 3, it is
 *			replaced by 3 before the division by 0.7. (3) If dividing by
 *			0.7 causes a member to exceed 255, it is reduced to 255.
 *
 *		(e) struct color darker(struct color c);
 *
 *			Returns a color structure that represents a darker version
 *			of the color c. The structure is identical to c, except that
 *			each member has been multiplied by 0.7 (with the result
 *			truncated to an integer).
 *
 * DATE: 2025-05-17
 * Time: 04:33 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void) {
	struct color c1;
	struct color c2 = {.red = 128, .green = 255, .blue = 64};
	
	int red, green, blue;

	printf("Enter colors (rgb): ");
	scanf("%d %d %d", &red, &green, &blue);

	c1 = make_color(red, green, blue);
	printf("c.red: %d\n", getRed(c1));
	printf("compare c1 with c2: %d\n", equal_color(c1, c2));
	printf("brighter c1: r(%d), g(%d), b(%d)\n",
		   brighter(c1).red,
		   brighter(c1).green,
		   brighter(c1).blue);
	printf("darker c2: r(%d), g(%d), b(%d)\n",
		   darker(c2).red,
		   darker(c2).green,
		   darker(c2).blue);
	
	exit(EXIT_SUCCESS);
}

struct color make_color(int red, int green, int blue) {
    struct color color_ret = {
		.red = red > 0 ? red : 0,
		.green = green > 0 ? green : 0,
		.blue = blue > 0 ? blue : 0
	};
	return color_ret;
}

int getRed(struct color c) {
    return c.red;
}

bool equal_color(struct color color1, struct color color2) {
    if (color1.red == color2.red && color1.green == color2.green &&
        color1.blue == color2.blue)
        return true;
    else
        return false;
}

struct color brighter(struct color c) {
    struct color color_ret;
	
    if (c.red == 0 && c.green == 0 && c.blue == 0) {
		color_ret.red = color_ret.green = color_ret.blue = 3;
		return color_ret;
	}

	// process red
	color_ret.red = (c.red > 0 && c.red < 3) ?
					(int) (3 / 0.7) :
					(int) (c.red / 0.7);
	if (color_ret.red > 255)
		color_ret.red = 255;

	// process green
	color_ret.green = (c.green > 0 && c.green < 3) ?
					(int) (3 / 0.7) :
					(int) (c.green / 0.7);
	if (color_ret.green > 255)
		color_ret.green = 255;

	// process blue
	color_ret.blue = (c.blue > 0 && c.blue < 3) ?
					(int) (3 / 0.7) :
					(int) (c.blue / 0.7);
	if (color_ret.blue > 255)
		color_ret.blue = 255;

	return color_ret;
}

struct color darker(struct color c) {
    struct color color_ret;
	
    if (c.red == 0 && c.green == 0 && c.blue == 0) {
		color_ret.red = color_ret.green = color_ret.blue = 3;
		return color_ret;
	}

	// process red
	color_ret.red = (c.red > 0 && c.red < 3) ?
					(int) (3 * 0.7) :
					(int) (c.red * 0.7);
	if (color_ret.red > 255)
		color_ret.red = 255;

	// process green
	color_ret.green = (c.green > 0 && c.green < 3) ?
					(int) (3 * 0.7) :
					(int) (c.green * 0.7);
	if (color_ret.green > 255)
		color_ret.green = 255;

	// process blue
	color_ret.blue = (c.blue > 0 && c.blue < 3) ?
					(int) (3 * 0.7) :
					(int) (c.blue * 0.7);
	if (color_ret.blue > 255)
		color_ret.blue = 255;

	return color_ret;    
}
