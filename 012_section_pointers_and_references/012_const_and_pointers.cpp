#include <iostream>

using namespace std;

int main(void)
{

  return 0;
}

/*
  Const and Pointers:

  - There are several ways to qualify pointers using 'const'
    - Pointers to constants
    - Constant pointers
    - Constant pointers to constants
  
  Pointers to constants:
  - The data pointed to by the pointers is constant and cannot be changed.
  - The pointer itself can change and point somewhere else.

    int hight_score { 100 };
    int low_score { 65 };
    const int *score_ptr { &high_score };

    *score_ptr = 86; // Error, trying to change data pointed to
    score_ptr = &low_score; // OK, changing what is being pointed at

  Constant pointers:
  - The data pointed to by the pointers can be changed.
  - The pointer itself cannot change and point somewhere else.
  - Data can be changed via the pointer

    int high_score { 100 };
    int low_score { 65 };
    int *const score_ptr { &high_score };

    *score_ptr = 86; // OK
    score_ptr = &low_score; // Error

  Constant pointers to constants:
    - The data pointed to by the pointer is constant and cannot be changed.
    - The pointer itself cannot change and point somewhere else.
    
    int high_score { 100 };
    int low_score { 65 };
    const int *const score_ptr { &high_score };
    
    *score_ptr = 86; // Error
    score_ptr = &low_score; // Error
*/ 