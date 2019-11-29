#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void)
{
  string unformatted_full_name {"StephenHawking"};
  string formatted_full_name {};
  string first_name { unformatted_full_name.substr( 0, 7 ) };
  string last_name { unformatted_full_name.substr( 7, 13 ) };
  cout << "First name: " << first_name << endl;
  cout << "Last name: " << last_name << endl;

  formatted_full_name = first_name + last_name;
  formatted_full_name.insert(7, " ");

  cout << "Formatted full name: " << formatted_full_name << endl;

  

  return 0;
}

/*
  Using C++ Strings - Exercise 1

  In this exercise you will create a progam that will be used to reformat a name
  so that it can be read more easily.

  The string variable 'unformatted_full_name' is comprised of two substrings,
  'first_name' and 'last_name' in that order. Each subtring begins with a
  capital letter.

  Begin by declaring and initializing the string variable 'first_name' from the
  string variable 'unformatted_full_name' remembering that when initializing
  from another string, the first integer within the curly brackets represents
  the starting index of the subtring you wish to copy and the second integer
  represents the length of the substring. - done

  Next, declare and initialize the string variable 'last_name' by using the
  assignment operator = and the string function substr on the string variable
  unformatted_full_name. - done
  
  Next, declare and initialize the string variable formatted_full_name. This
  should be done through the use of the concentration operator '+' by
  concatenating the string variables 'first_name' and 'last_name' in that order,
  and then assigning the concatenated string to 'formatted_full_name' using the
  assignment operator '='.

  Now, the string variable 'formatted_full_name' contains the string
  "StephenHawking". We see the string is no more formatted than the original
  string variable 'unformatted_full_name' and that is because the addition
  operator '+' does not add whitespace between strings when concatening them.

  Fortunately, we can use the string function insert on the string variable
  'formatted_full_name' to insert a whitespace between the substrings such that
  'formatted_full_name' will then contain the string "Stephen Hawking".
*/ 