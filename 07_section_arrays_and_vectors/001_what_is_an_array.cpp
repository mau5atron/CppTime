#include <iostream>
#include <iomanip>

int main(void)
{
  /*
    What is an array? 
    - Compound data type or data structure
    - Collection of elements 
    - All elements are of the same type 
    - Each element can be accessed directly 

    Array characteristics: 
    - Fixed size
    - Elements are all the same type 
    - Stored contiguously in memory 
    - Individual elements can be accessed by their position or index 

    - First element is at index 0
    - Last element is at index size - 1

    - No checking to see if you are out of bounds 

    - Always initialize arrays
    - Very efficient 
    - Iteration (looping) is often used to process
  */

  // Declaring arrays 
	/*
		Element_Type array_name [constant number of elements] {optional: initilization list}
	*/ 

	int test_scores [5];
	int high_score_per_level [10];
	const double days_in_year {365};
	double high_temps [days_in_year];

	// Examples 	
	// initialized array 
	int test_scores [5] {100, 99, 89, 75, 80};

	// initilize with 3 and 5, remaining elements in arr are 0
	int high_scores_per_level [10] {3, 5} 

	const double days_in_year {365};
	double high_temps [days_in_year]{0}; // array size 365-1 : all initialized to zero 

	// size automatically calculated
	int arr []{1, 2, 3, 4};

	// Changing the contents of the array
	int test_scores [5]{100, 98, 87, 90, 55};
	cin >> test_scores[0]; // asking for user input into 0-index
	cin >> test_scores[1];
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];

	test_scores[0] = 90; // assigning 90 to 0-index
  return 0;
}