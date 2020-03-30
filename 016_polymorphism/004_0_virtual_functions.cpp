#include <iostream>

int main(void)
{
  return 0;
}

/*
  Virtual Functions:
    - Redefined functions are bound statically 
    - Overridden functions are bound dynamically
    - Virtual functions are overridden
    - Allows us to treat all objects generally as objects of the Base class

  Declaring Virtual Functions:
    - Declare the function you want to override as virtual in the Base class
    - Virtual functions are virtual all the way down ther hierarchy from this
      point
    - Dynamic polymorphism only via Account class pointer or reference

    class Account
    {
    public:
      virtual void withdraw( double amount );
      // function will be bound to the derived class instead of statically bound
      // to the base class
      ........
    };

  Declaring virtual functions
    - Override the function in the Derived classes
    - Function signature and return type must match EXACTLY
    - Virtual keyword not required but is best practice
    - IF you do not provide an overridden version it is inherited from its base
      class
    
    class Checking : public Account
    {
    public:
      virtual void withdraw( double amount );
    };
*/