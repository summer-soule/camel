/*
 *
 * Task:
 *		Suppose that s is the following structure (point is a structure
 *		tag declared in Exercise 10):
 *
 *		struct shape {
 *			int shape_kind;
 *			struct point center;
 *			union {
 *				struct {
 *					int height, width;
 *				} rectangle;
 *				struct {
 *					int radius;
 *				} circle;
 *			} u;
 *		} s;
 *
 *		If the value of shape_kind is RECTANGLE, the height and width
 *		members store the dimensions of a rectangle. If the value of
 *		shape_kind is CIRCLE, the radius member stores the raduis of a
 *		circle. Indicate which of the following statements are legal,
 *		and show how to repair the ones that aren't:
 *
 *		(a)	s.shape_kind = RECTANGLE;
 *		(b) s.center.x = 10;
 *		(c)	s.height = 25;
 *		(d) s.u.rectangle.width = 8;
 *		(e) s.u.circle = 5;
 *		(f)	s.u.radius = 5;
 *
 * Answer:
 *		legal: (a), (b), (d)
 *		fix:
 *			(c) height is a member of rectangle union
 *				s.u.rectangle.height = 25;
 *			(e) circle is a struct with member radius
 *				s.u.circle.radius = 5;
 *			(f)	radius is a member of circle struct
 *				s.u.circle.radius = 5;
 *
 * Date: 2025-05-18
 * Time: 04:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define RECTANGLE	0
#define CIRCLE		1

struct point {
	int x, y;
};

struct shape {
	int shape_kind;
	struct point center;
    union {
		struct {
			int height, width;
		} rectangle;
        struct {
			int radius;
        } circle;
    } u;
} s;

int main(void) {
	s.shape_kind = RECTANGLE;
	printf("(a) s.shape_kind: %d\n", s.shape_kind);

	s.center.x = 10;
	printf("(b) s.center.x: %d\n", s.center.x);

	s.u.rectangle.height = 25;
	printf("(c) s.u.rectangle.height: %d\n", s.u.rectangle.height);

	s.u.rectangle.width = 8;
	printf("(d) s.u.rectangle.width: %d\n", s.u.rectangle.width);

	s.u.circle.radius = 5;
	printf("(e) s.u.circle.radius: %d\n", s.u.circle.radius);

	s.u.circle.radius = 5;
	printf("(f) s.u.circle.radius: %d\n", s.u.circle.radius);
	
	exit(EXIT_SUCCESS);
}
