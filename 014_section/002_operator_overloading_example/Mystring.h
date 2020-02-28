#ifndef _Mystring_H_
#define _Mystring_H_

class Mystring
{
private: 
  char *str; // c-style string
public:
  // no args contructor
  Mystring();
  // constructor
  Mystring(const char *s);
  // copy constructor
  Mystring(const Mystring &source);
  // destructor
  ~Mystring();

  void display() const;
  int get_length() const;
  const char *get_str() const;
};

#endif