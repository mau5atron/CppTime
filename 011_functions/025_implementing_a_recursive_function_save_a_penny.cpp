#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int function_activation_count { 0 };

double a_penny_doubled_everyday(int days, double penny);

double a_penny_doubled_everyday(int days, double penny){
	function_activation_count++;
//	wrong
//	for ( int i { 1 } ; i < days ; i++ ) {	
//		cout << "Penny: " << penny << endl;
//		penny *= 2;
//	}
	
	if(days <= 1){
		return penny;
	}
	
	return a_penny_doubled_everyday(--days, penny * 2);
}

int main(void)
{
	double total_amount;
	int days { 18 };
	double penny { 0.01 };
	total_amount = a_penny_doubled_everyday(days, penny);
	
	cout 
	<< "If I start with a penny and doubled it every day for 18 days, I will have $" 
	<< setprecision(10) 
	<< total_amount 
	<< endl;
	
	cout << "Function activation count: "  << function_activation_count << endl;
	return 0;
}

/*
	Implementing a Recursive Function - Save a Penny:
		- In this exercise you will create a program that calculates the total_amount
		of money that will be accumulated if you start with a penny and double it everyday
		for n number of days.
		
		E.g.
		
		Day 1: $0.01
		Day 2: $0.02
		Day 3: $0.04
		...
		...
		Day 16: $327.68
		Day 17: $655.36
		Day 18: $1310.72
		
		- For this program, assume that all money will be represented as a
		a double value and so a penny will be represented as 0.01.
		
		- Begin by completing the function prototype a_penny_doubled_everyday
		which is passed an int and a double.
		
		- Now that the function prototype is declared, at the bottom of the file define the function.
		
		- The function should return the 'total_amount' accumulated after 'n' number of days
		
		- For example: 
			- If n = 18, the function should return 1310.72.
			- The function should be able to calculate the 'total_amount' for any 
			number of days starting with any amount however the default amount should be a 
			penny.
			
			- Now, from the function body of amount_calculated, declare and initialize the variable 
			total_amount by calling the 'a_penny_doubled_everyday' function for n = 25 days
			
			- If you get an error such as , "Oops, there was a problem on our end.". This may
			mean that you have inifinite recursion in youe solution. Make sure your logic checks 
			for a base case and does not recurse forever.
*/