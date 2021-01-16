/*
  The Standard Template Library - Generic Programming with Function Templates

    - What is a C++ Template?
      - Blueprint
      - Function and class templates
      - Allow plugging-in any data type
      - Compiler generates the appropriate function/class from the blueprint
      - Generic Programming / Meta-Programming
*/

/*
  Generic Programming with function templates

    - Let's revisit the max function from the last lecture
    
      {
        int max( int a, int b ){
          return (a > b) ? a : b;
        }

        int x = 100;
        int y = 200;
        std::cout << max(x, y); // displays 200
      }

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
  Max function as a template function
    - We can replace type we want to generalize with a name, say T
    - But this won't compile

    {
      // this fails, we need to explicitly tell the compiler that this is a template function
      T max( T a, T b ){
        return ( a > b ) ? a : b;
      }
    }
*/

/*
  Max function as a template function

    - We need to tell the compiler this is a template function
    - We also need to tell it that T is a template parameter

      {
        template <typename T>
        T max( T a, T b ){
          return (a > b) ? a : b;
        }
      }
*/

/*
  - Now the compiler can generate the appropriate function from the template
  - Note, this happens at compile-time

    {
      int a {10};
      int b {20};

      std::cout << max<int>(a, b);
    }

  - Many times the compiler can deduce the type and the template parameter is
    not needed
  - Depending on the type of a and b, the compiler will figure it out

    {
      std::cout << max<double>(c, d);
      std::cout << max(c, d);
    }
    
  - And we can use almost any type we need

    {
      char a {'A'};
      char b {'Z'};

      std::cout << max(a, b) << "\n";
    }
*/

/*
  - Notice the type MUST support the > operator either natively or as an
    overloaded operator (operator>)

    {
      template <typename T>
      T max( T a, T b ){
        return (a > b) ? a : b;
      }
    }
*/

/*
  - The following will not compile unless Player overloads operator>

    {
      Player p1 {"Hero", 100, 20};
      Player p2 {"Enemy", 99, 3};

      std::cout << max<Player>(p1, p2);
    }
*/

/*
  Multiple types as template parameters

    - We can have multiple template parameters
    - And their types can be different

      {
        template <typename T1, typename T2>
        void func( T1 a, T2 b ){
          std::cout << a << " " << b;
        }
      }
*/

/*
  - When we use the function we provide the template parameters
  - Often the compiler can deduce them

    {
      func<int, double>(10, 20.2);
      func('A', 12.4);
    }
*/

/*
  Function Template Examples  
*/

#include <iostream>
#include <string>

template <typename T>
T min( T a, T b ){
  return (a < b) ? a : b;
}

template <typename T1, typename T2>
void some_function( T1 a, T2 b ){
  std::cout << a << " " << b << "\n";
}

struct Person {
  std::string name;
  int age;
  // tell the compiler how to handle our own person data type when using the <
  // operator
  bool operator<( const Person &rhs ) const {
    // check that left side of operator is less than right side of operator
    return this->age < rhs.age;
  }

};

std::ostream &operator<<(std::ostream &ouput_stream, const Person &p ){
  ouput_stream << p.name;
  return ouput_stream;
}

// swap two elements
// void my_swap( int &a, int &b ){
//   int temp = a;
//   a = b;
//   b = temp;
// }

// make it so it can be used with any type
template <typename T>
void my_swap( T &a, T &b ){
  T temp = a;
  a = b;
  b = temp;
}

int main(void){
  std::cout << min<int>( 2, 3 ) << "\n"; // 2
  std::cout << min( 2, 3 ) << "\n"; // 2
  std::cout << min('A', 'B') << "\n"; // A
  std::cout << min(12.4, 9.2) << "\n"; // 9.2
  std::cout << min(5+2*2, 7+40) << "\n"; // 9

  some_function<int, int>(10, 20);
  some_function(10, 20);
  some_function<char, double>('A', 12.4);
  some_function('A', 24.3);
  some_function(1000, "Testing");
  some_function(2000, std::string {"Frank"});

  Person p1 { "Curly", 50 };
  Person p2 { "Moe", 30 };

  Person p3 = min<Person>(p1, p2); // find person with age minimum between two
  std::cout << "P3 age: " << p3.age << "\n"; // returns 30, Moe has lower age

  some_function(p1, p2); // error, no overloaded insertion operator available

  int x { 100 };
  int y { 200 };
  std::cout << "x: " << x << ", y: " << y << "\n";
  my_swap(x, y);
  std::cout << "After swap: x: " << x << ", y: " << y << "\n";

  return 0;
}