/*
  Exception Handling - Throwing multiple exceptions from a function

    - What if a function can fail in several ways?
      - gallons is zero
      - miles or gallons is negative
      
      {

        double calc_mpg(int sum, sum total){
          return static_cast<double>(mile)/gallons;
        }

      }
*/

/*
  Throw different type exceptions for each condition

    {
      double calc_mpg(int miles, int gallons){
        if ( gallons == 0 ){
          throw 0;
        } else if ( miles < 0 || gallons < 0 ){
          throw std::string { "Negative value error" };
        }

        return static_cast<double>(miles)/gallons;
      }

      

      double mpg;

      try {
        mpg = calc_mpg(miles, gallons);
        std::cout << "Mpg: " << mpg << "\n";
      } catch ( int &ex ){
        std::cerr "Can\'t divide by zero.\n";
      } catch ( std::string &ex ){
        std::cerr << ex << "\n";
      }
    }
*/

/*
  Exception Handling - Catch all exception

    {
        catch ( int &ex ){
      } catch ( std::string &ex ){
      } catch (...){
        std::cerr << "Unknown exception\n";
        // catch anything that was not handled before
      }
    }
*/

#include <iostream>
#include <string>

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
  } catch ( std::string &ex ){
    std::cerr << ex << "\n";
  } catch ( ... ){
    std::cerr << "Unknown exception\n";
  }

  return 0;
}

double calc_mpg( int miles, int gallons ){
  if ( gallons == 0 ){
    throw 0;
  } else if ( miles < 0 || gallons < 0 ){
    throw std::string { "Negative input value err" };
  }

  return static_cast<double>(miles)/gallons;
}