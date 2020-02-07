#include <iostream>

using namespace std;

int main(void)
{
  int scores[]{ 100, 95, 89, 68, -1 };
  int *score_ptr { scores };
  
  // Example 1: 
  // accessing array through pointer and iterating over pointer values
  while(*score_ptr != -1){
    cout << "Score ptr: " << *score_ptr << endl;
    score_ptr++;
  }
  
  // Example 2: 
  // another way of doing the same as above 
  cout << "\n-------------------------" << endl;
  
  score_ptr = scores;
  while(*score_ptr != -1){
    cout << "Score ptr: " << *score_ptr++ << endl;
  }
  
  // Example 3:
  cout << "\n-------------------------" << endl;
  string s1 { "Gabe" };
  string s2 { "Gabe" };
  string s3 { "Joe" };
  
  string *p1 { &s1 };
  string *p2 { &s2 };
  string *p3 { &s1 };
  
  cout << boolalpha;
  cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;
  cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;
  
  cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;
  
  p3 = &s3; // point to Joe
  
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;
  
  // Example 4: 
    
  cout << "\n-------------------------" << endl;
  
  char name[]{ "Frank" };
  char *char_ptr1 { nullptr };
  char *char_ptr2 { nullptr };
  
  char_ptr1 = &name[0]; // F
  char_ptr2 = &name[3]; // n
  
  cout << "In the string " << name << ", " << *char_ptr2 << " is " << ( char_ptr2 - char_ptr1 ) << " characters away from " << *char_ptr1 << endl;
  
  return 0;
}

/*
  Pointer Arithmetic: 
    - Pointers can be used in 
      - Assignment epressions 
      - Arithmetic expressions 
      - Comparison expressions 
    - C++ allows pointer arithmetic 
    - Pointer arithmetic only makes sense with raw arrays 

  ++ and --

    - (++) increments a pointer to point to the next array element 
      int_ptr++;
    
    - (--) decrements a pointer to point to the previous array element
      int_ptr--;
  
  + and -
    - (+) increment pointer by n * sizeof(type)
      int_ptr += n;
      or 
      int_ptr = int_ptr + n;

    - (-) decrement pointer by n * sizeof(type)
      int_ptr -= n;
      or
      int_ptr = int_ptr - n;

    Subtracting two pointers: 
      - Determine the number of elements between the pointers
      - Both pointers must point to the same data type
        int n = int_ptr2 - int_ptr1;

    Comparing pointers: 
      Determine if two pointers point to the same location 
        - Does NOT compare the data where they point

        string s1 { "Gabriel" };
        string s2 { "Gabriel" };

        string *p1 { &s1 };
        string *p2 { &s2 };
        string *p3 { &s1 };

        cout << (p1 == p2) << endl; // false
        cout << (p1 == p3) << endl; // true

    Comparing the data pointers point to: 
      Determine if two pointers point to the same data
      - You must compare the referenced pointers

        string s1 { "Gabe" };
        string s2 { "Gabe" };
        string *p1 { &s1 };
        string *p2 { &s2 };
        string *p3 { &s1 };

        cout << ( *p1 == *p2 ) << endl; // true
        cout << ( *p1 == *p3 ) << endl; // true

    Example: reference in main^
*/ 