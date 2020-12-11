/*
  I/O and Streams - Reading a Text File Exercise

    - Please complete the code in the function read_file
    - The file name will be passed to the function by the test harness
    - Try to open the filename supplied for reading and read each word from the
      file and display it to "cout" followed by a "std::endl"

    - Be sure to test to see if the file was opened successfully
    - If the file cannot be opened, please display "Error opening file" to
      "std::cerr" followed by "std::endl"
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // for exit

void read_file( std::string file_name ){
  std::ifstream in_file;
  std::string line {};
  in_file.open( file_name );

  if ( !in_file.is_open() ){
    std::cerr << "Error opening file\n";
  } else {
    while ( !in_file.eof() ){
      if ( std::getline( in_file, line ) ){
        std::cout << line << "\n";
      }
    }
  }

  in_file.close();
}

int main(void){
  std::string file_name { "./data.txt" };
  read_file(file_name);

  return 0;
}