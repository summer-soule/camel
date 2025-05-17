/*
 *
 * Task:
 *		Assume that the fraction structure contains two members:
 *		numerator and denominator (both of type int). Write
 *		functions that perform the following operations on fractions
 *
 *		(a)	Reduce the fraction f to lowest terms.
 *
 *			Hint: To reduce a fraction to lowest terms, first
 *			compute the greatest common divisor (GCD) of the
 *			numerator and denominator. Then divide both the
 *			numerator and denominator by the GCD.
 *
 *		(b)	Add the fractions f1 and f2.
 *		(c) Subtract the fraction f2 from the fraction f1.
 *		(d) Multiply the fractions f1 and f2.
 *		(e)	Divide the fraction f1 by the fraction f2.
 *
 *		The fractions f, f1, and f2, will be arguments of type
 *		struct fraction; each function will return a value of
 *		type struct fraction. The fractions returned by the
 *		functions in parts (b)-(e) should be reduced to lowest
 *		terms.
 *
 *		Hint: You may use the function from part (a) to help
 *		write the functions in parts (b)-(e).
 *
 * Date: 2025-05-17
 * Time: 02:19 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct fraction {
	int numerator, denominator;
};

int gcd(int a, int b);
struct fraction frac_red(struct fraction f);
struct fraction frac_add(struct fraction f1, struct fraction f2);
struct fraction frac_sub(struct fraction f1, struct fraction f2);
struct fraction frac_mul(struct fraction f1, struct fraction f2);
struct fraction frac_div(struct fraction f1, struct fraction f2);

int main(void) {
    struct fraction a = {.numerator = 2, .denominator = 5};
    struct fraction b = {.numerator = 2, .denominator = 8};

    printf("frac_red(%d/%d): %d/%d\n",
           b.numerator, b.denominator,
           frac_red(b).numerator, frac_red(b).denominator);

    printf("frac_add(%d/%d + %d/%d): %d/%d\n",
           a.numerator, a.denominator,
           b.numerator, b.denominator,
           frac_add(a, b).numerator,
           frac_add(a, b).denominator);
    
    printf("frac_sub(%d/%d - %d/%d): %d/%d\n",
           a.numerator, a.denominator,
           b.numerator, b.denominator,
           frac_sub(a, b).numerator,
           frac_sub(a, b).denominator);

    printf("frac_mul(%d/%d * %d/%d): %d/%d\n",
           a.numerator, a.denominator,
           b.numerator, b.denominator,
           frac_mul(a, b).numerator,
           frac_mul(a, b).denominator);

    printf("frac_div(%d/%d / %d/%d): %d/%d\n",
           a.numerator, a.denominator,
           b.numerator, b.denominator,
           frac_div(a, b).numerator,
           frac_div(a, b).denominator);
    
	exit(EXIT_SUCCESS);
}

int gcd(int a, int b) {
    if (b != 0)
		return gcd(b, a % b);
    else
        return a;
}    

struct fraction frac_red(struct fraction f) {
	struct fraction frac_ret;
    int g = gcd(f.numerator, f.denominator);
    frac_ret.numerator = f.numerator / g;
    frac_ret.denominator = f.denominator / g;
    return frac_ret;
}

struct fraction frac_add(struct fraction f1, struct fraction f2) {
    struct fraction frac_ret;
    frac_ret.numerator = f1.numerator * f2.denominator +
                         f2.numerator * f1.denominator;
    frac_ret.denominator = f1.denominator * f2.denominator;
	return frac_ret;    
}

struct fraction frac_sub(struct fraction f1, struct fraction f2) {
    struct fraction frac_ret;
    frac_ret.numerator = f1.numerator * f2.denominator -
                         f2.numerator * f1.denominator;
    frac_ret.denominator = f1.denominator * f2.denominator;
    return frac_ret;
}
struct fraction frac_mul(struct fraction f1, struct fraction f2) {
    struct fraction frac_ret;
    frac_ret.numerator = f1.numerator * f2.numerator;
    frac_ret.denominator = f1.denominator * f2.denominator;
    return frac_ret;
}

struct fraction frac_div(struct fraction f1, struct fraction f2) {
    struct fraction frac_ret;
    frac_ret.numerator = f1.numerator * f2.denominator;
    frac_ret.denominator = f1.denominator * f2.numerator;
    return frac_ret;
}        
