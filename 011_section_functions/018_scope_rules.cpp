#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
	return 0;
}

/*
	Scope Rules: 
		- C++ uses scope rules to determine where an identifier can be
		used.
		- C++ uses static or lexical scoping 
		- Local or Block scope
		- Global scope
		
	Local or Block Scope:
		- Identifiers declared in a block {}
		- Function parameters have a block scope
		- Only visible within the block {} where declared 
		- Function local variables are only active while the function is executing 
		- Local variables are only active while the function is executing 
		- Local variables are NOT preserved between function calls
		- With nested blocks, inner blocks can 'see' but the other blocks cannot 'see' in.
		
	Static local variables: 
		- Declared with static qualifier 
			
			static int value { 10 };
		- Value IS preserved between function calls.
		- Only initialized the first time the function is called.
		
	Global Scope: 
		- Identifier declared outside any function or class
		- Visible to all parts of the program after the global identifier 
		has been declared.
		- Global constants are OK
		- Best practive - don't use global variables.
*/
