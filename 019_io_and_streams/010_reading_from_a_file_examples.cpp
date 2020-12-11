/*
  I/O and Streams - Reading from a text file Examples
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void read_from_my_file( std::ifstream &input_stream_file, std::string &file_name, std::string &line );
void read_from_my_file_two( std::ifstream &input_stream_file, std::string &file_name, std::string &line, int &num, float &total );

int main( int argc, char **argv ){
  std::ifstream in_file;
  std::string line;
  int num;
  float total;
  std::string file_name_one { "./my_file.txt" };
  std::string file_name_two { "./my_file_two.txt" };

  // if one windows
  // in_file.open( "C:\\dir\\dir2\\some_txt.txt" );
  read_from_my_file( in_file, file_name_one, line );
  read_from_my_file_two( in_file, file_name_two, line, num, total );
  
  return 0;
}

void read_from_my_file( std::ifstream &input_stream_file, std::string &file_name, std::string &line ){
  input_stream_file.open(file_name);
  
  if ( !input_stream_file.is_open() ){ // or !input_stream_file does the same
    std::cerr << "Problem opening file\n";
    std::exit(1);
    // return 1;
  }

  std::cout << "File is good to go\n";

  while ( !input_stream_file.eof() ){
    input_stream_file >> line; // reads every string separated by a space or new line
    /*
      Output

      Hey
      yoooooo
      my
      cousin
      Vinny
      Yeah
      man
      he
      got
      the
      canoles
    */
    std::cout << line << "\n";
  }

  input_stream_file.close();
}

void read_from_my_file_two( std::ifstream &input_stream_file, std::string &file_name, std::string &line, int &num, float &total ){
  input_stream_file.open( file_name );

  if ( !input_stream_file.is_open() ){
    std::cerr << "Problem opening file\n";
    std::exit(1);
  }

  std::cout << "chill job opening file\n";

  // while ( !input_stream_file.eof() ){ // while not end of file
  // another way to check that inputs are available for the ifstream
  // if one of the inputs is missing a value for line in the file, we end the
  // while loop
  while ( input_stream_file >> line >> num >> total ){
    std::cout << std::setw(10) << std::left << line;
    std::cout << std::setw(10) << num;
    std::cout << std::setw(10) << total << "\n";
  }

  input_stream_file.close();
}