/*
 *
 * Project 2.
 *
 * Task:
 *		Write a program that obtains the name of a locale from
 *		the command line and then displays the values stored in
 *		the corresponding lconv structure. For example, if the
 *		locale is "fi_FI" (Finland), the output of the program
 *		might look like this:
 *
 *		decimal_point = ","
 *		thousandssep = " "
 *		grouping = 3
 *		mon_decimal_point = ","
 *		mon_thousands_sep = " "
 *		mon_grouping = 3
 *		positive_sign = ""
 *		negative_sign = "-"
 *		currency_symbol = "EUR"
 *		frac_digits = 2
 *		p_cs_precedes = 0
 *		n_cs_precedes = 0
 *		p_sep_by_space = 2
 *		n_sep_by_space = 2
 *		p_sign_posn = 1
 *		n_sign_posn = 1
 *		int_curr_symbol = "EUR "
 *		int_frac_digits = 2
 *		int_p_cs_precedes = 0
 *		int_n_cs_precedes = 0
 *		int_p_sep_by_space = 2
 *		int_n_sep_by_space = 2
 *		int_p_sign_posn = 1
 *		int_n_sign_posn = 1
 *
 *		For readability, the characters in grouping and mon_grouping
 *		should be displayed as decimal numbers.
 *
 * Date: 2026-04-22
 * Time: 05:34 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {
	struct lconv *lc;

	if (argc != 2) {
		fprintf(stderr, "usage: %s locale\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (setlocale(LC_ALL, argv[1]) == NULL) {
		perror("setlocale");
		exit(EXIT_FAILURE);
	}

    lc = localeconv();

	printf("decimal_point = \"%s\"\n", lc->decimal_point);
	printf("thousandssep = \"%s\"\n", lc->thousands_sep);
	printf("grouping = %d\n", *lc->grouping);
	printf("mon_decimal_point = \"%s\"\n", lc->mon_decimal_point);
	printf("mon_thousands_sep = \"%s\"\n", lc->mon_thousands_sep);
	printf("mon_grouping = %d\n", *lc->mon_grouping);
	printf("positive_sign = \"%s\"\n", lc->positive_sign);
	printf("negative_sign = \"%s\"\n", lc->negative_sign);
	printf("currency_symbol = \"%s\"\n", lc->currency_symbol);
	printf("frac_digits = %d\n", lc->frac_digits);
	printf("p_cs_precedes = %d\n", lc->p_cs_precedes);
	printf("n_cs_precedes = %d\n", lc->n_cs_precedes);
	printf("p_sep_by_space = %d\n", lc->p_sep_by_space);
	printf("n_sep_by_space = %d\n", lc->n_sep_by_space);
	printf("p_sign_posn = %d\n", lc->p_sign_posn);
	printf("n_sign_posn = %d\n", lc->n_sign_posn);
	printf("int_curr_symbol = \"%s\"\n", lc->int_curr_symbol);
	printf("int_frac_digits = %d\n", lc->int_frac_digits);
	printf("int_p_cs_precedes = %d\n", lc->int_p_cs_precedes);
	printf("int_n_cs_precedes = %d\n", lc->int_n_cs_precedes);
	printf("int_p_sep_by_space = %d\n", lc->int_p_sep_by_space);
	printf("int_n_sep_by_space = %d\n", lc->int_n_sep_by_space);
	printf("int_p_sign_posn = %d\n", lc->int_p_sign_posn);
	printf("int_n_sign_posn = %d\n", lc->int_n_sign_posn);

	exit(EXIT_SUCCESS);
}
