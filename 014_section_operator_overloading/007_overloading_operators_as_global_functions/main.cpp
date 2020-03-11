#include <iostream>
#include <vector>
#include "Mystring.h"
using std::cout;
using std::endl;

int main(void)
{
  Mystring larry { "larry" };
  larry.display(); // larry

  larry = -larry; // lowercase
  larry.display();

  std::cout << std::boolalpha << std::endl;
  Mystring moe { "moe" };
  Mystring stooge = larry;

  cout << "(larry == moe): " << ( larry == moe ) << endl;
  cout << "(larry == stooge): " << ( larry == stooge ) << endl;

  Mystring stooges = "Larry" + moe;
  stooges.display();

  Mystring two_stooges = moe + " " + "Larry";
  two_stooges.display();
  Mystring three_stooges = moe + " " + larry + " " + "Curly";
  three_stooges.display();

  return 0;
}