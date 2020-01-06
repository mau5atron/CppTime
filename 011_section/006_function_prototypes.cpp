#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  Function Prototypes:
  - The compiler must 'know' about a function before it us used.
    - Define functions before calling them.
      - Ok for small programs.
      - Not a practical solution for larger programs.
    
    - Use function prototypes (also called a forward declaration)
      - Tells the compiler what it needs to know without a full function
        definition.
      - Also called forward declarations.
      - Placed at the beginning of the program.
      - Also used in our own header files (.h) - more about this later.

  Example: 
    top of the file: 
    
    int function name(); // prototype 

    int function_name(){
      statement(s);
      return 0;
    }

  Example:

    int function_name(int); // prototype
              OR
    int function_name(int a); // prototype

    int function_name(int a){
      statement(s);
      return 0;
    }

  Example:

    void function_name(); // prototype

    void function_name(){
      statement(s);
      return 0;
    }

  Example: 

    void function_name(int a, std::string b);
    OR
    void function_name(int, std::string b);

    void function_name(int a, std::string b){
      statement(s);
      return 0;
    }

  Example: 

    void say_hello();

    void say_hello(){
      cout << "Hello world" << endl;
    }
*/ 