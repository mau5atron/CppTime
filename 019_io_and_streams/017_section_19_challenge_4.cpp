/*
  I/O and Streams - Section 19 Challenge 4


    - Copy romen and Juliet with line numbers
    - This challenge should be pretty easy
    - I have provided the text to Romeo and Juliet in a file named
      romeoandjuliet.txt
    
    - For this challenge you have to make a copy of the Romeo and Juliet file
      nad save it to another file
    - This new copy should have line numbers at the beginning of each line in
      the play
    - Please format that numbers nicely to everything lines up
    - Feel free to extend this challenge in any ways you like
    - For example, you may want to provde line numbers only for lines that
      actually have text
*/

#include <fstream>
#include <iostream>
#include <string>

int main(void){
  std::ifstream input_file { "./hipster_ipsum.txt" };
  std::ofstream output_file { "./hipster_ipsum_copy.txt" };
  std::string input_line {};
  unsigned int line_num_idx = 1;

  if ( !input_file ){
    std::cerr << "Error opening file\n";
    return 1;
  }

  if ( !output_file ){
    std::cerr << "Error creating file\n";
  }

  while ( !input_file.eof() ){ // while not end of file  
    if ( std::getline( input_file, input_line ) ){
      if ( input_line.empty() ){
        output_file << input_line << "\n";  
      } else {
        // only add a line number if the line is not empty
        output_file << line_num_idx << ": " << input_line << "\n";
        line_num_idx++;
      }
    }
  }

  input_file.close();
  output_file.close();

  return 0;
}