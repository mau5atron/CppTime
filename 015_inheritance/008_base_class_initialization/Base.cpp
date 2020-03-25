#include <iostream>
#include "Base.h"
using std::cout;
using std::endl;

Base::Base() : value { 0 }{
  cout << "Base no-args constructor" << endl;
}

Base::Base( int x ) : value { x }{
  cout << "Base (int) overloaded constructor" << endl;
}

Base::~Base(){
  cout << "Base destructor" << endl;
}