/*
  Handling Exceptions - Stack Unwinding and how it works

    - Stack Unwinding
      - if an exception is thrown but not caught in the current scope c++ tries
        to find a handler for the exception by unwinding the stack
        - function in which the exception was not caught terminates adn is
          removed from the call stack
        - if a try block was used to then catch blocks are checked for a match
        - if no try block was used or the catch handler does not match stack
          unwinding occurs again.
        - If the stack is unwound back to main and no cach handler handles the
          exception the program terminates
        
*/

#include <iostream>

void func_a();
void func_b();
void func_c();
void func_d();

void func_a(){
  std::cout << "starting func_a\n";
  func_b();
  std::cout << "ending func_a\n";
}

void func_b(){
  std::cout << "starting func_b\n";
  try { // with this added exception, stack can actually unwind, else stack will quit and exit back to main without calling ending
    func_c();
  } catch ( int &ex ){
    std::cout << "caught error in func_b when calling func_c\n";
  }
  std::cout << "ending func_b\n";
}

void func_c(){ // function c never completes because it is not handling its own exception - popped off the stack
  std::cout << "starting func_c\n";
  throw 100; // exception example
  func_d();
  std::cout << "ending func_c\n";
}

void func_d(){
  std::cout << "starting func_d\n";
  std::cout << "ending func_d\n";
}

// visualizing pushing functions calls onto the callstack
int main(void){
  std::cout << "starting main\n";

  try {
    func_a();
  } catch ( int &ex ){
    std::cout << "caught error in main\n";
  }
  std::cout << "ending main\n";

  return 0;
}