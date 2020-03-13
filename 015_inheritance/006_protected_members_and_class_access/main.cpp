#include <iostream>
// protected members and class access
using std::cout;
using std::endl;

class Base
{
  // note friends of base have access to all
public:
  int a { 0 };
  void display(){
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    // member method has access to all
  }
protected: 
  int b { 0 };
private:
  int c { 0 };
};

class Derived: public Base
{
public:
  void access_base_members(){
    a = 100; // ok, bc public in parent, public in derived
    b = 200; // ok, bc protected in parent, derived class has protected attribute as well
    // c = 300; // not accessible from parent
  }
};

int main(void)
{
  cout << "=== Base member access from base objects =========" << endl;
  Base base;
  base.a = 100; // ok
  base.display();
  // base.b; // compiler error
  // base.c; // compiler error
  cout << "=== Base member access from derived objects =========" << endl;
  Derived d;
  d.a = 100; // OK
  d.b = 200; // compiler error
  d.c = 300; // compiler error
  return 0;
}