#include <iostream>
#include <climits>
#include <cfloat>
/*
  include climits for integer types 

  similar information for floating point numbers
  is contained in <cfloat>
*/ 

using namespace std;

int main(void)
{
  string dashes {"==========================================\n"};

  cout << "size of information\n" << dashes << endl;
  cout << "char: " << sizeof(char) << " byte." << endl;
  cout << "int: " << sizeof(int) << " bytes" << endl;
  cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
  cout << "short: " << sizeof(short) << " bytes." << endl;
  cout << "long: " << sizeof(long) << " bytes." << endl;
  cout << "long long: " << sizeof(long long) << " bytes" << endl;

  cout << dashes << endl;
  
  cout << "float: " << sizeof(float) << " bytes." << endl;
  cout << "double: " << sizeof(double) << " bytes." << endl;
  cout << "long double: " << sizeof(long double) << " bytes" << endl;

  cout << "\nMinumum Values:" << endl;
  cout << dashes << endl;
  cout << "char: " << CHAR_MIN << endl;
  cout << "int: " << INT_MIN << endl;
  cout << "short: " << SHRT_MIN << endl;
  cout << "long: " << LONG_MIN << endl;
  cout << "long long: " << LLONG_MIN << endl;

  cout << "\nMaximum Values: " << endl;
  cout << dashes << endl;
  cout << "char: " << CHAR_MAX << endl;
  cout << "int: " << INT_MAX << endl;
  cout << "short: " << SHRT_MAX << endl;
  cout << "long: " << LONG_MAX << endl;
  cout << "long long: " << LLONG_MAX << endl;
  return 0;
}