#include <iostream>

int main()
{
  return 0;
}

/*
  Structs vs Classes:
    - In addition to defining a class we can declare a struct
    - 'struct' comes from the C programming language 
    - Essentially the same thing as a class except
      * struct members are public by default
      * class members are private by default
    
  Class:

    class Person 
    {
      std::string name;
      std::string get_name();
    };

    Person p;
    p.name = "Frank"; // compiler error - private
    std::cout << p.get_name(); // compiler error - private

  Struct:

    struct Person 
    {
      std::string name;
      std::string get_name();
    };

    Person p;
    p.name = "Frank"; // OK - public
    std::cout << p.get_name(); // OK - public


  Some general Guidelines:

    - struct
      * Use 'struct' for passive objects with public access
      * Don't declare methods in struct
    
    - class
      * Use class for active objects with private access
      * Implement getters/setters as needed
      * Implement member methods as needed
*/