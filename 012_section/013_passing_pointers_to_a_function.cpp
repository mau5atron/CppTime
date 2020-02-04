#include <iostream>

using namespace std;

int main(void)
{
	
	return 0;
}

/*
	Passing pointers to a function:
		- Pass-by-reference with pointer parameters
		- We can use pointers and the dereference operator 
		to achieve pass-by-reference
		- The function parameter is a pointer
		- The actual parameter can be a pointer or address of a variable
		
	Pass-by-reference with pointer - defining the function 
	
		void double_data( int *int_ptr );
		void double_data(int *int_ptr){
			*int_ptr *= 2;
			// also as *int_ptr = *int_ptr * 2;
		}
		
	Pass-by-reference with pointers - calling the function 
	
		int main(void)
		{
			int value { 10 };
			cout << value << endl; // 10
			double_data( &value );
			cout << value << endl; // 20
		}
*/