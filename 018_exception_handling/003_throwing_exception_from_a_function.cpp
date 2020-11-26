/*
  Exception Handling - Throwing an exception from a function

    - What do we return if total is zero
    
    {

      double calculate_avg( int sum, int total ){
        return static_cast<double>( sum ) / total;
      }

    }
    
    - Throw an exception if we can't complete successfully

    {
      double calculate_avg( int sum, int total ){
        if ( total == 0 ){
          throw 0;
        }

        return static_cast<double>( sum ) / total;
      }
*/

/*
  Catching an exception thrown from a function
  {
    double average;

    try {
      average = calculate_avg(sum, total);
      std::cout << average << "\n";
    } catch ( int &ex ){
      // best practice is to throw by value and catch by reference
      std::cerr << "You cannot divide by zero\n";
    }

    std::cout << "Bye\n";
  }
*/

// Miles per gallon and re-written with try catch

#include <iostream>

double calc_mpg( int miles, int gallons );

int main(void){
  double mpg;
  int miles;
  int gallons;

  std::cout << "Enter miles driven: ";
  std::cin >> miles;
  std::cout << "\nEnter gallons utilized: ";
  std::cin >> gallons;

  try {
    mpg = calc_mpg(miles, gallons);
    std::cout << "Miles / Gallon: " << mpg << "\n";
  } catch ( int &ex ){
    std::cerr << "Cannot divide by 0\n";
  }

  return 0;
}

double calc_mpg( int miles, int gallons ){
  if ( gallons == 0 ){
    throw 0;
  }

  return static_cast<double>(miles)/gallons;
}