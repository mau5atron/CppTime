#include <iostream>

int main(void)
{
  return 0;
}

/*
  Inheritance - Passing arguments to base class constructors

    - The base part of a derived class must be intialized first
    - How can we control exactly which Base class constructor is used during
      intialization?
    - We can invoke the whichever Base class constructor we wish in the
      initialization list of the Derived class
    
    Example:

      class Base
      {
      public:
        Base();
        Base(int);
        ....
      };

      Derived::Derived(int x) : Base(x), { optional initializers for Derived }{
        // code
      }


  Constructors and class initialization

    class Base
    {
      int value;
    public:
      Base() : value { 0 }{
        cout << "Base no-args constructor" << endl;
      }

      Base(int x) : value { x }{
        cout << "int Base constructor" << endl;
      }
    };

    class Derived : public Base 
    {
      int doubled_value;

    public:
      Derived() : Base {}, doubled_value { 0 }{
        cout << "Derived no-args constructor " << endl;
      }

      Derived(int x) : Base { x }, doubled_value { x*2 }{
        cout << "int Derived constructor " << endl;
      }
    };

  // Creating objects based on class definitions above

    Base base; // Base no-args constructor

    Base base { 100 }; // int Base constructors

    Derived derived;
    // Base no-args constructor
    // Derived no-args constructor

    Derived derived { 100 };
    // int Base constructor
    // int Derived constructor


*/