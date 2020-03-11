#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*  
  Function Parameters: 
  - When we call a function we can pass in data to that function
  - In the function call they are called arguments
  - In the function definition they are called parameters
  - They must match in number, order, and in type

  Example: 

  int add_numbers(int, int); // prototype

  int main(void)
  {
    int result { 0 };
    result = add_numbers(100, 200); // call
    return 0;
  }

  int add_numbers(int a, int b){ // definition
    return a + b;
  }

  Pass-by-value: 

  - When you pass data into a function it is passed-by-value
  - A copy of the data is passed to the function 
  - Whatever changes you make to the parameter in the function does NOT affect
    the argument that was passed in
  
  Formal vs. Actual Parameters
    - Formal parameters - the parameters defined in the function header 
    - Actual parameters - the parameter used in the function call, the arguments
  
  Example: 

    void param_test(int formal){ // formal is a copy of actual
      cout << formal << endl; // 50 
      formal = 100; // only changes the local copy
      cout << formal << endl; // 100
    }

    int main()
    {
      int actual {50};
      cout << actual << endl; // 50
      param_test(actual); // pass in 50 to param_test
      cout << actual << endl; // 50 - did not change
      return 0;
    }

  Function Return Statement:
    - If a function returns a value then it must use a 'return' statement that
      returns a value.
    - If a function does not return a value (void) then the return statement is
      optional
    - 'return' statement immediately exits the function
    - We can have multiple 'return' statements in a function
      - Avoid many return statements in a function 
    - The return value is the result of the function call
*/ 