/*
  I/O and Streams - Writing to a file demo
*/

#include <iostream>
#include <fstream>
#include <string>

int main(void){
  std::ofstream output_file { "./output_file.txt" };
  
  if ( !output_file ){
    std::cerr << "Error creating file\n";
    return 1;
  }

  std::string line;

  std::cout << "Enter somethign to write the line: ";
  // std::cin >> line; // we are getting entire input so we need getline

  std::getline( std::cin, line );

  output_file << line << std::endl; // insert into output file

  output_file.close(); // close the file

  return 0;
}