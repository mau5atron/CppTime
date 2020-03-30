#include <iostream>

int main(void)
{
  return 0;
}

/*
  Polymorphism - Pure Virtual Functions and Abstract Classes
    - What is an abstract class?
    
    - Abstract class
      - Cannot instantiate objects
      - These classes are used as base classes in inheritance hierarchies
      - Often referred to as Abstract Base Classes

    - Concrete class
      - Used to instantiate objects from
      - All their member functions are defined
        - Checking Account, Savings Account
        - Faculty, Staff
        - Enemy, Level Boss
    
  Pure Virtual functions and abstract classes:
    - Abstract base class
      - too generic to create objects from
        - Shape, Employee, Account, Player
      - Serves as parent to derived classes that may have objects
      - Contains at least one pure virtual function

  What is a pure virtual function?:

    - Pure virtual function
      - Used ot make a class abstract
      - Specified with "=0" in its declaration

        virtual void function() = 0; // pure virtual function
      
      - Typically do not provide implementations
  
  What is a pure virtual function?:

    - Pure virtual function
      - Derived classes must override the base class
      - If the derived class does not override then the derived class is also
        abstract
      - Used when it doesn't make sense for a base class to have an
        implementation 
        - But concrete classes must implement it

        virtual void draw() = 0; // Shape
        virtual void defend() = 0; // Player

  Pure virtual functions and abstract classes:

    class Shape // abstract class
    {
    private:
      // attributes common to all shapes
    
    public:

      virtual void draw() = 0; // pure virtual function
      virtual void rotate() = 0; // pure virtual function
      virtual ~Shape();
      ....
    };

    // deriving from Shape class

    class Circle : public Shape
    {
    private:
      // attributes for a circle
    public:
      virtual void draw() override {
        // code to draw circle
      }

      virtual void rotate() override {
        // code to rotate a circle
      }

      virtual ~Circle();
    };


  Pure virtual functions and abstract classes:

    - Abstract Base class

      - Cannot be instantiated

      Shape shape; // error
      Shape *ptr = new Shape();

    - We can use pointers and references to dynamically refer to concrete
      classes derived from them
    - This works, bc all concrete clases derived from Shape, must have
      overridden the draw() and rotate() functions

      Shape *ptr = new Circle();
      ptr->draw();
      ptr->rotate();
*/