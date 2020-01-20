#include <iostream>

using namespace std;

int main(void)
{
	
	return 0;
}


/*
	Inline functions: 
		- Function calls have a certain amount of overhead
		- You saw what happens on the call stack 
		- Sometimes we have simple functions
		- We can suggest to the compiler to compile them 'inline'
			- Avoid function call overhead 
			- Generate inline assembly code
			- Faster
			- Could cause code bloat
		- Compilers optimizations are very sophisticated 
			- Will likely inline even without your suggestion
			
	
	Example of inline function:
		
		inline int add_numbers( int a, int b ){
			return a + b;
		}
		
		int main(void)
		{
			int result { 0 };
			result = add_numbers(100, 200); // call
			return 0;
		}
*/
