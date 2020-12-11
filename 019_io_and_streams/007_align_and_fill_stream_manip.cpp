/*
  I/O and Streams - Align and Fill

    Field width, align and fill:

      - Default when displaying floating point values is:
        - setw
          - not set by default
        - left
          - when no field width
        - right
          - when using field width
        - fill
          - not set by default
          - blank space is used

      - Some of these manipulators affect only the next data element put on the stream
*/

/*
  Defaults:

    {
      double num { 1234.5678 };
      std::string hello {"Hello"};

      std::cout << num << hello << "\n";
      // will display
      1234.57Hello
    }
*/

/*
  Field width - setw

    {
      double num { 1234.5678 };
      std::string hello {"Hello"};

      std::cout << std::setw(10) << num << hello << "\n";
      // will display - space in front of the 
         1234.57Hello
    }

    {
      double num { 1234.5678 };
      std::string hello {"Hello"};

      std::cout 
      << std::setw(10)
      << num
      << std::setw(10)
      << hello
      << std::setw(10)
      << hello
      << "\n";
      // will display - space in front of the 
         1234.57   Hello   Hello
    }
*/

/*
  Field width - justification

    {
      double num { 1234.5678 };
      std::string hello {"Hello"};

      std::cout 
      << std::setw(10)
      << std::left
      << num // only affects num
      << hello 
      << "\n";
      // will display
      1234.57   Hello
    }
*/

/*
  Field Width - setw

    {
      double num { 1234.5678 };
      std::string hello { "Hello" };

      std::cout
        << std::setw(10) << num
        << std::setw(10) << std::right << hello
        << std::setw(15) << std::right << hello
        << "\n";
      
      // will display
          1234.57   Hello       Hello       
    }
*/

/*
  Filling fixed widith - setfill

  {
    double num { 1234.5678 };
    std::string hello { "Hello" };

    std::cout << std::setfill("-");
    std::cout << setw(10) << num << hello << "\n";
    // will display
    ---1234.57Hello
  }
*/

/*
  Field Width - setw

    {
      double num { 1234.5678 };
      std::string hello { "Hello" };

      std::cout << std::setfill("*");
      std::cout
        << setw(10) 
        << num
        << std::setfill("-")
        << std::setw(10)
        << hello
        << std::setw(15)
        << hello << "\n";
      // will display
      ***1234.57-----Hello----------Hello
    }
*/

