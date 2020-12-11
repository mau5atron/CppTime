/*
  I/O and Streams - Writing to text files

    Output files (fstream and ofstream)

    - fstream and ofstream are commonly used for output files

      1. #include <fstream>
      2. Declare an fstream or ofstream object
      3. Conect it to a file on yor file system (opens it for writing)
      4. Write data to the file via the stream
      5. Close the stream
*/

/*
  Output files (fstream and ofstream)

    - Output files will be created if they do not exist
      - Path must exist or there will be an error
    - Output files will be overwritten (truncated) by default (unless we specify
      we are appending)
    - Can be opened so that new writes append
    - Can be opened in text or binary modes
    - 
*/

/*
  Opening a file for writing with ( fstream )

    {
      std::fstream out_file { "../myfile.txt", std::ios::out };

      // open for writing in binary mode
      std::fstream out_file { "../myfile.txt", std::ios::out | std::ios::binary }; // binary mode neccessary when writing non text data
    }
*/

/*
  Opening a file for writing with (ofstream)

  {
    std::ofstream out_file { "../myfile.txt", std::ios::out };
    std::ofstream out_file { "../myfile.txt" };

    // open for writing in binary mode
    std::ofstream out_file { "../myfile.txt", strd::ios::binary };
  }
*/

/*
  Opening a file for output ( for writing ) with ofstream

  {
    // truncate (discard contents) when opening
    std::ofstream out_file { "../myfile.txt", std::ios::trunc };

    // append on each write
    std::ofstream out_file { "../myfile.txt", std::ios::app };

    // seek to end of stream when opening
    std::ofstream out_file { "../myfile.txt", std::ios::ate };
  }
*/

/*
  Opening a file for writing with open

  {
    std::ofstream out_file;
    std::string file_name;
    std::cin >> file_name; // get the file name

    out_file.open(file_name);
    // or
    out_file.open(file_name, std::ios::binary);


    // check if file opened successfully
    if ( out_file.is_open() ){
      // read from it
    } else {
      // file coule not be created or opened
      // does it exist
      // should the program terminate?
    }
  }
*/

/*
  Another way to check if the file opened successfully - Test the stream obejct

    {
      if ( out_file ){
        // read from it
      } else {
        // file coule not be created or opened
        // does it exist
        // should the program terminate?
      }
    }
*/

/*
  Closing a file
    - Always close any open files to flush out any unwritten data

    {
      out_file.close();
    }
*/

/*
  Writing files using ( << ) insertion operator

    - We can use the insertion operator for formatted write
    - Same way we used it with cout

    {
      int num {100};
      double total {254.56};
      std::string name { "Larry" };

      out_file 
      << num << "\n"
      << total << "\n"
      << name << "\n";

      // in file
      // 100
      // 254.56
      // Larry
    }
*/

/*
  Copying a text file one line at a time

    {
      std::ifstream in_file { "../myfile.txt" }; // open input file (file contents being coped from)
      std::ofstream out_file { "../copy.txt" };
      
      if ( !in_file ){ // check if file copying from is open
        std::cerr << "File open error" << "\n";
        return 1; // exit the program (main)
      }

      if ( !out_file ){ // check if file copying to is open
        std::cerr << "File create error" << "\n";
        return 1; // exit the program (main)
      }
    }
*/

/*
  Copying a text file one line at a time

    {
      std::string line {};

      while ( std::getline(in_file, line) ){ // read a line
        out_file << line << "\n";
      }

      in_file.close(); // close the files
      out_file.close();
    }
*/

/*
  Copying a text file one character at a time ( get/put )

    {
      std::ifstream in_file { "../myfile.txt" }; // open file
      std::ofstream out_file { "../copy.txt" };

      if ( !in_file ){
        std::cerr << "File open error\n";
        return 1;
      }

      if ( !out_file ){
        std::cerr < <"File create error\n";
        return 1; // exit the program (main)
      }

      // copying one character at a time (get/put)

      char c;
      while ( in_file.get(c) ){ // read a character
        out_file.put(c); // write the character
      }

      in_file.close(); // close the files
      out_file.close();
    }
*/