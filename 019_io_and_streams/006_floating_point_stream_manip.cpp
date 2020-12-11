/*
  I/O and Streams - Formatting Floating Point Types

    - Default when displaying floating point values is:
      - setprecision 
        - number of digits displayed (6)
      - fixed 
        - not fixed to a specific number of digits after the decimal point
      - noshowpoint 
        - trailing zeroes are not displayed
      - nouppercase 
        - when displaying in scientific notation
      - noshowpos
        - no "+" when displayed for positive numbers
    - These manipulators affect all further output to the stream
*/

/*
  Formatting floating point types - precision

    {
      double sum { 1235.4678 };
      std::cout << num << "\n";
      // will display
      1235.47 // notice precision is 6 and rounding
    }

    {
      double sum { 123456789.987654321 };
      std::cout << num << "\n";
      // will display
      1.23457e+008 // notice the precision is 6
    }

    {
      double sum { 123456789.987654321 };
      std::cout << std::setprecision(9);
      std::cout << num << "\n";
      // will display
      123456790
    }

    {
      double sum { 123456789.987654321 };
      std::cout << std::fixed;
      std::cout << num << "\n";
      // will display precision 6 from the decimal

      123456789.987654
    }

    {
      double sum { 123456789.987654321 };

      std::cout << std::setprecision(3) << std::fixed;
      std::cout << num << "\n";

      // will display precision 3 from the decimal
      123456789.988
    }

    {
      double sum { 123456789.987654321 };

      std::cout << std::setprecision(3) << std::scientific;
      std::cout << num << "\n";

      // will display precision 3
      1.23e+008
    }

    {
      double sum { 123456789.987654321 };

      std::cout << std::setprecision(3) << std::scientific << std::uppercase;
      std::cout << num << "\n";

      // will display precision 3
      1.23E+008 // note the capital 'E'
    }

    {
      double sum { 123456789.987654321 };

      std::cout << std::setprecision(3) << std::fixed << std::showpos;
      std::cout << num << "\n";

      // will display
      +123456789.988 // note the leading '+'
    }

    {
      double sum { 12.34 };
      
      std::cout << num << "\n"; // 12.34
      std::cout << std::showpoint;

      std::cout << num << "\n"; // 12.3400

      // will display
      12.34 // note no trailing zeroes (default)
      12.3400 // note trailing zeroes up to precision
    }
*/

/*
  Returning to general settings

    - unsetf
      {
        std::cout.unsetf(std::ios::scientific | std::ios::fixed);
      }

    or

      {
        std::cout << std::resetiosflags(std::ios::floatfield);
      }

    - refer to the docs for other set/reset flags

    
*/