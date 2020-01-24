#include <iostream>

using namespace std;

int main(void)
{
  // Example 1: Dereferencing a pointer
  int score { 100 };
  int *score_ptr { &score };
  cout << "Example 1: \n" << endl;
  cout << "score: " << score << endl;
  cout << "score_ptr: " << *score_ptr << endl; // 100
  *score_ptr = 200;
  cout << "assigning 200 to *score_ptr..." << endl;
  cout << "score_ptr: " << *score_ptr << endl; // 200
  cout << "score: " << score << endl;
  cout << "----------------------\nExample 2: \n" << endl;
  
  // Access the data we're pointing to 

  double high_temp { 100.7 };
  double low_temp { 37.4 };
  double *temp_ptr { &high_temp };

  cout << *temp_ptr << endl; // 100.7
  temp_ptr = &low_temp;
  cout << *temp_ptr << endl; // 37.4

  // Example 3: 
  cout << "----------------------\nExample 3: \n" << endl;

  string name { "Frank" };
  string *string_ptr { &name };
  cout << "string ptr: " << *string_ptr << endl; // Frank
  name = "James";
  cout << "string ptr: " << *string_ptr << endl; // James

  return 0;
}

/*
  Dereferencing a Pointer: 

  Access the data we're pointing to - dereferencing a pointer
    - If score_ptr is a pointer and has a valid address
    - Then you can access the data at the address contained in the score_ptr
      using the dereferencing operator '*'

    
    Example: 

      Refer to example 1: 
*/ 
