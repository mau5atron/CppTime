#include <iostream>

using std::cout;
using std::endl;

class Base
{
private:
  int value;
public:
  Base() : value { 0 }{
    cout << "Base no-args constructor" << endl;
  }

  Base( int x ) : value { x }{
    cout << "Base (int) overloaded constructor" << endl;
  }
};

class Derived: public Base
{
  using Base::Base; // allows us to inherit the non-special constructors from base class
private: 
  int double_value;
public:
  Derived() : double_value { 0 }{
    cout << "Derived no-args constructor" << endl;
  }

  Derived( int x ) : double_value { x*2 }{
    cout << "Derived (int) overloaded constructor" << endl;
  }

  ~Derived(){
    cout << "Derived destructor " << endl; 
  }
};

int main(void)
{
  // Base base;
  // Base base { 100 };
  // Derived d;
  Derived d { 1000 };

  return 0;
}