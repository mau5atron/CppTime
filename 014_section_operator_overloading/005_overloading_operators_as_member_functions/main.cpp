#include <iostream>
#include "Mystring.h"
using std::cout;
using std::endl;

int main(void)
{
  cout << std::boolalpha << endl;

  Mystring larry {"Larry"};
  Mystring moe {"Moe"};

  Mystring stooge {larry};
  larry.display();
  moe.display();

  cout << "larr == moe: " << (larry == moe) << endl;
  cout << "larry == stooge: " << (larry == stooge) << endl;

  larry.display();

  Mystring larry2 {-larry};
  larry2.display();

  Mystring stooges {larry + "Moe"}; // ok with member function
  // Mystring stooges {"Larry" + moe}; // compiler error

  Mystring three_stooges {moe + " " + larry + " " + "Curly"};
  three_stooges.display();

  return 0;
}