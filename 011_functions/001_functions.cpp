#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  Functions: 
    - definition 
    - prototype 
    - Parameters and pass-by-value
    - 'return' statement 
    - default parameter values
    - overloading
    - passing arrays to function 
    - pass-by-reference 
    - inline functions
    - auto return type
    - recursive functions

  What is a function?

  C++ programs: 
    - C++ Standard Libraries (functions and classes)
    - Third-party libraries (functions and classes)
    - Our own functions and classes

  Functions allow the modularization of a program 
    - Separate code into logical self-contained
    - These units can be reused 

  Regular step by step: 

  int main(){
    // read input
      statement
      statement
      statement
    // process input 
      statement
      statement
      statement
    // provide output
      statement
      statement
      statement
    
    return 0;
  }

  Modularized code: 
  
  int main(){
    // read input 
    read_input()

    // process input
    process_input()

    // provide output
    provide_output()

    return 0;
  }

  Functions make our code: 
    - More modular
    - More readable
    - More maintainable 
    - Easier to rewrite 
    - Easier to reuse
  
  ----------------------------------------------------
  Boss/Worker analogy
  - Write your code to the function specification 
  - Understand what the function does 
  - Understand what information the function needs 
  - Understand what the function returns
  - Understand any errors tje function my produce
  - Understand any performance constraints
  - Don't worry about how the function works internally 
    - Unless you are the one writing the function :p

  Example: <cmath>
    - Common mathematical calculations
    - Global functions called as: 

  function_name(argument){
    function_name(argument1, argument2){
      cout << sqrt(400.0) << endl; // 20.0
      double result;
      result = pow(2.0, 3.0); // 2.0^3.0
    }
  }

  User-defined functions: 

  /
    This is a function that expects two integers a and b. It calculates the sum
    of a and b and returns it to the caller. Note that we specify that the
    function returns an int.
  /

  int add_nums(int a, int b){
    return a + b;
  }

  // I can call the function and use th value that it returns

  cout << add_numbers(20, 40);
  
*/ 