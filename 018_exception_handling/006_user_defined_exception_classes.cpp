/*
  Exception Handling - Creating User-defined Exception Classes

  We can create exception classes and throw instances of those classes

  Best practice:
    - throw an object, not a primitive type
    - throw an object by value
    - catch an object by reference ( or const reference )
*/

/*
  Creating Exception Classes

    {

      class DivideByZeroException {
      };

      class NegativeValueException {
      };

    }

  Throwing user-defined exception classes

    {

      double calc_mpg( int miles, int gallons ){
        if ( gallons == 0 ){
          throw DivideByZeroException();
        }

        if ( miles < 0 || gallons < 0 ){
          throw NegativeValueException();
        }

        return static_cast<double>(miles)/gallons;
      }

    }
*/

/*
  Catching User-defined exceptions

  try {
    mpg = calc_mpg(miles, gallons);
    std::cout << mpg << "\n";
  } catch ( const DivideByZeroException &ex ){
    std::cerr << "You cannot divide by zero\n";
  } catch ( const NegativeValueException &ex ){
    std::cerr << "Negative values are not allowed\n";
  }
*/

#include <iostream>

class DivideByZeroException {
};

class NegativeValueException {
};

double calc_mpg( int miles, int gallons ){

  if ( gallons == 0 ){
    throw DivideByZeroException();
  }

  if ( miles < 0 || gallons < 0 ){
    throw NegativeValueException();
  }

  return static_cast<double>(miles)/gallons;
} 

int main(void){
  int miles;
  int gallons;
  double mpg;

  std::cout << "Enter miles driven: ";
  std::cin >> miles;
  std::cout << "Enter gallons used: ";
  std::cin >> gallons;

  try {
    mpg = calc_mpg( miles, gallons );
    std::cout << "mpg: " << mpg << "\n";
  } catch ( const DivideByZeroException &ex ){
    std::cerr << "Cannot divide by zero.\n";
  } catch ( const NegativeValueException &ex ){
    std::cerr << "Cannot divide negative values.\n";
  }

  return 0;
}