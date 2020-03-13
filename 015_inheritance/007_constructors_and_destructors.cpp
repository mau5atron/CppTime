#include <iostream>

int main(void)
{
  return 0;
}

/*
  Constructors and Destructors
    - Constructors and class initialization

      - A derived class inherits from its base class
      - The base part of the derived class MUST be intialized BEFORE the derived
        class is initialized
      - When a derived object is created
        - base class cosntructor executes then
        - derived class constructor executes

    Example:


      class Base
      {
      public:
        Base(){
          cout << "Base constructor" << endl;
        }
      };

      class Derived: public Base
      {
      public:=
        Derived(){
          cout << "Derived constructor" << endl;
        }
      };


  Constructors and class initialization

    Base base; // base constructor

    Derived derived; // Base constructor
                     // Derived constructor

  
  Destructors
    - Class destructors are invoked in the reverse order as constructors
    - The derived part of the Derived class MUST be destroyed BEFORE the Base
      class destructor is invoked
    
    - When a derived object is destroyed
      - Derived class destructor executes then
      - Base class destructor executes
      - Each destructor should free resources allocated in it's own constructors
    
    Example on using destructors:

      class Base
      {
      public:
        Base(){
          cout << "Base constructor" << endl;
        }

        ~Base(){
          cout << "Base destructor" << endl;
        }
      };

      class Derived: public Base
      {
      public:
        Derived(){
          cout << "Derived constructor " << endl;
        }

        ~Derived(){
          cout << "Derived destructor " << endl;
        }
      };

  Constructors and class initialization:

    Base base;
    // Base constructor
    // Base destructor

    Derived derived;
    // Base constructor
    // Derived constructor
    // Derived destructor
    // Base destructor


  Notes:

    - A Derived class does NOT inherit
      - Base class constructors
      - Base class destructor
      - Base class overloaded assignment operators
      - Base class friend functions
    - However, the base class constructors, destructors, and overloaded
      assignment operators can invoke the base-class versions
    - C++11 allows explicit inheritance of base 'non-special' constructors with
      - 'using Base::Base;' anywhere in the derived class declaration
      - Lots of rules involved, often better to define constructors yourself
*/