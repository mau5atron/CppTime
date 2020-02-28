#include <iostream>
#include "Mystring.h"
using std::cout;
using std::endl;

int main(void)
{
  Mystring empty; // no arg
  Mystring larry("Larry"); // overloaded
  Mystring stooge { larry }; // copy cosntructor
  empty.display();
  larry.display();
  stooge.display();
  return 0;
}