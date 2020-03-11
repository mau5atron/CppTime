#include <iostream>
#include "Mystring.h"
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
  Mystring larry {"larry"};
  Mystring moe { "moe" };
  Mystring curly;

  // cout << "Enter the third stooges name: \n> ";
  // cin >> curly;
  cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
  cout << "\nEnter the three stooges names separated by a space: ";
  cin >> larry >> moe >> curly;
  cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
  
  return 0;
}