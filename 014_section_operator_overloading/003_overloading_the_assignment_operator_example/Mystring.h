#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
  char *str; // pointer to char[] that holds a c-style string
public:
  Mystring(); // no args contructor
  Mystring(const char *s); // overloaded constructor with single arg
  Mystring(const Mystring &source); // Copy constructor - deep copy
  ~Mystring(); // destructor

  // left hand side is current object (Mystring) = rhs (right hand side) of the
  // assignment operator is what we are assigning
  Mystring &operator=(const Mystring &rhs); // Copy assignment
  //       ^ overloading assignment operator (=)
  // THIS IS NOT CONSTRUCTION, it is assignment, again, not a constructor

  void display() const;

  // getters
  int get_length() const;
  const char *get_str() const;
};

#endif