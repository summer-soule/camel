/*
 *
 * Task:
 *		State whether each of the following statements
 *		is true or false. Justify each answer.
 *
 *		(a) Every variable with static storage duration has file scope.
			false
			static inside block has block scope

 *		(b) Every variable declared inside a function has no linkage.
 *			false
 *				static and non-static variables inside block has internal
 *				and external linkage respectively
 *
 *		(c) Every variable with internal linkage has static storage duration.
 *			true
 *				static (outside block)
 *				extern (outside block & static)
 *				extern (inside block & static)
 *
 *		(d) Every parameter has block scope.
 *			true
 *				same as auto variables
 *			
 *
 * Date: 2025-08-27
 * Time: 11:52 AM
 *
 */
