#include <iostream>

int main(void)
{
  return 0;
}

/*
  Operator Overloading: Move assignment operator (=)
    - You can choose to overload the move assignment operator
      - C++ will use the copy assignment operator if necessary
      
      Mystring s1; // empty string

      s1 = Mystring {"Frank"}; // move assignment from temp object (r-value),
      move assignment operator will be called

    - If we have raw pointer we should overload the move assignment operator for
      efficiency

  Overloading the Move assignment Operator
    // similar to copy assignment
    // except in parameter list, we && to signify that it is an temp r-value reference
    Type &Type::operator=(Type &&rhs);
    Mystring &Mystring::operator=(Mystring &&rhs);
    s1 = Mystring("Joe"); // move operator= called
    s1 = "Frank"; // move operator= called
  
  Overloading the Move assignment operator Example:

    Mystring &Mystring::operator=(Mystring &&rhs){
      if( this == &rhs ){ // self assignment
        return *this; // return the object if it is the same as the r-value being assigned
      }

      delete [] str; // deallocate current storage
      str = rhs.str; // steal the pointer
      
      rhs.str = nullptr; // null out the rhs object

      return *this; // return the current object
    }

  - Steps from example above:

    - Check for self assignment  
      if( this == &rhs ){
        return *this; // return current object
      }

    - Deallocate storage for (str) or (this->str) since we are overwriting it
    - Note: deallocting left hand side value since we are overwriting it

      delete [] str;

    - Steal the pointer from the rhs object and assign it to this->str

      str = rhs.str; // copy of a pointer variable, not doing deep copy

    - Then null out the rhs pointer after we have moved it

      rhs.str = nullptr;
    
    - Return the current object by reference to allow chain assignment

      return *this;
    


*/