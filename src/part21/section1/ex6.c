/*
 *
 * Task:
 *		The <ctype.h> header usually defines most of its functions
 *		as macros as well. These macros rely on a static array that's
 *		declared in <ctype.h> but defined in a separate file. A portion
 *		of a typical <ctype.h> header appear below. Use this sample to
 *		answer the following questions.
 *
 *		(a) Why do the names of the "bit" macros (such as _UPPER) and
 *			the _ctype array begin with an underscore?
 *		(b) Explain what the _ctype array will contain. Assuming that
 *			the character set is ASCII, show the values of the array
 *			elements at positions 9 (the horizontal tab character),
 *			32 (the space character). 65 (the letter A), and 94
 *			(the ^ character). See Section 23.5 for a description
 *			of what each macro should return.
 *		(c) What's the advantage of using an array to implement
 *			these macros?
 *
 *		#define _UPPER		0x01	upper-case letter
 *		#define _LOWER		0x02	lower-case letter
 *		#define _DIGIT		0x04	decimal digit
 *		#define _CONTROL	0x08	control character
 *		#define _PUNCT		0x10	punctuation character
 *		#define _SPACE		0x20	white-space character
 *		#define _HEX		0x40	hexadecimal digit
 *		#define _BLANK		0x80	space character
 *
 *		#define isalnum(c)	(_ctype[c] & (_UPPER|_LOWER|_DIGIT))
 *		#define isalpha(c)	(_ctype[c] & (_UPPER|_LOWER))
 *		#define iscntrl(c)	(_ctype[c] & _CONTROL)
 *		#define isdigit(c)	(_ctype[c] & _DIGIT)
 *		#define isgraph(c)	(_ctype[c] &
 *							(_PUNCT|_UPPER|_LOWER|_DIGIT))
 *		#define islower(c)	(_ctype[c] & _LOWER)
 *		#define isprint(c)	(_ctype[c] &
 *							(_BLANK|_PUNCT|_UPPER|_LOWER|_DIGIT))
 *		#define ispunct(c)	(_ctype[c] & _PUNCT)
 *		#define isspace(c)	(_ctype[c] & _SPACE)
 *		#define isupper(c)	(_ctype[c] & _UPPER)
 *		#define isxdigit(c)	(_ctype[c] & (_DIGIT|_HEX))
 *
 * Answer:
 *		(a) These names reserved for use within the library;
 *			programs should never use names of this form for any purpose.
 *		(b) _ctype[] contain bit-fields representing type of character.
 *			_ctype[9] = 00100000
 *			_ctype[32] = 00100000
 *			_ctype[65] = 00000001
 *			_ctype[94] = 00010000
 *		(c) no calculations needed; no functions called = better performance
 *
 * Date: 2025-11-25
 * Time: 09:40 AM
 *
 */
