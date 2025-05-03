/*
 *
 * Task: The following questions refer to the program described in Exercise 5.
 *
 * 		 (a) Which files need to be compiled when the program is built
 * 		 	 for the first time?
 * 		 A:	 main.c f1.c f2.c
 * 		 (b) If f1.c is changed after the program has been built, which
 * 		 	 files need to be recompiled?
 * 		 A:	 f1.c
 * 		 (c) If f1.h is changed after the program has been built, which
 * 		 	 files need to be recompiled?
 * 		 A:	 main.c f1.c f2.c because all includes f1.h
 * 		 (d) If f2.h is changed after the program has been built, which
 * 		 	 files need to be recompiled?
 * 		 A:	 f1.c and f2.c which includes f2.h
 *
 * Date: 2025-05-03
 * Time: 11:18 AM
 *
 */
