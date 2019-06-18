  /*
    Mixed Type Expressions

    - C++ operators occur on same type operands
    - If operands are of different types, C++ will convert one 
    - IMPORTANT: Since it could affect calculation results 
    - C++ will attempts to automatically convert types (coercion)
      - If it can't, a compiler error will occur 
    
    // ******************
    Conversions
    - Higher vs. Lower types are based on the size of the values the type can
      hold 
      - long double, double, float, unsigned long, long, unsigned int, int
      - short and char types are always converted to int
    - Type Coercion: conversion of one operand to another data type 
    - Promotion: conversion to a higher type 
      - Used in mathematical expressions
    - Demotion: conversion to a lower type 
      - Used with assignment to lower type
    
    // Examples
    - lower op higher; the lower is promoted to a higher
    2  5.2
    2 is promoted to 2.0

    - lower = higher ; the higher is demoted to a lower 
    int num {0};
    num = 100.2
  */ 

  // Explicit Type Casting 
  /*
    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number; 
    cout << average << endl; // will give back 12, don't want, need 12.5 >:(

    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl;
    average 
  */ 

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  int total_amount {100};
  int divider {8};
  double average {0.0};

  // average = total_amount / divider;
  // cout << "Average: " << average << endl;
  average = static_cast<double>(total_amount) / divider;
  cout << "Average: " << average << endl;
  return 0;
}