/*
 *
 * Task:
 *		(C99) Assume that the following variable declarations are in effect:
 *
 *		int i;
 *		float f;
 *		double d;
 *		long double ld;
 *		float complex fc;
 *		double complex dc;
 *		long double complex ldc;
 *
 *		Each of the following is an invocation of a macro in <tgmath.h>.
 *		Show what it will look like after preprocessing, when the macro
 *		has been replaced by a function from <math.h> or <complex.h>
 *
 *		(a) tan(i)
 *		(b) fabs(f)
 *		(c) asin(d)
 *		(d) exp(ld)
 *		(e) log(fc)
 *		(f) acosh(dc)
 *		(g) nexttoward(d, ld)
 *		(h) remainder(f, i)
 *		(i) copysign(d, ld)
 *		(j) carg(i)
 *		(k) cimag(f)
 *		(l) conj(ldc)
 *
 * Date: 2026-05-03
 * Time: 10:53 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <tgmath.h>
#include <complex.h>

/* ⡇⢸⣟⠄⠁⢸⡽⠖⠛⠈⡉⣉⠉⠋⣁⢘⠉⢉⠛⡿⢿⣿⣿⣿⣿ */
/* ⣷⣤⠄⣠⠖⠁⠄⠂⠁⠄⠄⠉⠄⠄⠎⠄⠠⠎⢐⠄⢑⣛⠻⣿⣿ */
/* ⣿⠓⠨⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠐⠅⠄⠉⠄⠗⠆⣸⣿⣿ */
/* ⣿⡣⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⢰⣤⣦⠄⠄⠄⠄⠄⠄⠄⡀⡙⣿ */
/* ⡛⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠔⠿⡿⠿⠒⠄⠠⢤⡀⡀⠄⠁⠄⢻ */
/* ⠄⠄⠄⠄⠄⠄⣠⡖⠄⠁⠁⠄⠄⠄⠄⠄⠄⠄⣽⠟⡖⠄⠄⠄⣼ */
/* ⠄⠄⠄⠄⠄⠄⢠⣠⣀⠄⠄⠄⠄⢀⣾⣧⠄⠂⠸⣈⡏⠄⠄⠄⣿ */
/* ⡞⠄⠄⠄⠄⠄⢸⣿⣶⣶⣶⣶⣶⡿⢻⡿⣻⣶⣿⣿⡇⠄⠄⠄⣿ */
/* ⡷⡂⠄⠄⠁⠄⠸⣿⣿⣿⣿⣿⠟⠛⠉⠉⠙⠛⢿⣿⡇⠄⠄⢀⣿ */
/* ⠃⠄⠄⠄⠄⠄⠄⣾⣿⣿⡿⠁⣀⣀⣤⣤⣤⣄⢈⣿⡇⠄⠄⢸⣿ */
/* ⠄⠄⠄⠄⠄⠄⠄⢻⣿⣿⣷⣶⣿⣿⣥⣬⣿⣿⣟⣿⠃⠄⠨⠺⢿ */
/* ⠄⠄⠄⠄⠄⠄⠄⣬⣸⡝⠿⢿⣿⡿⣿⠻⠟⠻⢫⡁⠄⠄⠄⡐⣾ */
/* ⠄⠄⠄⠄⠆⡐⡇⢿⣽⣻⣷⣦⣧⡀⡀⠄⠄⣴⣺⡇⠄⠁⠄⢣⣿ */

int main(void) {
	int i = 10;
	float f = 5.2f;
	double d = 3.0f;
	long double ld = 128;
	float complex fc = 10.0 + 0.3 * I;
	double complex dc = 2.0 + 3.5 * I;
	long double complex ldc = 128.5 + 50.0 * I;



	printf("(a) tan(i): %f\n", tan(i));
	printf("__builtin_tgmath (tanf, tan, tanl, ctanf, ctan, ctanl, ((i))));\n");

	printf("\n(b) fabs(f): %f\n", fabs(f));
	printf("__builtin_tgmath (fabsf, fabs, fabsl, cabsf, cabs, cabsl, ((f))));\n");

	printf("\n(c) asin(d): %f\n", asin(d));
	printf("__builtin_tgmath (asinf, asin, asinl, casinf, casin, casinl, ((d))));\n");

	printf("\n(d) exp(ld): %Lf\n", exp(ld));
	printf("__builtin_tgmath (expf, exp, expl, cexpf, cexp, cexpl, ((ld))));\n");

	float complex fctmp = log(fc);
	printf("\n(e) log(fc): %f + i%f\n", creal(fctmp), cimag(fctmp));
	printf("__builtin_tgmath (logf, log, logl, clogf, clog, clogl, ((fc)));\n");

	double complex dctmp = acosh(dc);
	printf("\n(f) acosh(dc): %f + i%f\n", creal(dctmp), cimag(dctmp));
	printf("__builtin_tgmath (acoshf, acosh, acoshl, cacoshf, cacosh, cacoshl, ((dc)));\n");

	printf("\n(g) nexttoward(d, ld): %f\n", nexttoward(d, ld));
	printf("__builtin_tgmath (nexttowardf, nexttoward, nexttowardl, ((d)), ((ld))));\n");

	printf("\n(h) remainder(f, i): %f\n", remainder(f, i));
	printf("__builtin_tgmath (remainderf, remainder, remainderl, ((f)), ((i))));\n");

	printf("\n(i) copysign(d, ld): %Lf\n", copysign(d, ld));
	printf("__builtin_tgmath (copysignf, copysign, copysignl, ((d)), ((ld))));\n");

	printf("\n(j) carg(i): %f\n", carg(i));
	printf("__builtin_tgmath (cargf, carg, cargl, ((i))));\n");

	printf("\n(k) cimag(f): %f\n", cimag(f));
	printf("__builtin_tgmath (cimagf, cimag, cimagl, ((f))));\n");

	long double complex ldtmp = conj(ldc);
	printf("\n(l) conj(ldc): %Lf + i%Lf\n", creal(ldtmp), cimag(ldtmp));
	printf("__builtin_tgmath (conjf, conj, conjl, ((ldc)));\n");

	exit(EXIT_SUCCESS);
}
