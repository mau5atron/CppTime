#include "Mystring.h"
#include <iostream>
#include <cstring>

// no args contructor
Mystring::Mystring() : str {nullptr}{
  str = new char[1]; // allocate 1 character
  *str = '\0';
}

// arg constructor
Mystring::Mystring(const char *s) : str {nullptr}{
  if( s == nullptr ){
    str = new char[1];
    *str = '\0'; // setting to null
  } else {
    str = new char[std::strlen(s) + 1];
    std::strcpy(str, s); // copy s to strs
  }
}

// copy
Mystring::Mystring( const Mystring &source) : str {nullptr}{
  str = new char[std::strlen(source.str) + 1];
  std::strcpy(str, source.str);
}

// destructor
Mystring::~Mystring(){
  delete [] str;
}

// Display method
void Mystring::display() const {
  std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const {
  return std::strlen(str);
}

const char *Mystring::get_str() const {
  return str;
}