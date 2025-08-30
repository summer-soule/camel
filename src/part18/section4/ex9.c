/*
 *
 * Task:
 *		Use a series of type definitions to simplify each of the
 *		declarations in Exercise 8.
 *
 *		(a) char (*x[10])(int);
 *			typedef char fx_t(int);
 *			typedef fx_t *fx_ptr_t;
 *			typedef fx_ptr_t fx_ptr_arr_t[10];
 *			fx_ptr_arr_t x;
 *
 *		(b) int (*x(int))[5];
 *			typedef int arr_t[5];
 *			typedef arr_t fx_t(int);
 *			fx_t *x;
 *
 *		(c) float *(*x(void))(int);
 *			typedef float *fx_t(int);
 *			typedef fx_t fx_fn_t(void);
 *			fx_fn_t *x;
 *
 *		(d) void (*x(int, void (*y)(int)))(int);
 *			typedef void fn_t(int);
 *			typedef void *fn_arg(int);
 *			typedef fn_t *fx_t(int, fn_arg);
 *			fx_t x;
 *
 * Date: 2025-08-28
 * Time: 02:26 PM
 *
 */
