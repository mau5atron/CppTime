/*
  I/O and Streams - Reading from a Text File

    Input Files (fstream and ifstream)

      1. #include <fstream>
      2. Declare an fstream or ifstream object
      3. Connect it to a file on your system (opens it up for reading)
      4. Read data from the file via the stream
      5. Close the stream
*/

/*
  Opening a file for reading with (fstream)

    {
      // opening the file in input mode
      // by default, files are opened in text mode
      std::fstream in_file {"../my_file.txt", std::ios::in };

      // open for reading in binary mode
      // using bitwise OR operator |
      // it sets both the input and the binary modes set to true
      std::fstream in_file_bin { "../my_file.txt", std::ios::in | std::ios::binary };
    }
*/

/*
  Opening a file for reading with (ifstream)

    {
      std::ifstream in_file { "../my_file.txt", std::ios::in };

      std::ifstream in_file { "../my_t_file.txt" };

      // open for reading in binary mode
      std::ifstream in_file { "../myfile.txt", std::ios::binary };
    }
*/

/*
  Opening a file for reading with open

    {
      std::ifstream in_file;

      std::string filename;
      std::cin >> filename; // get the file name

      in_file.open(filename);
      // or
      in_file.open( file_name, std::ios::binary );
    }
*/

/*
  Check if file was opened successfully ( is_open )

    {
      if ( in_file.is_open() ){
        // read from it
      } else {
        // file could not be opened
        // does it exist?
        // should the program terminate?
      }
    }
*/

/*
  Check if file opened successfully - test the stream object

    {
      if ( in_file ){ // just check the object
        // read from it
      } else {
        // file could not be opened
        // does it exist
        // should the program terminate
      }
    }
*/

/*
  Closing a file
    
    {
      // Always close any open files to flush out any unwritten data
      in_file.close();
    }
*/

/*
  Reading from files using (>>)

    - We can use the extraction operator for formatted read
    - Same way we used it with cin

    {
      int num {};
      double total {};
      std::string name {};

      in_file >> num;
      in_file >> total >> name;

      // num -> 100
      // total -> 255.67
      // name -> Larry
    }  
*/

/*
  Reading from files using getline
    
    - We can use "getline()" to read the file one line at a time
    {  
      std::string line {};
      std::getline(in_file, line); // this is a line
    }
*/

/*
  Example Reading text file one line at a time

    {
      std::ifstream in_file { "../my_file.txt" }; // open file
      std::string line {}; // declaring where line will be stored

      in ( !in_file ){ // check if file is open
        std::cerr << "File open error" << "\n";
        return 1; // exit the program (main)
      }

      while ( !in_file.oef() ){ // while not at the end of the file
        std::getline( in_file, line ); // read a line
        std::cout << line << "\n";
      }

      in_file.close(); // close the file
    }
*/

/*
  Example of reading a text file one line at a time but a little different

    {
      std::ifstream in_file { "../my_file.txt" }; // open file
      std::string line {};

      if ( !in_file ){ // check if the file is open
        std::cerr << "File open error" << "\n";
        return 1;
      }

      while ( std::getline( in_file, line ) ){ // read a line
        std::cout << line << "\n";
      }

      in_file.close(); // close the file
    }
*/