#ifndef _DERIVED_H_
#define _DERIVED_H_
#include "Base.h"

class Derived : public Base 
{
private:
  int doubled_value;
public:
  Derived(); // no args constructor
  Derived( int x ); // single args constructor
  ~Derived(); // destructor
};

#endif