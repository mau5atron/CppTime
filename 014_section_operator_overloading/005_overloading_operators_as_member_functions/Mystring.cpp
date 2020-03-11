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

// Move constructor (=) temp r-values assigned to left side overwrite
Mystring::Mystring( Mystring &&source ) : str {source.str} {
  source.str = nullptr;
  std::cout << "Move constructor used." << std::endl;
}

// Move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs){
  std::cout << "Using move assignment" << std::endl;
  if( this == &rhs ){
    return *this;
  }

  delete [] str; // delete str from current object
  str = rhs.str; // steal pointer from right hand side and point current object to that pointer data
  rhs.str = nullptr; // nullify right hand pointer after moving
  return *this;
}

// check for c-style string equality
bool Mystring::operator==(const Mystring &rhs) const {
  // compare and return two c-style strings
  return ( std::strcmp(str, rhs.str) == 0 );
}

// Make lowercase
Mystring Mystring::operator-() const {
  // const because we do not want to change our current object
  // copy whatever is in the current object
  // make the object lowercase
  // create a new object from it

  // allocate space to make copy
  char *temp_buff = new char[std::strlen(str) + 1]; // + 1 to include the null character, getting length of constructed string
  std::strcpy(temp_buff, str); // copy c-style string to memory on the heap
  // loop through characters
  for( size_t i {0} ; i < std::strlen(temp_buff) ; i++ ){
    temp_buff[i] = std::tolower(temp_buff[i]); // lowercase each character in the copied c-style string
  }

  Mystring temp {temp_buff}; // create new object, initialize from temporary object copy on heap
  delete [] temp_buff; // de-allocate object copy before ending function and returning object based on the lowercased copy of str(temp_buff)
  return temp; // return object
}

// concatenate operator overloading function
Mystring Mystring::operator+( const Mystring &rhs ) const {
  // allocate area of memory for characters
  char *temp_buff = new char[ std::strlen(str) + std::strlen(rhs.str) + 1]; // allocate memory on heap for concatenating strings
  std::strcpy(temp_buff, str); // copy left hand str into buffer
  std::strcat(temp_buff, rhs.str); // concatenate right hand side str into buffer that already contains left hand side string
  Mystring temp {temp_buff};
  delete [] temp_buff; // de-allocate buffer memory area on the heap
  return temp;
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