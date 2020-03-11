#include <iostream>

using namespace std;

int main(void)
{
	return 0;
}

/*
	Returning a Pointer from a Function:
	-	Functions can also return pointers.
		type *function();

	- Should return pointers to:
		- Memory dynamically allocated in the function 
		- To data that was passed in
	- Never return a pointer to a local function variable !

	Example: 
		- Returning a parameter
			int *largest_int( int *int_ptr1, int *int_ptr2 ){
				if( *int_ptr1 > int *int_ptr2 ){
					return int_ptr1;
				} else {
					return int_ptr2;
				}
			}

			// calling function 
			int main(void)
			{
				int a { 100 };
				int b { 200 };

				int *largest_ptr { nullptr };
				largest_ptr = largest_int( &a, &b ); // pass in addresses
				cout << *largest_ptr << endl; // 200
		
				return 0;
			}

	Returning dynamically allocated memory: 
		int *create_array( size_t size, int init_value = 0 ){
			int *new_storage { nullptr };

			new_storage = new int[size];
			for (size_t i { 0 } ; i < size ; ++i){
				*(new_storage + i) = int_value;
			}

			return new_storage;
		}

		int main(void)
		{
			int *my_array; // will be allocated by the function
			my_array = create_array( 100, 200 ); // create the array

			// use array

			delete [] my_array; // free storage allocated
			return 0;
		}

	NEVER return a pointer to a local variable: 
		int *dont_do_this(){
			int size{};
			return &size;
		}

		int *or_this(){
			int size{};
			int *int_ptr {&size};
			return int_ptr;
		}
*/