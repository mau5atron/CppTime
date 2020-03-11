#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display( vector<string> );

void display( const vector<string> *const v ){
	// iteraing over vector string
	//	(*v)[0] = "Funny"; not allowed when const in front of vector
	for(auto v_el : *v){
		cout << "String: " << v_el << endl;
	}
	//	v = nullptr; not allowed when const in front of v
	cout << endl;
}

void display( int *array, int sentinel ){
	while(*array != sentinel ){
		cout << *array++ << " ";
	}
	
	cout << endl;
}

int main(void)
{
	// Example 1
	string spacing { "-------------" };
	cout << spacing << endl;
	vector<string> names { "Gabe", "Joe", "Moe" };
	display(&names);
	
	// Example 2
	cout << spacing << endl;
	int scores[] { 100, 98, 97, 85, -1 };
	display( scores, -1 );
	return 0;
}