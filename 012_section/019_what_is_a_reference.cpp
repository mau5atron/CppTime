#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
  int num { 100 };
  int &ref { num };

  cout << "num: " << num << endl; // 100
  cout << "num ref: " << ref << endl; // 100

  num = 200;
  cout << "Changed num to 200...." << endl;
  cout << "num: " << num << endl;
  cout << "num ref: " << ref << endl;

  ref = 300;
  cout << "Changed ref to 300..." << endl;
  cout << "num: " << num << endl;
  cout << "num ref: " << ref << endl;
  cout << "Reference with vectors examples: " << endl;
  vector<string> names { "Larry", "Moe", "Joe" };
  for( auto v_el : names ){
    v_el = "Funny"; // only changes the copy
  }

  for( auto v_el : names ){
    cout << "Name: " << v_el << endl; // no changes
  }

  // actual changes using references
  for( auto &v_el : names ){
    v_el = "Funny"; // actual change to each element
  }

  for( auto v_el : names ){
    cout << "name: " << v_el << endl;
  }

  // using constants to prevent changes to the vector
  vector<string> names2 { "Larry", "Moe", "Joe" };
  for( auto const &v_el : names ){
    v_el = "Funny"; // compiler error
  }

  for( auto &v_el : names ){
    cout << "name: " << v_el << endl;
  }
  return 0;
}

/*
  What is a reference?:
  - An alias for a variable
  - Cannot be null
  - Once initialized cannot be made to refer to a different variable 
  - Very useful as function parameters
  - Might be helpful to think of a reference as a constant pointer that is
    automatically dereferenced when used
  
  Uses for references: 
    - Using references in a range-based for loop
      vector<string> names { "Larry", "Moe", "Joe" };

      for( auto v_el : names ){ // this makes a copy of each element
        v_el = "Funny"; // only changes the copy
      }

      for( auto v_el : names ){
        cout << "name: " << v_el << endl; // Larry, Moe, Joe, did not change
      }

      Example where we can actually change the variable names instead of just
      changing the copy:

      vector<string> names { "Larry", "Moe", "Joe" };
      for( auto &v_el : names ){
        v_el = "Funny"; // changes the actual
      }

      for( auto v_el : names ){
        cout << "name: " << endl; // Funny, Funny, Funny - actually changed values
      }

      Example where we are using reference with a const that prevents the values
      in the variable from being changed: 

      vector<string> names { "Larry", "Moe", "Joe" };
      for( auto const &v_el : names ){
        v_el = "Funny"; // compiler error
      }

  Reference examples above in main(); ^ 
*/ 