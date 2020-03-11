#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{ 
  char first_name[20]{ "Bjarne" };
  char last_name[20]{ "Stroustrup" };
  char whole_name[50]{};
  size_t first_name_length { strlen( first_name ) };
  size_t last_name_length { strlen( last_name ) };
  size_t whole_name_length {};

  strcpy(whole_name, first_name);
  strcat(whole_name, " ");
  strcat(whole_name, last_name);

  whole_name_length = strlen(whole_name);

  cout << "First name: " << first_name << " is " << first_name_length << " characters long." << endl;
  cout << "Last name: " << last_name << " is " << last_name_length << " characters long." << endl;
  cout << "Whole name: " << whole_name << " is " << whole_name_length << " characters long." << endl;
  
  return 0;
}

/*
  Coding Exercise 18: Using C-style strings

  In this exercise you will create a program that determines the length of a
  first name and last name individually and then the length of the entire name
  through the use of the C-style string functions 'strlen', 'strcpy', 'strcat'.

  Begin by declaring and initializing the C-style string variable first_name to
  contain "Bjarne". - done

  Now, declare and initialize a second C-style string variable last_name to
  contain "stroustrup". - done

  You must declare a third C-style string variable whole_name but do not
  initialize it yet. Remember that the variable whole_name must be large enough
  to contain the first and last name with no whitespaces. - done

  Now, by using the C-style string function strlen, declare and initialize the
  variable first_name_length to contain the length of the first_name string and
  variable last_name_length to contain the length of last_name string. - done

  Using the C-style string function strcpy, copy the first_name string into the
  whole_name string variable. - done

  Now, by using the C-style string function strcat, concatenate the last_name
  string at the end of the whole_name string. - done

  Finally, by using the C-style string function strlen, declare and initialize
  the variable whole_name_length. - done
*/