#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1( int &num );
void pass_by_ref2( string &s );
void pass_by_ref3( vector<string> &v );
void print_vector( const vector<string> &v ); // const

void pass_by_ref1( int &num ){
	num = 1000;
}

void pass_by_ref2( string &s ){
	s = "Changed";
}

void pass_by_ref3( vector<string> &v ){
	v.clear();
}

void print_vector( const vector<string> &v ){
	for ( auto str_el: v) {
		cout << str_el << " ";
	}
	
	cout << endl;
}

int main(void)
{
	int num { 10 };
	int another_num { 20 };
	
	cout << "Num before calling pass_by_ref1: " << num << endl;
	pass_by_ref1(num);
	cout << "Num after calling pass_by_ref1: " << num << endl;
	
	cout << "\nAnother num before calling pass_by_ref1: " << another_num << endl;
	pass_by_ref1(another_num);
	cout << "Another_num after calling pass_by_ref1: " << another_num << endl;
	
	string name { "Gabriel" };
	cout << "\nName before calling pass_by_ref2: " << name << endl;
	pass_by_ref2(name);
	cout << "Name after calling pass_by_ref2: " << name << endl;
	
	vector<string> stooges { "Larry", "Moe", "Curly" };
	cout << "\nStooges before calling pass_by_ref3" << endl;
	print_vector(stooges);
	pass_by_ref3(stooges);
	cout << "Stooges after calling passs_by_ref3: " << endl;
	print_vector(stooges);
	
	return 0;
}

/*
	Pass by refernce: 
	
		- Sometimes we want to be able to change the actual parameter from within
		the function body.
		
		- In order to achieve this we need the location or address of the actual parameter.
		
		- We saw how this is the effect with array, but what about other variable types? 
		
		- We can use reference parameters to tell the compiler to pass in a reference to
		the actual parameter.
		
		- The formal parameter will now be an alias for the actual parameter.
	
		Example: 
			adding & in from of param name is a reference or alias to original pass in
			
			void scale_number(int &num); // prototype
			
			int main(void)
			{
				int number {1000};
				scale_numbers(100);
				cout << number << endl;
				return 0;
			}
			
			void scale_number(int &num){
				if(num > 100){
					num = 100; // checks if greater
				}
			}
		
		
		
		Another Example: 
			
			void swap(int &a, int &b);
			
			int main(void){
				int x{10}, y{20};
				cout << x << " " << y << endl; // 10 20
				swap(x, y);
				cout << x << " " << y << endl; // 20 10
				return 0;
			}
			
			void swap(int &a, int &b){
				int temp = a;
				a = b;
				b = temp;
			}
			
		
		Vector Example - pass by value
			- in this example we pass a vector by reference
			- to make sure the contents of the vector do not change, 
			we pass in the vector as const.
			- doing reference vs passing in full value is more efficient.
			
			void print(const std::vector<int> &v);
			
			int main(void)
			{
				std::vector<int> data {1, 2, 3, 4, 5};
				print(data); // 1 2 3 4 5
				return 0;
			}
			
			void print(const std::vector<int> &v){
				v[0] = 200; // error
				for(auto v_el : v){
					cout << v_el << endl;
				}
			}
			
		Note:
			- Think of a reference as an alias of the actual parameter.
*/
