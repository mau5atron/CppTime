#ifndef _BASE_H_
#define _BASE_H_

class Base
{
private:
  int value;
public:
  Base(); // no args constructor
  Base( int x ); // single integer arg constructor
  ~Base(); // base destructor
};

#endif