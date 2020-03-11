#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
  int num { 10 };
  cout << "Value of num is: " << num << endl;
  cout << "sizeof of num is: " << sizeof(num) << endl;
  cout << "Address of num is: " << &num << endl;

  int *p; // pointer to an integer, there is garbage value
  cout << "\nValue of p is: " << p << endl;
  cout << "Address of p is: " << &p << endl;
  cout << "sizeof of p is: " << sizeof(p) << endl;

  p = nullptr; // zero out pointer 0x0
  cout << "\nValue of p is: " << p << endl;

  // second part

  int *p1 { nullptr };
  double *p2 { nullptr };
  unsigned long long *p3 { nullptr };
  vector<string> *p4 { nullptr };
  string *p5 { nullptr };
  // values are zeroed to 0x0
  cout << "\nsizeof p1 is: " << p1 << endl;
  cout << "sizeof p2 is: " << p2 << endl;
  cout << "sizeof p3 is: " << p3 << endl;
  cout << "sizeof p4 is: " << p4 << endl;
  cout << "sizeof p5 is: " << p5 << endl;

  // third part 

  int score { 10 };
  double high_temp { 100.7 };
  int *score_ptr { nullptr };

  score_ptr = &score; // assigning ptr to address of score
  cout << "\nValue of score is: " << score << endl;
  cout << "Address of score is: " << &score  << endl;
  cout << "Value of score ptr is: " << score_ptr << endl;

  // score_ptr = &high_temp; Compiler error

  return 0;
}

/*
  Accessing the Pointer Address and Storing Address in a Pointer

  The address operator
    - Variables are stored in unique addresses
    - Unary operator
    - Evaluates to the address of its operand 
      - Operand cannot be a constant or expression that evaluates to temp
        values.
      
    Example: 

      int num {10};
      cout << "Value of num is: " << num << endl; // 10
      cout << "sizeof of num is: " << sizeof(num) << endl; // 4
      cout << "Address of num is: " << &num << endl; // 0x61dd1c

    
    Example:

      int *p;
      cout << "Value of p is: " << p << endl; // 0x61ff60 - garbage
      cout << "Address of p is: " << &p << endl; // 0x61ff60
      cout << "sizeof of p is: " << sizeof(p) << endl; // 4
      p = nullptr; // set p to point nowhere
      cout << "Value of p is: " << p << endl; // 0

    sizeof a pointer variable: 

      - Don't confuse the size of a pointer and the size of what it points to 
      - All pointers in a program have the same size 
      - They may be pointing to very large or very small types

      int *p1 { nullptr };
      double *p2 { nullptr };
      unsigned long long *p3 { nullptr };
      vector<string> *p4 { nullptr };
      string *p5 { nullptr };

    Storing an Address in Pointer Variable?
    
      Typed pointers
      - The compiler will make sure that the address stored in a pointer variable 
      is of the correct type.
      
      Example:

      int score { 10 };
      double high_temp { 100.7 };

      int *score_ptr { nullptr };

      score_ptr = &score; // OK
      score_ptr = &hight_temp; // compiler error 
      // there is a type conflict from double to int address


      
    & the address operator
      - Pointers are variables so they can change
      - Pointers can be null 
      - Pointers can be uninitialized 

      double hight_temp { 100.7 };
      double low_temp { 37.2 };

      double *temp_ptr;
      temp_ptr = nullptr;

      temp_ptr = &high_temp; // points to high_temp
      temp_ptr = &low_temp; // now points to low_temp

      Refer to the main code above ^
*/ 