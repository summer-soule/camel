/*
 *
 * Task: Which of the following should not be put in a header file? Why not?
 *
 * 		 (a) Function prototypes - legit
 * 		 (b) Function definitions - strongly not recommended:
 * 		 	 Function definitins should not be put in a header file.
 * 		 	 If header file with function definition will be included
 * 		 	 two or more times anywhere, then linker will see two
 * 		 	 functions which leads to error on linking stage.
 * 		 (c) Macro definitions - legit
 * 		 (d) Type definitions - legit
 *
 * Date: 2025-05-02
 * Time: 05:00 AM
 *
 */
