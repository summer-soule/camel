/*
 *
 * Task: Section 15.1 listed several advantages of dividing a program into
 * 		 multiple source files.
 *
 * 		 (a) Describe several other advantages.
 * 		 	 - Simplifies navigation through code and its understanding.
 * 		 	 - Porting functions and structures in other programs without
 * 		 	   writing them from scratch or copying by hand.
 * 		 	 - Speed up compiling couple of smaller files than one big.
 * 		 	 - Incapsulation of related to module details such as functions,
 * 		 	   structures or variables from user providing interface only and
 * 		 	   protecting its details from breaking.
 * 		 	 - Parallel program developing by allowing different people
 * 		 	   not blocking work of each other.
 * 		 	 - Simplifies testing.
 * 		 (b) Describe some disadvantages.
 * 		 	 - Difficulty of dependency management leading to
 * 		 	   cycle includes which brings compilation errors and
 * 		 	   makes use of "include guards" or "#pragma once"
 * 		 	   directives necessary.
 * 		 	 - Huge amount of object files increases linking time, because
 * 		 	   linker works in single thread.
 * 		 	 - Necessity of build system such as GNU Make, CMake, ninja or
 * 		 	   similar.
 * 		 	 - Increasing risks of code duplication.
 *			 - Name conflicts which means every function, global variable,
 *			   macro or structures must have unique name.
 *			 - Differences between object declaration and its definition
 *			   leads to difficult to catch errors on linking or runtime.
 *
 * Date: 2025-05-01
 * Time: 05:14 AM
 *
 */
