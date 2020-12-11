/*
  I/O and Streams - Formatting integer types

    - Default when displaying integer values is:
      - dec(base 10)
      - noshowbase - prefix used to show hexadecimal or octal
        -nouppercase - when displaying a prefix and hex values it will be lower
        case
      - noshowpos - no '+' is displayed for positive numbers
      - These manipulators affect all further output to the stream
*/

/*
  Formatting integer types - setting base

    {
      int num {255};

      std::cout << std::dec << num << "\n";
      std::cout << std::hex << num << "\n";
      std::cout << std::oct << num << "\n";

      // will display
      255
      ff
      277
    }
*/

/*
  Showing the base

    {
      int num {255};

      std::cout << std::showbase; // std::noshowbase;
      std::cout << std::dec << num << "\n";
      std::cout << std::hex << num << "\n";
      std::cout << std::oct << num << "\n";

      // will display
      255
      0xff // note the 0x prefix for hexadecimal
      0377 // note the 0 prefix for octal
    }
*/

/*
  Display hex in uppercase

    {
      int num { 255 };

      std::cout << std::showbase << std::uppercase << "\n";
      std::cout << std::hex << num << "\n";

      // will display
      0XFF // note capitalized XFF
    }
*/

/*
  Displaying the positive sign

    {
      int num1 {255};
      int num2 {-255};

      std::cout << num1 << "\n"; // 255
      std::cout << num2 << "\n"; // -255

      std::cout << std::showpos; // std::noshowpos;
      std::cout << num1 << "\n"; // +255
      std::cout << num2 << "\n"; // -255
    }
*/

/*
  setting / resetting integer types

    - Set using setf
      std::cout.setf(std::ios::showbase);
      std::cout.setf(std::ios::uppercase);
      std::cout.setf(std::ios::showpos);

    - Reset to defaults
      std::cout << std::resetiosflags(std::ios::basefield);
      std::cout << std::resetiosflags(std::ios::showbase);
      std::cout << std::resetiosflags(std::ios::showpos);
      std::cout << std::resetiosflags(std::ios::uppercase);
*/

#include <iostream>
#include <iomanip>
#include <string>

int main( int argc, char **argv ){
  int num {255};
  std::string sep { "-------------\n" };
  // displaying using different bases

  std::cout << sep;
  std::cout << std::dec << num << "\n";
  std::cout << std::hex << num << "\n";
  std::cout << std::oct << num << "\n";

  // Displaying showing the base prefix for hex and oct
  std::cout << sep;

  std::cout << std::showbase;
  std::cout << std::dec << num << "\n";
  std::cout << std::hex << num << "\n";
  std::cout << std::oct << num << "\n";

  // display- the hex value in uppercase
  std::cout << sep;
  std::cout << std::showbase << std::uppercase;
  std::cout << std::hex << num << "\n";
  
  // display the + sign in front of the positive base 10 numbers
  std::cout << sep;
  std::cout << std::showpos;
  std::cout << std::dec << num << "\n";
  std::cout << std::hex << num << "\n";
  std::cout << std::oct << num << "\n";

  // setting using the set method
  std::cout << sep;
  std::cout.setf( std::ios::showbase );
  std::cout.setf( std::ios::uppercase );
  std::cout.setf( std::ios::showpos );

  // resetting to defaults
  std::cout << std::resetiosflags( std::ios::basefield );
  std::cout << std::resetiosflags( std::ios::showbase );
  std::cout << std::resetiosflags( std::ios::showpos );
  std::cout << std::resetiosflags( std::ios::uppercase );
  
  return 0;
}