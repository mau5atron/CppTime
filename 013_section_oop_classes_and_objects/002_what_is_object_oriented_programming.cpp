#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  What is Object-Oriented Programming?
  - Procedural Programming
  - Procedural Programming limitations
  - OO Programming concepts and their advantages
  - OO Programming limitations

  Procedural Programming:
  - Focus is on processes or actions that a program takes 
  - Programs are typically a collection of functions
  - Data is declared separately
  - Data is passed as arguments into functions
  - Fairly easy to learn

  Procedural Programming - limitations
  - Functions need to know the structure of the data
    - If the structure of the data changes many functions must be changed
  - As programs get larger they become more:
    - difficult to understand
    - difficult to maintain 
    - difficult to extend
    - difficult to debug
    - difficult to reuse code
    - fragile and easier to break

  What is Object-Oriented Programming?
  - Classes and Objects
    - focus is on classes that model real-world domain entities 
    - Allows developers to think at a higher level of abstraction
    - Used successfully in very large programs

  - Encapsulation
    - Objects contain data AND operations that work on that data 
    - Abstract Data Type (ADT)

  - Information-Hiding
    - Implementation-specific logic can be hidden
    - Users of the class code to the interface since they don't need
      to know th implementation
    - More abstraction
    - Easier to test, debug, maintain and extend

  - Reusability 
    - Easier to reuse 
    - Faster development
    - Higher quality

  - Inheritance
    - Can create new classes in terms of existing classes
    - Reusability 
    - Polymorphism classes
  - Polymorphism and more...

  Limitations:

  - Not a panacea
    - OO programming won't make bad code better
    - Not suitable for all types of problems
    - Not everything decomposes to a class
  - Learning curve 
    - Usually a steeper learning curve, especially for C++
    - Many OO languages, many variations of OO concepts 
  - Design
    - Usually more up-front design is necessary 
      to create good models and hierarchies
  - Programs can be: 
    - Larger in size
    - Slower
    - More complex
*/