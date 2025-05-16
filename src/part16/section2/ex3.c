/*
 *
 * Task:
 *		(a)	Show how to declare a tag named complex for
 *			a structure with two members, real and imaginary,
 *			of type double.
 *
 *		(b)	Use the complex tag to declare varibales named
 *			c1, c2, and c3.
 *
 *		(c) Write a function named make_complex that stores
 *			its two arguments (both of type double) in a complex
 *			structure, then returns the structure.
 *
 *		(d)	Write a function named add_complex that adds the
 *			corresponding members of its arguments (both complex
 *			structures), then returns the result (another complex
 *			structure).
 *
 * Date: 2025-05-16
 * Time: 07:46 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define PRINT_COMPLEX(complex) \
(printf(\
#complex ".real: %.2f\n"\
#complex ".imaginary: %.2f\n\n", complex.real, complex.imaginary))

struct complex {
	double real, imaginary;
};

struct complex make_complex(double a, double b);
struct complex add_complex(struct complex a, struct complex b);

int main(void) {
	struct complex c1, c2, c3;

    c1 = make_complex(2.1, 3.2);
    c2 = make_complex(0.1, 1.8);

    PRINT_COMPLEX(c1);
    PRINT_COMPLEX(c2);

    c3 = add_complex(c1, c2);

    PRINT_COMPLEX(c3);
    
	exit(EXIT_SUCCESS);
}

/*	(c) Write a function named make_complex that stores
		its two arguments (both of type double) in a complex
		structure, then returns the structure. */
struct complex make_complex(double a, double b) {
	struct complex complex;
    complex.real = a;
    complex.imaginary = b;
    return complex;
}

/*	(d)	Write a function named add_complex that adds the
		corresponding members of its arguments (both complex
		structures), then returns the result (another complex
		structure). */
struct complex add_complex(struct complex a, struct complex b) {
	struct complex complex_return;
  
    complex_return.real = a.real + b.real;
    complex_return.imaginary = a.imaginary + b.imaginary;
    
    return complex_return;
}  
