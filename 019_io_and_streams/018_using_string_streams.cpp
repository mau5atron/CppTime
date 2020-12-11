/*
  I/O and Streams - Using String Streams

    - Alllows us to read or write from strings in memory much as we would read
      and write to files
    - Very powerful
    - Very useful for data validation
*/

/*
  Using String Streams

    1. #include <sstream>
    2. Declare an strignstream, istringstream or ostringstream object
    3. Connect it to a std::string
    4. Read/Write data from/to the string stream using formatted I/O
*/

/*
  Reading form stringstream

    {
      #include <sstream>

      int num {};
      double total {};
      std::string name {};
      std::string info {"Moe 100 1234.5"};

      std::istringstream iss { info }; // input string stream
      iss >> name >> num >> total;
    }
*/

/*
  Writing to a stringstream

    {
      #include <sstream>

      int num { 100 };
      double total { 1234.5 };
      std::string name { "Moe" };

      std::ostringstream oss {}; // output string stream
      oss << name << " " << num << " " << total;
      std::cout << oss.str() << "\n";
    }
*/

/*
  Validating Input with stringstream

    {
      int value {};
      std::string input {};

      std::cout << "Enter an integer: ";
      std::cin >> input;

      std::stringstream ss { input };
      if ( ss >> value ){
        std::cout << "An integer was entered";
      } else {
        std::cout << "An integer was NOT entered";
      }
    }
*/

// stringstream example

#include <iomanip>
#include <sstream>
#include <string>
#include <iostream>

int main(void){
  int num {};
  double total {};
  std::string name {};

  std::string info { "Moe 100 1234.5" };
  std::istringstream input_string_stream { info };

  std::cout
    << std::setw(10) << std::left << name
    << std::setw(5) << num

  return 0;
}