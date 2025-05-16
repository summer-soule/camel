/*
 *
 * Task:
 *		Repeat Exercise 3, but this time using a type named Complex.
 *
 * Date: 2025-05-16
 * Time: 11:19 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define PRINT_COMPLEX(complex) \
(printf(\
#complex ".real: %.2f\n"\
#complex ".imaginary: %.2f\n\n", complex.real, complex.imaginary))

typedef struct {
	double real, imaginary;
} Complex;

Complex make_complex(double a, double b);
Complex add_complex(Complex a, Complex b);

int main(void) {
	Complex c1, c2, c3;

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
Complex make_complex(double a, double b) {
	Complex complex;
    complex.real = a;
    complex.imaginary = b;
    return complex;
}

/*	(d)	Write a function named add_complex that adds the
		corresponding members of its arguments (both complex
		structures), then returns the result (another complex
		structure). */
Complex add_complex(Complex a, Complex b) {
	Complex complex_return;
  
    complex_return.real = a.real + b.real;
    complex_return.imaginary = a.imaginary + b.imaginary;
    
    return complex_return;
}  
