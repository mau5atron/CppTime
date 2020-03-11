#include <iostream>
#include <string>

using namespace std;

void double_data( int *int_ptr );
void swap(int *a, int *b);
void double_data( int *int_ptr ){
	*int_ptr *= 2;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int value { 10 };
	int *int_ptr { nullptr };
	string spacing { "------------------------" };
	cout << "Doubling value: " << endl;
	cout << "Value: " << value << endl;
	double_data( &value );
	cout << "Value doubled: " << value << endl;
	cout << spacing << endl;
	
	int_ptr = &value;
	double_data(int_ptr);
	cout << "Value doubled again: " << value << endl;
	cout << spacing << endl;
	cout << "Swaping value: " << endl;
	
	int x { 100 }, y { 200 };
	cout << "\nx: " << x << endl;
	cout << "y: " << y << endl;
	swap(&x, &y);
	cout << "\nx: " << x << endl;
	cout << "y: " << y << endl;
	return 0;
}