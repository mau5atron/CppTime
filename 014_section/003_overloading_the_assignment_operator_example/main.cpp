#include <iostream>
#include <vector>
#include "Mystring.h"

using std::vector;

int main(void)
{
  Mystring a {"hello"}; // overloaded constructor
  Mystring b; // no args constructor
  b = a; // copy assignment
        // b.operator=(a)
  b = "This is a test"; // b.operator=("This is a test")

  // more examples

  Mystring empty; // no args constructor
  Mystring larry {"Larry"}; // overloaded constructor
  Mystring stooge {larry}; // copy copy constructor
  Mystring stooges; // no args constructor
  empty = stooge; // copy assignment

  empty.display(); // Larry : 5
  larry.display(); // Larry : 5
  stooge.display(); // Larry : 5
  empty.display(); // Larry : 5

  stooges = "Larry, Moe, Curly";
  stooges.display(); // Larry, Moe, Curly

  vector<Mystring> stooges_vec;
  stooges_vec.push_back("Larry");
  stooges_vec.push_back("Moe");
  stooges_vec.push_back("Curly");

  std::cout << "\nLoop 1: " << std::endl;
  // iterate through reference instead of making an copy and then iterating
  for(const Mystring &my_string_el : stooges_vec){
    my_string_el.display(); // Larry, Moe, Curly
  }

  std::cout << "\nLoop 2: " << std::endl;
  for(Mystring &my_string_el : stooges_vec){
    my_string_el = "Changed"; // copy assignment, deep copy
  }

  std::cout << "\nLoop 3: " << std::endl;
  for(const Mystring &my_string_el : stooges_vec){
    my_string_el.display(); // Changed, Changed, Changed
  }

  return 0;
}