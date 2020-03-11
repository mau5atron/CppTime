#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  When to use pointers vs. references parameters:

  - Pass-by-value
    - When the function does not modify the actual parameter, and
    - the parameter is small and efficient to copy like simple types (int, char,
      double,etc.)

  - Pass-by-reference using a pointer
    - When the function does modify the actual parameter, and
    - the parameter is expensive to copy, and
    - its ok to the pointer is allowed a nullptr value

  - Pass-by-reference using a const pointer to const
    - When the function does not modify the actual parameter
    - The parameter is expensive to copy
    - Its ok to the pointer is allowed a nullptr value
    - You dont want to modify the pointer itself
  - Pass-by-reference using a reference 
    - When the function does modify the actual parameter 
    - The parameter is expensive to copy
    - The parameter will never be nullptr
  - Pass-by-reference using a const reference
    - When the function does not modify the actual parameter 
    - The parameter is expensive to copy
    - The parameter will never be nullptr
*/