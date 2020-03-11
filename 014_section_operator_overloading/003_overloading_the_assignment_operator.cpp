#include <iostream>

int main(void)
{
  return 0;
}

/*
  Overloading the Assignment Operator:
    - Copy assignment operator (=)
    - C++ provides a default assignment operator used for assigning one object
      to another

      Mystring s1 { "Frank" };
      Mystring s2 = s1; // NOT assignment 
      // same as Mystring s2 {s1};

      // you can only assign an object if it has already been initialized
      s2 = s1; // assignment

    - Default is memberwise assignment (shallow copy)
      - If we have raw pointer data member we must deep copy

  Overloading the copy assignment operator (deep copy)

    Type &Type::operator=(const Type &rhs);

    Mystring &Mystring::operator=(const Mystring &rhs);

    s2 = s1; // we write this
    s2.operator=(s1); // 'operator=' method is called

  Overloading the copy assignment operator (deep copy)

    Mystring &Mystring::operator=(const Mystring &rhs){
      if( this == &rhs ){ // rhs is right hand side object
        return *this;
      }

      delete [] str;
      str = new char[std::strlen(rhs.str) + 1];
      std::strcpy(str, rhs.str); // copy right hand side object and its attributes to the left hand side
      return *this;
    }

  Overloading the copy assignment operator - steps for deep copy

    - Check for self assignment 

      if (this == &rhs){ // p1 = p1;
        return *this; // return current object
      }

    - Deallocate storage for this->str since we are overwriting
      delete [] str;

    - Allocate storage for the deep copy

      str = new char[std::strlen(rhs.str) + 1];

    - Perform the copy
      std::strcpy(str, rhs.str);
    
    - Return the current by reference to allow chain assignment

      return *this;
    
      // s1 = s2 = s3;
        
      
*/