#include <iostream>

class Base
{
private:
  int value;
public:
  Base() : value { 0 }{
    std::cout << "Base class no-args constructor" << std::endl;
  }

  Base( int x ) : value { x }{
    std::cout << "Base class single int (x) arg constructor" << std::endl;
  }

  Base( const Base &other ) : value { other.value } {
    std::cout << "Base copy constructor" << std::endl;
  }

  Base &operator=( const Base &rhs ){
    std::cout << "Base operator" << std::endl;

    if( this == &rhs ){
      return *this;
    }

    value = rhs.value;
    return *this;
  }

  ~Base(){
    std::cout << "Base destructor" << std::endl;
  }
};

class Derived : public Base
{
private:
  int doubled_value;
public:
  Derived() : Base {}{ // constructing Base class object on no arg constructor for Derived
    std::cout << "Derived no-args constructor" << std::endl;
  }

  Derived( int x ) : Base { x }{
    std::cout << "int Derived constructor" << std::endl;
  }

  Derived( const Derived &other ) : Base( other ), doubled_value { other.doubled_value }{
    std::cout << "Derived copy constructor" << endl;
  }

  Derived &operator=( const Derived &rhs ){
    std::cout << "Derived operators=" << std::endl;

    if( this == &rhs ){
      return *this;
    }

    Base::operator=( rhs );
    doubled_value = rhs.doubled_value;
    return *this;
  }

  // Destructor
  ~Derived(){
    std::cout << "Derived destructor" << std::endl;
  }
}; 

int main(void)
{
  Base b { 0 }; // overloaded constructor
  Base b1 { b }; // copy constructor
  b = b1; // copy assignment

  Derived d { 100 }; // overloaded constructor
  Derived d1 { d }; // copy constructor
  d = d1; // copy assignment

  return 0;
}

/*
  Inheritance - Copy/Move constructors and overloaded operator=

    - Not intended from the base class
    - You may not need to provide your own
      - Compiler-provided versions may be just fine
    - We can explicitly invoke the Base class versions from the Derived class
    
  Copy Constructor:
    - Can invoke Base copy constructor explicitly
      - Derived object 'other' will be sliced
    
    Derived::Derived( const Derived &other ) : Base { other }, { Derived
    initialization list }{
      // code
    }

  Constructors and Destructors
    - Copy constructors

    class Base
    {
    private:
      int value;
    public:
      // Same constructors as previous example

      Base( const Base &other ) : value { other.value }{
        cout << "Base copy constructor" << endl;
      }
    };

    class Derived : public Base
    {
    private:
      int doubled_value;
    public:
      // same constructors as previous example

      Derived( const Derived &other ) : Base ( other ), doubled_value { other.doubled_value }{
        cout << "Derived copy constructor" << endl;
      }
    }

    // overloaded copy assignment

    class Base
    {
    private:
      int value;
    public:
      // same constructors as previous example

      Base &operator=( const Base &rhs ){
        if( this != &rhs ){ // check for self assignment against this object
          value = rhs.value; // assign right hand side value to left
        }

        return *this; // return this object
      }
    };

    // operator=

    class Derived : public Base
    {
    private:
      int doubled_value;
    public:
      // same constructors as previous example
      Derived &operator=( const Derived &rhs ){
        if( this != &rhs ){ // check for self assignment 
          Base::operator=(rhs); // assign Base part
          doubled_value = rhs.doubled_value; // Assign Derived part
        }

        return *this; // return this object
      }
    };

  
  Recap - Copy/Move constructors and overloaded operator=

    - Often you do not need to provide your own
    - If you DO NOT define them in Derived
      - then the compiler will create them automatically and call the base
        class's version
    - If you DO NOT provide Derived versions
      - Then YOU must invoke the Base versions explicitly yourself
    
    - Be careful with raw pointers and dynamically allocate memory
      - especially if Base and Derived each have raw pointers
      - Provide them with deep copy semantics
    
  // follow example above in main^
*/