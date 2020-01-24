#include <iostream>

using namespace std;

int main(void)
{

  return 0;
}

/*
  What is a pointer?
  - A variable 
    - whose value is an address
  - What can be at that address?
    - Another variable 
    - A function
  - if x is an integer variable and its value is 10
    then I can declare a pointer that points to it
  - To use the data that the pointer is pointing to you must know its type


  Why use pointers?
  
  - Can't I just use the variable or function itself?
  - Yes, but not always

  - Inside functions, pointers can be used to access data that are defined
    outside the function.
    Those variables may not be in scope so you can't access them by their name
  - Pointers can be used to operate on arrays very efficiently 
  - We can allcate memory dynamically on the heap or free store 
    - This memory does not even have a variable name
    - The only way to get to it is via a pointer 
  - With object oriented, pointers are how polymorphism works!
  - Can access specific addresses in memory 
    - Useful in embedded and systems applications

*/ 