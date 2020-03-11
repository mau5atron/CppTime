// end if _MYSTRING_H_ is defined
#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
  char *str; // pointer to a char[] that holds a c-style string
public:
  Mystring(); // no args constructor
  Mystring( const char *s ); // overloaded constructor
  Mystring( const Mystring &source ); // copy constructor
  Mystring( Mystring &&source ); // move constructor
  ~Mystring(); // destructor

  Mystring &operator=(const Mystring &rhs); // Copy assignment
  Mystring &operator=(Mystring &&rhs); // Move assignment

  // operator overloading
  Mystring operator-() const; // make lowercase
  Mystring operator+(const Mystring &rhs) const; // concatenate
  bool operator==(const Mystring &rhs) const; // string comparison

  void display() const;
  // getters
  int get_length() const;
  const char *get_str() const;
};

#endif // _MYSTRING_H_ is defined