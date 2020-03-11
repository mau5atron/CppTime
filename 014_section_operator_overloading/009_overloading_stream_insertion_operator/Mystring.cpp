#include <iostream>
#include "Mystring.h"
#include <cstring>

// No args Constructor
Mystring::Mystring() : str { nullptr }{
  str = new char[1]; // allocate char size of 1 for str, null character
  *str = '\0'; // null character
}

// Args constructor
Mystring::Mystring( const char *s ) : str { nullptr }{
  if( s == nullptr ){
    str = new char[1]; // allocate char size of 1 for str, null character
    *str = '\0'; // null character
  } else {
    str = new char[ std::strlen(s) + 1 ]; // length of string + 1 for null
    std::strcpy( str, s ); // copy s to str
  }
}

// Copy Constructor
Mystring::Mystring( const Mystring &source ) : str { nullptr }{
  str = new char[ std::strlen(source.str) + 1 ]; // allocating space on heap for str
  std::strcpy( str, source.str );
}

// Destructor
Mystring::~Mystring(){
  delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=( const Mystring &rhs ){
  std::cout << "Copy assignment called" << std::endl;
  std::cout << "Value of this: " << this << std::endl;
  std::cout << "Value of rhs: " << &rhs << std::endl;
  if( this == &rhs ){
    return *this; // returning the existing object bc same
  }

  // free up left hand side object on the heap
  delete [] str; // can also be written as this->str
  str = new char[ std::strlen(rhs.str) + 1 ]; // allocate memory for the new object string on heap memory
  // allocating memory based on right hand side assignment string length

  std::strcpy( str, rhs.str ); // or rhs.str can be this->str
  return *this;
}

// Move Constructor ( = ) temp r-values assigned to left side overwrite
Mystring::Mystring( Mystring &&source ) : str { source.str }{
  source.str = nullptr;
  std::cout << "Move constructor used." << std::endl;
}

// Move assignment operator
Mystring &Mystring::operator=( Mystring &&rhs ){
  std::cout << "Using move assignment" << std::endl;
  if ( this == &rhs ){
    return *this;
  }

  delete [] str; // clear str object attribute data stored on heap
  str = rhs.str; // steal pointer data from right hand side and point current object instance attribute to that pointer data
  rhs.str = nullptr; // nullify and clear right hand pointer after moving
  return *this;
}

// dont need here because we are defining global functions instead of member functions
// check for c-style string equality
// bool Mystring::operator==( const Mystring &rhs ) const {
//   return ( std::strcmp( str, rhs.str ) == 0 );
// }

// Make lowercase
// Mystring Mystring::operator-() const {
//   // using const to make sure data is not changing for the current object
//   // attribute 

//   // this function makes the object data lowercase
//   // creates a new object from the current object

//   // allocate space to make a new copy of the current pointer attribute str 
//   char *temp_buff = new char[ std::strlen( str ) + 1 ];
//   // + 1 to include the null character, getting lenght of constructed string


//   std::strcpy( temp_buff, str ); // copy c-style string (collection of chars) to memory on the heap
  
//   // loop through characters
//   for ( size_t i { 0 } ; i < std::strlen( temp_buff ) ; i++ ){
//     temp_buff[i] = std::towlower( temp_buff[i] ); // lowercase each character in the copied c-style string
//   }

//   Mystring temp { temp_buff }; // create a new object, initialize from temporary object copy on heap
//   delete [] temp_buff; 
//   // de-allocate object copy before ending function and returning object based
//   // on the lowercased copy of str( temp_buff )
//   return temp; // return object
// }

// Concatenate operator overloading function
// Mystring Mystring::operator+( const Mystring &rhs ) const {
//   // allocate area of memory for characters
//   char *temp_buff = new char[ std::strlen(str) + std::strlen( rhs.str ) + 1 ];
//   std::strcpy( temp_buff, str ); // copy left str into buffer
//   std::strcat( temp_buff, rhs.str ); // concatenate right hand side str into buffer that already contains left hand side string
//   Mystring temp { temp_buff };
//   delete [] temp_buff;
//   return temp;
// }

// Display method
void Mystring::display() const {
  std::cout << "Length of '" << str << "' : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const {
  return std::strlen( str );
}

// get the c-style string
const char *Mystring::get_str() const {
  // return std::strlen( str ); // lol
  return str;
}

// Equality
// since it is not a member function, just a global function
// we write it as
/********
 * bool operator==()
 * intead of 
 * bool Mystring::operator==() if it was a member function part of the class
********/
bool operator==( const Mystring &lhs, const Mystring &rhs ){
  return ( std::strcmp(lhs.str, rhs.str ) == 0 ); // using strcmp (string compare to get boolean value )
}

// Make string lowercase
Mystring operator-( const Mystring &obj ){
  char *temp_buff = new char[ std::strlen( obj.str ) + 1 ];
  std::strcpy( temp_buff, obj.str ); // copy obj pointer to char collection to temporary buffer
  
  for( size_t i { 0 } ; i < std::strlen( temp_buff ) ; i++ ){
    temp_buff[i] = std::tolower( temp_buff[i] ); // lower case each character in the temporary buffer
  }

  Mystring temp { temp_buff };
  delete [] temp_buff;
  return temp;
}

// Concatenation
Mystring operator+( const Mystring &lhs, const Mystring &rhs ){
  char *temp_buff = new char[ std::strlen( lhs.str ) + std::strlen( rhs.str ) + 1 ]; // allocating memory on heap to fit left and right hand side values + null terminating character
  std::strcpy( temp_buff, lhs.str );
  std::strcat( temp_buff, rhs.str );
  
  Mystring temp { temp_buff };
  delete [] temp_buff;
  return temp;
}

// overloaded insertion operator
std::ostream &operator<<( std::ostream &os, const Mystring &rhs ){
  os << rhs.str;
  return os;
}

std::istream &operator>>( std::istream &in, Mystring &rhs ){
  char *buff = new char[1000];
  in >> *buff;
  rhs = Mystring { buff };
  delete [] buff;
  return in;

}