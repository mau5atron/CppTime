/*
  Exception Handling - Basic Concepts

    - Exception Handling
      - dealing with extraordinary situations
      - Indicates that an extraordinary situaion has been detected or has
        occurred
      - program can deal with the extraordinary situations in a suitable manner

    - What causes exceptions?
      - insufficient resources
      - missing resources
      - invalid operations
      - range violations
      - underflows and overflows
      - illegal data and many others
    
    - Exception safe
      - When your code handles exceptions
*/

/*
  Exception Handling - Terminology

    - Exception
      - an object or primitive type that signals that an error has occurred
    - Throwing an exception (raising an exception)
      - your code has detected that an error has occurred or will occur
      - the place where the error occurred may not know how to handle the error
      - code can throw an exception describing the error to another part of the
        program that knows how to handle the error
    - Catching an exception ( handling the exception )
      - code that handles the exception
      - may or may not cause the program to terminate
*/

/*
  Exception Handling - c++ syntax
    - throw
      - throws an exception
      - followed by an argument

    - try { code that may throw an exception }
      - you place code that may throw an exception into a try block
      - if the code throws an exception the try block is exited
      - the thrown exception is handled by a catch handler
      - if no catch handler exists the program terminates
    
    - catch ( Exception ex ){ code to handle the exception }
      - code that handles the exceptions
      - can have multipl catch handlers
      - may or may not cause the program to terminate 
*/

/*
  Exception Handling - Divide by zero example
    
    - What happens if total is zero?
      - crash? overflow?
      - it depends

      {
        double average {};
        average = sum / total;
      }

    - How do wee handle this?

      {
        double average {};
        if ( total == 0 ){
          // what to do?
        } else {
          average = sum / total;
        }
      }
*/

/*
  Exception Handling - Another divide by zero example

    {
      double average;
      try { // try block
        if ( total == 0 ){
          throw 0; // throw the exception
        }

        average = sum / total; // does not execute if total == 0
      } catch ( int &ex ){ // exception handler
        std::cerr << "can't divide by zero" << "\n";
      }

      std::cout << "program continues\n";
    }
*/

// miles per gallon exception handling

#include <iostream>

int main(void){
  int miles;
  int gallons;
  double miles_per_gal;

  std::cout << "Enter the miles: ";
  std::cin >> miles;
  std::cout << "\nEnter the gallons: ";
  std::cin >> gallons;

  // miles_per_gal = miles / gallons; // crashes when denominator is 0
  miles_per_gal = static_cast<double> miles / gallons;


  std::cout << "\nMiles per gallon: " << miles_per_gal << "\n";

  return 0;
}