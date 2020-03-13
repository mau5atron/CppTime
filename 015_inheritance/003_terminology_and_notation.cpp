#include <iostream>

int main(void)
{
  return 0;
}

/*
  Terminology and Notation
    - Inheritance
      - Process of creating new classes from existing classes
      - Reuse mechanism
    - Single inheritance
      - A new class is created from another 'single' class
    - Multiple inheritance
      - A new class is created from two ( or more ) other classes
  
    
    - Base class
      - the class being extended or inherited from
    - Derived class (child class, sub class)
      - The class being created from the base class
      - Will inherit attributes and operations from base class

    - "Is-A" relationship
      - Public inheritance
      - Derived classes are sub-types of their base classes
      - Can use a derived class object wherever we use a base class object
    
    - Generalization
      - Combining similar classes into a single, more general class based on
        common attributes
    - Specialization
      - Creating new classes from existing classes proving more specialized
        attributes or operations
    - Inheritance
      - organization of our inheritance relationships

  Class Hierarchy
    - Classes:
      - A
      - B is derived from A
      - C is derived from A
      - D is derived from C
      - E is derived from D


      or 

      - Person
      - Employee is derived from Person
      - Student is derived from Person
      - Faculty is derived from Employee
      - Staff is derived form Employee
      - Administrator is derived from Employee

      
      
*/