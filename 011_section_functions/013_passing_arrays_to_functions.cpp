#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  Passing Arrays to Functions:
  - We can pass an array to a function by providing square brackets in the
    formal parameter description.
  
    void print_array(int numbers []);

  - The array elements are NOT copied.
  - Since the array name evaluates to the location of the array in memory - this
    address is what is copied.
  - So the function has no idea how many elements are in the array since all it
    knows is the location of the first element ( the name of the array ).
  
  Exmaple: 

  void print_array( int numbers [], size_t size );

  int main(void)
  {
    int my_numbersp[] {1, 2, 3, 4, 5};
    print_array(my_numbers);
    return 0;
  }

  void print_array( int numbers[], size_t size ){
    // doesnt know how many elements are in the array
    // we need to pass in the size  
    for (size_t i {0}; i < size; i++){
      cout << numbers[i] << endl;
    }
  }


  - Since we are passing the location of the array 
    - The function can modify the actual array! 
  
  void zero_array(int numbers[], size_t size){
    for (size_t i{0}; i < size; ++i){
      numbers[0] = 0; // zero out array element
    }
  }

  int main(void)
  {
    int my_numbers[]{ 1, 2, 3, 4, 5 };
    zero_array( my_numbers, 5 ); // my_numbers is now zeroes
    print_array( my_numbers, 5 ); // 0 0 0 0 0
    return 0;
  }


  // const parameters
  - We could tell the compiler that function parameters are const (read-only)
  - This could be useful in the print_array function since it should NOT modify
    the array.

  void print_array( const int numbers [], size_t size ){
    for (size_t i { 0 } ; i < size ; ++i ){
      cout << numbers[i] << endl;
      numbers[i] = 0;
      // any attempt to modify the array will result in a compiler error 
    }  
  }
*/  