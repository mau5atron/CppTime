/*
  I/O and Streams - Boolean Stream Manipulators

    Formatting boolean types
    
    - default when displaying boolean values is 1 or 0
    - Sometimes the strings true or false are more appropriate

    {
      // example

      std::cout << (10 == 10) << "\n";
      std::cout << (10 == 20) << "\n";

      // will display
      1
      0      
    }

  - Displaying true false as actual true false

    {
      std::cout << std::boolalpha;

      std::cout << (10 == 10) << "\n";
      std::cout << (10 == 20) << "\n";

      // will display
      true
      false
    }

  - all further boolean output will be affected

    {
      std::cout << std::noboolalphal; // 1 or 0
      std::cout << std::boolalpha; // true or false
    }
*/

/*
  Can also format boolean types:

    - method version
    {
      std::cout.setf(std::ios::boolalpha);
      std::cout.setf(std::ios::noboolalpha);

      - Reset to default
      std::cout << std::resetiosflags(std::ios::boolalpha);
    }
*/

#include <iostream>
#include <iomanip>

int main(void){
  std::cout << "noboolalpha - default (10==10): " << (10==10) << "\n";
  std::cout << "noboolalpha - default (10==20): " << (10==20) << "\n";

  // set to true false formatting

  std::cout << std::boolalpha;
  std::cout << "noboolalpha - boolalpha (10==10): " << (10==10) << "\n";
  std::cout << "noboolalpha - boolalpha (10==20): " << (10==20) << "\n";

  // setting still stays for future boolean insertions
  std::cout << "noboolalpha - boolalpha (10==10): " << (10==10) << "\n";
  std::cout << "noboolalpha - boolalpha (10==20): " << (10==20) << "\n";

  // toggle to 0/1
  std::cout << std::noboolalpha;
  std::cout << "noboolalpha - noboolalpha (10==10): " << (10==10) << "\n";
  std::cout << "noboolalpha - noboolalpha (10==20): " << (10==20) << "\n";

  // set back to true/false using setf method
  std::cout.setf(std::ios::boolalpha);
  std::cout << "noboolalpha - setf boolalpha (10==10): " << (10==10) << "\n";
  std::cout << "noboolalpha - setf boolalpha (10==20): " << (10==20) << "\n";

  // reset back to 0/1
  std::cout << std::resetiosflags(std::ios::boolalpha);
  std::cout << "noboolalpha - resetiosflags boolalpha (10==10): " << (10==10) << "\n";
  std::cout << "noboolalpha - resetiosflags boolalpha (10==20): " << (10==20) << "\n";

  return 0;
}