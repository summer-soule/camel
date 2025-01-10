//-----------------------------------------------------------------------------
//
// Task: For each of the following pairs of scanf format strings, indicate
// whether or not the two strings are equivalent. If they're not, show how they
// can be distinguished.
//
// (a) "%d"			versus " %d"
// 		equal: scanf skipping whitespaces even with "%d" format
//
// (b) "%d-%d-%d"	versus "%d -%d -%d"
// 		unequal: "%d-%d-%d"
// 					^--^------- first character after values MUST be the "-"
// 				 "%d -%d -%d"
// 				 	^---^------ can be 0 or unlimited white-space chars
//
// (c) "%f"			versus "%f "
//		equal: after value can be 0 or unlimited white-space chars
//
// (d) "%f,%f"		versus "%f, %f"
// 		equal:   "%f, %f"
// 				     ^--------- can be 0 or unlimited white-space char
//
// Date: 2025-1-10
// Time: 10:50 AM
//
//-----------------------------------------------------------------------------
