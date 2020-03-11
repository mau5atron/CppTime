#include <iostream>
// #include <ostream> can use .flush() from ostream
// instead of using endl, can use cout << .. << flush; does not insert newline
// character 

using namespace std;

int main(void)
{
  // literal constants
  int x {12};
  double y {1.56};

  cout << "integer x: " << to_string(x) << endl;
  cout << "double y: " << to_string(y) << endl;

  string name {"Frank"};
  string middle_initial {"J"};

  // integer literal constants 
  int z {12}; // integer
  int q {12U}; // unsigned integer
  int w {12L}; // a long integer
  int r {12LL}; // a long long integer

  cout << "z: " << to_string(z) << endl;
  cout << "q: " << to_string(q) << endl;
  cout << "w: " << to_string(w) << endl;
  cout << "r: " << to_string(r) << endl;

  // floating-point literal constants 
  double a {12.1}; // double
  float b {12.1F}; // float
  double c {12.1L}; // a long double
  cout << "double a: " << to_string(a) << endl;
  cout << "float b: " << to_string(b) << endl;
  cout << "long double: " << to_string(c) << endl;

  // character literal constants (escape codes)
  // "\n" newline
  // "\r" return 
  // "\t" tab
  // "\b" backspace 
  // "\'" single quote 
  // "\"" double quote 
  // "\\" backslash

  // declaring constants using the "const" keyword
  const double pi {3.1415926}; // can only be written as preprocessor 
  // #define pi 3.1415926
  const int months_in_year {12};
  cout << "pi is: " << pi << endl;
  cout << "there are " << to_string(months_in_year) << " months in the year" << endl;

  return 0;
}