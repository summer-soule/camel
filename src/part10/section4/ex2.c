/*
 *
 * Task: The following program outline shows only function definitions and
 * variable declarations.
 *
 * 	int b, c;
 *
 * 	void f(void)
 * 	{
 * 		int b, d;
 * 	}
 *
 * 	void g(int a)
 * 	{
 * 		int c;
 * 		{
 * 			int a, d;
 * 		}
 * 	}
 *
 * 	int main(void)
 * 	{
 * 		int c, d;
 * 	}
 *
 * For each of the following scopes, list all variable and parameter names
 * visible in that scope. If there's more than one variable or parameter with
 * the same name, indicate which one is visible.
 *
 * (a) The f function
 * 	   > variables : local b, d
 * 	   > parameters:
 * (b) The g function
 * 	   > variables : extern b, (local to g()) c
 * 	   > parameters: a
 * (c) The block in which a and d are declared
 * 	   > variables : extern b, (local to g()) c, a, d
 * 	   > parameters: a
 * (d) The main function
 * 	   > variables : extern b, (local to main()) c, d
 * 	   > parameters: a
 *
 * Date: 2025-03-31
 * Time: 11:53 AM
 *
 */
