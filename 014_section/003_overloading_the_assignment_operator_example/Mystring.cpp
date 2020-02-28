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

// Copy assignment (=)
Mystring &Mystring::operator=(const Mystring &rhs){
  std::cout << "Copy assignment called" << std::endl;
  std::cout << "Value of 'this'" << this << std::endl;
  std::cout << "Value is rhs: " << &rhs << std::endl;
  if(this == &rhs){
    return *this; // passing object reference
  }

  delete [] str; // or this->str;, delete left hand side objects string on the heap
  str = new char[std::strlen(rhs.str) + 1]; // allocate memory for new object string on heap memory
  // also allocate enough memory based on right hand side assignment string
  // length, which rhs has a property of str, then add 1 for the null character

  std::strcpy(str, rhs.str); // this->str
  return *this;
}

// Display method
void Mystring::display() const {
  std::cout << "Length of '" << str << "' : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const {
  return std::strlen(str);
}

const char *Mystring::get_str() const {
  return str;
}