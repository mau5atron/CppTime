/*
  I/O and Streams - Read and display Shakespeare Sonnet 18 Poem using getline
*/

#include <iostream>
#include <fstream>

int main(void){
  std::ifstream in_file;
  in_file.open("./poem.txt");
  std::string line;

  if ( !in_file ){
    std::cerr << "Problem opening file\n";
    return 1;
  }

  while ( !in_file.eof() ){ // if not end of file
    if ( std::getline(in_file, line) ){ // get till end of line
      std::cout << line << "\n";
    }
  }

  // or can also use char

  
  /* 
    char c {};
    while ( !in_file.eof() ){
      if ( in_file.get(c) ){
        std::cout << c;
      }
    }

    std::cout << "\n"; 
  */

  in_file.close();

  return 0;
}