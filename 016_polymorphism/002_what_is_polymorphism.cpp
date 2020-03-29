#include <iostream>
#include <memory> // for smart pointer

// defining make_unique
template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args){
  return std::unique_ptr<T>( new T( std::forward<Args>( args )... ) );
}

class Base
{
public:
  void say_hello() const {
    std::cout << "Hello - I am a Base class object" << std::endl;
  }
};

class Derived : public Base
{
public:
  void say_hello() const {
    std::cout << "Hello - I am a Derived class object" << std::endl;
  }
};

void greetings( const Base &obj ){ // Base::say_hello()
  std::cout << "Greetings: ";
  obj.say_hello();
}

int main(void)
{
  Base b; // base class object, compiler knows this
  // compiler knows that there are no virtual functions so it will default to
  // static binding functions
  b.say_hello();

  Derived d;
  d.say_hello();

  // outputs the same thing based on the Base class bc the argument in
  // greetings() specifies a Base class object is expected
  greetings(b); // Greetings: Hello - I am a Base class object
  greetings(d); // Greetings: Hello - I am a Base class object

  // base pointer

  Base *ptr = new Derived(); // *ptr can hold the address of any base object, Derived is a base object
  // pointer to a Base object, in this case, Derived, bc Derived is also a base
  // object bc of inheritance
  (*ptr).say_hello(); // always binded to Base::say_hello();

  std::unique_ptr<Base> ptr1 = make_unique<Derived>(); // don't need to worry about smart pointers, they take care of themselves
  (*ptr1).say_hello(); // statically binded to Base::say_hello()

  return 0;
}

/*
  What is Polymorphism?:

    - Fundamental to Object-Oriented Programming

    - Polymorphism
      - Compile-time / early binding / static binding // before the program runs
      - Run-time / late-binding / dynamic binding // when the program is running
    
    - Runtime polymorphism
      - Being able to assign different meanings to the same function at run-time
    
    - Allows us to program more abstractly
      - Think general vs. specific
      - Let C++ figure out which function to call at run-time
    
    -  Not the default in C++, run-time polymorphism is achieved via
      - Inheritance
      - Base class pointers or references
      - Virtual functions


  Types of Polymorphism in C++:

    A non-polymorphic example - Static Binding:

      - Compile-time
        - Operator overloading
        - Function overloading
      
      - Run-time // what we'll be using in this section
        - Function overriding
    
    Non-Polymorphic example - Static binding:

      Account a;
      a.withdraw( 1000 ); // Account::withdraw()

      Savings b;
      b.withdraw(1000); // Savings::withdraw()

      Checking c;
      c.withdraw( 1000 ); // Checking::withdraw()

      Trust d;
      d.withdraw( 1000 ); // Trust::withdraw()

      Account *p = new Trust();
      p->withdraw( 1000 ); // Account::withdraw()
      // should be Trust::withdraw()
      // (*p).withdraw( 1000 );

    Another non-polymorphic example - Static Binding

      void display_account( const Account &acc ){
        acc.display();
        // will alawys use Account::display
      }

      Account a;
      display_account( a );

      Savings b;
      display_account( b );

      Checking c;
      display_account( c );
      
      Trust d;
      display_account( d );


    A Polymorphic example - Dynamic Binding

      Account a;
      a.withdraw( 1000 ); // Account::withdraw()

      Savings b;
      b.withdraw( 1000 ); // Savings::withdraw()

      Checking c;
      c.withdraw( 1000 ); // Checking::withdraw()

      Trustd d;
      d.withdraw( 1000 ); // Trust::withdraw()

      Account *p = new Trust();
      p->withdraw( 1000 ); // Trust::withdraw();
      // or (*p).withdraw( 1000 ); // Trust::withdraw()

    - the idea of using virtual functions tells the compiler not to bind the
      call at compile time, but instead defer the binding to run-time
    - at runtime, a check will occur to see what p is pointing to, and then that
      objects method will be called, in this case the Trust::withdraw() method

  Dynamic binding example

    // display method is virtual in Account
    void display_account( const Account &acc ){
      // will always call the display method 
      // depending on the object's type at runtime
    }

    Account a;
    display_account(a);

    Savings b;
    display_account(b);

    Checking c;
    display_account( c );

    Trust d;
    display_account( d );
*/