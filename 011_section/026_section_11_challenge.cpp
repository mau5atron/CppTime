#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>

using namespace std;

void display_menu(void)
{
	string line {"--------------------------"};

	cout << "Section 9 Challenge\n" << line << endl;
	cout <<
	 "P - Print numbers\n"  <<
	 "A - Add a number\n" << 
	 "M - Display mean of the numbers\n" <<
	 "S - Display the smallest number\n" <<
	 "L - Display the largest number\n" << 
	 "Q - Quit\n" <<
	 line
	 << endl;
}

void return_formatted_list( vector<int> vec ){
	if( vec.size() == 0 ){
		cout << "[] - the list is empty." << endl;
	} 
		
	for( int i { 0 } ; i < vec.size() ; ++i ){
		if(i == 0){
			cout << "[";
		}
		cout << vec[i];
		if( ( i >= 0 ) && ( i < vec.size() - 1 ) ){
			cout << " ";
		}
		if( i == vec.size() - 1 ){
			cout << "]" << endl;
		}
	}
}

double return_mean_list( vector<int> vec ){
	int vec_size {};
	double vec_total {};
	double vec_mean {};

	if( vec.size() == 0 ){
		cout << "Unable to calculate the mean - no data." << endl;
	}

	vec_size = vec.size();

	for( auto vec_el : vec ){
		vec_total += vec_el;
	}

	vec_mean = vec_total / vec_size;
	return vec_mean;
}

void return_smallest_num( vector<int> vec ){
	if( vec.size() == 0 ){
		cout << "Unable to determine the smallest number - list is empty" << endl;
	} else {
		cout << "The smallest number is " << *min_element( vec.begin(), vec.end() ) << endl;
	}
}

void return_largest_num( vector<int> vec ){
	if( vec.size() == 0){
		cout << "Unable to determine the largest number - list is empty." << endl;
	} else {
		cout << "Largest number: " << *max_element( vec.begin(), vec.end() );
	}
}

void action_menu(void){
	string user_selection {};
	char first_char {};
	string user_selection_temp {};
	string what_to_do { "Enter your choice:" };
	string line {"\n--------------------------\n"};
	string incorrect_input { "Unknown selection, please try again." };
	vector<int> list {};
	int number_to_add {};
	
	do {
		display_menu();
		cout << what_to_do << endl << "\n> ";
		cin >> user_selection;
		transform( user_selection.begin(), user_selection.end(), user_selection.begin(), ::toupper );
		first_char = user_selection[0];
		if( first_char == 'Q' ){
			cout << "Goodbye..." << endl;
			break;
		}

		switch (first_char){
			case 'P':
				cout << "You chose P - Print Number" << endl;
				return_formatted_list(list);
				break;
			case 'A':
				cout << "You chose A - Add a Number" << endl;
				cout << "What would you like to add?" << endl << "\n> ";
				cin >> number_to_add;
				cout << "Adding " << number_to_add << " to list." << endl;
				cout << "Added " << number_to_add << endl;
				list.push_back(number_to_add);
				cout << "Your list - ";
				return_formatted_list(list);
				cout << endl;
				break;
			case 'M':
				cout << "You chose M - Display mean of the numbers" << endl;
				cout << fixed;
				cout << "Mean of list: " << setprecision(2) << return_mean_list( list ) << endl;
				break;
			case 'S': 
				cout << "You chose S - Display the smallest number" << endl;
				return_smallest_num( list );
				break;
			case 'L':
				cout << "You chose L - Display the largest number" << endl;
				return_largest_num( list );
				break;
			default:
				cout << "\n" << incorrect_input << endl;  
				break;
		}
		
		cout << line << endl;
	} while ( first_char != 'P' || first_char != 'A' || first_char != 'M' || first_char != 'S' || first_char != 'L' || first_char != 'Q');
}

void main_loop(void){
	action_menu();
}

int main(void){
	main_loop();
	return 0;
}

/*
	Section 11 Challenge:
		- Recall the challenge from section 9 below
		- Your challenge for section 11 is to modularize your
		solution to the Section 9 challenge by refactoring 
		your solution so that is uses functions.
		
		You decide how to modularize the program
		You can use my solution which is included in this file, or
		modularize your solution.
		
		Few hints: 
			- Create functions for each major function 
			- Keep the functions small
			- Remember the Boss/Worker analogy 
			- Keep the vector declaration in the main function and pass the vector object 
			to any function that requires it.
			
			DO NOT move the vector object outside the main and make it a global variable 
			
			- You can start by defining a function that displays the menu 
			- You can then define a function that reads the selection from the user and returns it in uppercase
			- Create functions for each menu option 
			- Create functions that display the list of numbers, calculates the mean and so forth.
			
		Take it one function at a time and take your time.


	ME: Don't have to update it because I was using functions :)
*/