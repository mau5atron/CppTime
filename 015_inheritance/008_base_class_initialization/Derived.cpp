#include <iostream>
#include "Derived.h"

using std::cout;
using std::endl;

Derived::Derived() : doubled_value { 0 }{
  cout << "Derived no-args constructor" << endl;
}

Derived::Derived( int x ) : Base { x }, doubled_value { x * 2 }{
  cout << "Derived single (int) overloaded constructor" << endl;
}

Derived::~Derived(){
  cout << "Derived destructor" << endl;
}