#include <iostream>

class Base
{
public:
  virtual void say_hello() const {
    std::cout << "Hello - I'm Base class object" << std::endl;
  }

  virtual ~Base(){}
};

class Derived : public Base
{
public:
  // without override with const
  // hidden overloaded virtual function 'Base::say_hello' declared here:
  // different qualifiers (const vs none)
  
  // putting const fixes it, but whenever you are overriding a derived function
  // to dynamically bind it to its current class, you can provide override,
  // which lets the compiler know that you are overriding behaviour
  virtual void say_hello() const override {
    std::cout << "Hello - I'm a Derived class object" << std::endl;
  }
   
  virtual ~Derived(){}
};

int main(void)
{
  Base *p1 = new Base();
  (*p1).say_hello();

  Derived *p2 = new Derived();
  (*p2).say_hello();

  Base *p3 = new Derived();
  (*p3).say_hello();

  return 0;
}

/*
  Polymorphism - The Override Specifier
    - We can override Base class virtual functions
    - The function signature and return must be EXACTLY the same
    - If they are different then we have redefinition NOT overriding 
    - Redefinition is statically bound
    - Overriding is dynamically bound
    - C++11 provides an override specifier to have the compiler ensure
      overriding
    - Makes sure you are overriding and not redefining a function

  The Override specifier: 

    class Base
    {
    public:
      virtual void say_hello() const {
        std::cout << "Hello - I'm Base class object" << std::endl;
      }

      virtual ~Base(){}
    };

    class Derived : public Base
    {
    public:
      virtual void say_hello(){ // doesn't have const, not overriding
        std::cout << "Hello - I'm Derived class object" << std::endl;
      }

      virtual ~Derived(){}
    };

  The Override Specifier:

    Base:

      virtual void say_hello() const;
    
    Derived:

      virtual void say_hello();


  The Override Specifier:

    Base *p1 = new Base();
    (*p1).say_hello(); // "Hello - I'm a Base class object"

    Base *p2 = new Derived();
    (*p2).say_hello(); // "Hello - I'm a Base class object"

    - Not what we expected
    - say_hello() method signatures are different
    - So Derived redefines say_hello() instead of overriding it
    - say_hello() remains statically bound to Base

  The Override Specifier:

    class Base
    {
    public:
      virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
      }

      virtual ~Base(){}
    };

    class Derived : public Base
    {
    public:

      virtual void say_hello() override {
        // using override produces compiler error
        // Error: marked override but does not include override
        // does this because missing const
        std::cout << "Hello - I'm a Derived class object" << std::endl;
      }

      virtual ~Derived(){}
    };


  // View example above
*/