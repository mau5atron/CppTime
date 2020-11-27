#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string print_guest_list( const string &guest_1, const string &guest_2, const string &guest_3 );
void clear_guest_list( string &guest_1, string &guest_2, string &guest_3 );

string print_guest_list( const string &guest_1, const string &guest_2, const string &guest_3 ){
	cout << guest_1 << "\n" << guest_2 << "\n" << guest_3 << endl;
	string test_1 = typeid(guest_1).name();
	string test_2 = typeid(guest_2).name();
	string test_3 = typeid(guest_3).name();
	return test_1 + test_2 + test_3;
}

void clear_guest_list( string &guest_1, string &guest_2, string &guest_3 ){
	guest_1 = " ";
	guest_2 = " ";
	guest_3 = " ";
}


int main(void)
{
	string guest_1 { "Gabriel" };
	string guest_2 { "Larry" };
	string guest_3 { "Jorge" };
	print_guest_list(guest_1, guest_2, guest_3);
	clear_guest_list(guest_1, guest_2, guest_3);
	print_guest_list(guest_1, guest_2, guest_3);
	return 0;
}

/*
	Using pass by reference - Print a guest list 
	
		- In this exercise you will rewrite the previous Guest List exercise only this 
		time with the use of reference variables.
		- You will create a program that will be used to print the guest list to an 
		event an then clear the guest list.
		
		- Begin by completing the function prototypes 'print_guest_list' and 'clear_guest_list' 
		which are both passed three string reference variables. 
		- Ensure the variables cannot be modified within the 'print_guest_list' function by using
		the keyword 'const' in the parameter list.
		
		- Define both functions once the prototypes have been declared. 
		- Both the 'print_guest_list' and 'clear_guest_list' functions will be passed the string 
		arguments 'guest_1', 'guest_2', and 'guest_3' which have all been provided to you.
		
		- The 'print_guest_list' function should print the 'guest_list' in the order of 'guest_1', 
		'guest_2', 'guest_3', with each entry being printed on a new line. Ensure the newline '\n' 
		is printed after 'guest_3' either through the use of endl or the newline character.
		
		- The clear_guest_list function should replace the string values contained within 'guest_1', 
		'guest_2', 'guest_3' with the string value " ", a single space.
		
		- Now, from the function body of 'event_guest_list', make the following function calls in this order.
		
		print_guest_list
		clear_guest_list
		print_guest_list
		
		passing 'guest_1', 'guest_2', 'guest_3' with each function call.	
*/
