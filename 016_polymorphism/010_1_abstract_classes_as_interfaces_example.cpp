#include <iostream>

// This file is the same as 010_0_ but with the printable interface called
// printable in order to print for ever class

// Account
class Account
{
  // friend std::ostream &operator<<( std::ostream &os, const Account &account );
public:
  virtual void withdraw( double amount ){
    std::cout << "In Account::withdraw" << std::endl;
  }

  virtual ~Account(){}
};

std::ostream &operator<<( std::ostream &os, const Account &account ){
  os << "Account display";
  return os;
}


// Checking
class Checking : public Account
{
  // friend std::ostream &operator<<( std::ostream &os, const Checking &account );
public:
  virtual void withdraw( double amount ){
    std::cout << "In Checking::withdraw" << std::endl;
  }

  virtual ~Checking(){}
};

std::ostream &operator<<( std::ostream &os, const Checking &account ){
  os << "Checking Account display";
  return os;
}

// Savings
class Savings : public Account
{
  // friend std::ostream &operator<<( std::ostream &os, const Savings &account );
public:
  virtual void withdraw( double amount ){
    std::cout << "In Savings::withdraw" << std::endl;
  }

  virtual ~Savings(){}
};

std::ostream &operator<<( std::ostream &os, const Savings &account ){
  os << "Savings Account display";
  return os;
}

// Trust
class Trust : public Account
{
  // friend std::ostream &operator<<( std::ostream &os, const Trust &account );
public:
  virtual void withdraw( double amont ){
    std::cout << "In Trust::withdraw" << std::endl;
  }

  virtual ~Trust(){}
};

std::ostream &operator<<( std::ostream &os, const Trust &account ){
  os << "Trust Account display";
  return os;
}

int main(void)
{
  Account *p1 = new Account();
  Account *p2 = new Savings();

  std::cout << *p1 << std::endl;
  std::cout << *p2 << std::endl;

  Account a;
  std::cout << a << std::endl;

  Savings b;
  std::cout << b << std::endl;

  Checking c;
  std::cout << c << std::endl;

  Trust d;
  std::cout << d << std::endl;

  return 0;
}

/*
  Polymorphism - Abstract Clases as Interfaces

    - What is using a class as an interface?

      - An abstract class that has only pure virtual functions
      - These functions provide a general set of services to the user of the class
      - Provided as public
      - Each subclass is free to implement these services as needed
      - Every service ( method must be implemented )
      - The service type information is strictly enforced

  A printable example:

    - Unlike Java, C#, and other languages, C++ does not supply a specific
      keyword to create an interface as part of the C++ core language
    - In C++ we use abstract classes with pure virtual functions to achieve the
      concept of an interface
    
    - C++ does not provide true interfaces
    - We use abstract classes and pure virtual functions to achieve it
    - Suppose we want to be able to provide Printable support for any object we
      wish without knowing its implementation at compile time

      std::cout << any_object << std::endl;

      - any_object must conform to the Printable interface
    
  
  Example:

    class Printable
    {
      // friend std::ostream &operator<<( std::ostream &, cosnt Printable &obj );
    public:
      virtual void print( std::ostream &os ) const = 0;
      virtual ~Printable();
    };


    // in header file
    std::ostream &operator<<( std::ostream &os, const Printable &obj ){
      obj.print( os );
      return os;
    }

  Printable example:

    class Any_Class : public
    {
    public:
      // must override Printable::print()
      virtual void print( std::ostream *os ) override {
        os << "Hi from Any_Class";
      }
    };

  A Printable Example (again):

    Any_Class *ptr = new Any_Class();
    std::cout << *ptr << std::endl;

    void functiona1( Any_Class &obj ){
      std::cout << obj << std::endl;
    }

    void function2( Printable &obj ){
      std::cout << obj << std::endl;
    }

    function1( *ptr ); // "Hi from Any_Class"
    function2( *ptr ); // "Hi from Any_Class"


  A Shapes Example:

    class Shape
    {
    // only has pure virtual functions
    // is an abstract class
    // can also be used as an interface class
    // what we are saying is if you want to be a concrete shape
    // then you must be derived from shape and you must override the 
    // draw() and rotate() pure virtual functions
    public:
      virtual void draw() = 0;
      virtual void rotate() = 0;
      virtual ~Shape(){};
    };


    // if we want Circle to be a concrete class
    // we need to override the virtual functions
    class Circle : public Shape
    {
    public:
      // must override virtual function
      virtual void draw() override{
        // code
      }

      virtual void rotate() override {
        // code
      }

      virtual ~Circle(){};
    };

    // put an I for classes that are meant to be used as interface
    class I_Shape
    {
    public:
      virtual void draw() = 0;
      virtual void rotate() = 0;
      virtual ~I_Shape(){};
      ....
    };

    - Line and Square classes would be similar


  A Shapes Example:


    std::vector<I_Shape*> shapes;

    I_Shape *p1 = new Circle();
    I_Shape *p2 = new Line();
    I_Shape *p3 = new Square();

    for( I_Shape* &shape : shapes ){
      ( *shape ).rotate();
      ( *shape ).draw();
    }

    // delete the pointers

    // Look at main for example
*/