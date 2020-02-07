#include "007_Dog.h"
#include <iostream>

using std::cout; // try to import individual type definitions
using std::endl;

Dog test_dog(){
  Dog spot;
  spot.name = "Spot";
  spot.age = 5;
  return spot;
}

int main(void)
{
  cout << "Dog name: " << test_dog().name << endl;
  cout << "Dog age: " << test_dog().age << endl;
  return 0;
}

/*
  Creating and Accessing Objects Problem:

  - We have already declared a C++ class named 'Dog' that is located in 'Dog.h'
    (we'll learn about header files later in this section)

  - In the 'test_dog' function create a 'Dog' object named 'spot' and, using the
    . (dot) operator, set the 'name' attribute to the string "Spot" and the
    'age' attribute to 5.
*/