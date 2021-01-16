/*
  The Standard Template Library - Generic Programming with Macros

    - Generic programming
      - "Writing code that works with a variety of types as arguments, as long
        as those argument types meet specific syntactic and semantic
        requirements" - Bjarne Stroustrup

    - Macros ***beware***
    - Function templates
    - Class templates  
*/

/*
  Macros ( #define )
    - C++ preprocessor directives
    - No type information
    - Simple substitution

    {
      #define MAX_SIZE 100
      #define PI 3.14159
    }
*/

/*
  Using Macros

    {
      #define MAX_SIZE 100
      #define PI 3.14159

      if ( num > MAX_SIZE ){
        std::cout << "Too big\n";
      }

      double area = PI * r * r; 
    }
*/

/*
  Preprocessor
    - Preprocessor will remove the pounded defines in the code and replace
      wherever they are used with the values defined the the macros
    {
      // #define MAX_SIZE 100 removed
      // #define PI 3.14159 removed

      if ( num > 100 ){
        std::cout << "Too big\n";
      }

      double area = 3.14159 * r * r; 
    }
*/

/*
  Max function

    - Suppose we need a function to determine the max of 2 integers

      {
        int max( int a, int b ){
          return ( a > b ) ? a : b;
        }

        int x = 100;
        int y = 200;

        std::cout << max(x, y); // displays 200
      }
*/

/*
  Max function
    - Now suppose we need to determine the max of 2 doubles, and 2 chars

    {
      int max( int a, int b ){
        return ( a > b ) ? a : b;
      }

      double max( double a, double b ){
        return ( a > b ) ? a : b;
      }

      char max( char a, char b ){
        return ( a > b ) ? a : b;
      }
    }
*/

/*
  Macros with arguments (#define)

    - We can write a generic macro with arguments instead

    {
      #define MAX( a, b ) (( a > b ) ? a : b)

      std::cout << MAX(10, 20) << "\n"; // 20
      std::cout << MAX(2.4, 3.5) << "\n"; // 3.5
      std::cout << MAX('A', 'C') << "\n"; // C
    }
*/

/*
  Macros with Arguments (#define)

    - We have to be careful with macros
    {
      #define SQUARE(a) a * a

      result = SQUARE(5); // expect 25
      result = 5*5;// get 25

      result = 100 / SQUARE(5); // Expected 4
      result = 100 / 5 * 5; // what actually happens, we get 100
    }
*/

/*
  Macros with Arguments (#define)

    {
      #define SQUARE(a)((a)*(a)) // note the parenthesis

      result = SQUARE(5); // expect 25
      result = ((5) * (5)); // still get 25

      result = 100 / SQUARE(5); // expect 4
      result = 100 / ((5) * (5)); // Now we get 4
      // we do this because the compiler does not know how to do this, the preprocessor does
    }
*/