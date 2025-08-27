/*
 *
 * Task:
 *		List the storage duration (static or automatic), scope
 *		(block or file), and linkage (internal, external, or none)
 *		of each variable and parameter in the following file:
 *
 *		extern float a;
 *
 *		void f(register double b)
 *		{
 *			static int c;
 *			auto char d;
 *		}
 *
 *		A:
 *
 *		extern float a;
 *			storage duration: static
 *			scope: external
 *			linkage: global
 *
 *		void f(register double b) {}
 *			storage duration: auto
 *			scope: file
 *			linkage: external
 *
 *		register double b
 *			storage duration: auto
 *			scope: block
 *			linkage: no linkage
 *
 *		static int c;
 *			storage duration: static
 *			scope: block
 *			linkage: no linkage
 *
 *		auto char d;
 *			storage duration: auto
 *			scope: block
 *			linkage: no linkage
 *
 * Date: 2025-08-26
 * Time: 09:35 PM
 *
 */
