#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  Overloading functions: 
  - We can have functions that have different parameter lists that have the same
    name.
  - Abstraction mechanism since we can just think 'print' for example.
  - A type of polymorphism 
    - We can have the same name work with different data types to execute
      similar behavior 
  - The compiler must be able to tell the functions apart based on the parameter
    lists and argument supplied.


  Example: 

  int add_numbers(int, int); // add ints 
  double add_numbers(double, double); // add doubles

  int main(void)
  {
    cout << add_numbers(10, 20) << endl; // integer
    cout << add_numbers(10.0, 20.0) << endl; // double
    return 0;
  }

  Example: 

  int add_numbers(int a, int b){
    return a + b;
  }

  double add_numbers(double a, double b){
    return a + b;
  }

  Example: 

  void display(int n);
  void display(double d);
  void display(std::string s);
  void display(std::string s, std::string t);
  void display(std::vector v);

  Return Type is not considered when a compiler is trying to determine which
  function to call: 

  int get_value();
  double get_value();

  // Error

  cout << get_value() << endl; // which one?
*/ 