#include <iostream>

int main(void)
{
  return 0;
}

/*
  Friends of a Class:
    - Friend // have always been controversial in c++
      * a function or class that has access to private class members
      * AND, that function of or class is NOT a member of the class it is accessing
    - Function
      * Can be regular non-member functions
      * Can be member methods of another class
    - Class
      * Another class can have access to private class members
  

    - Friendship must be granted NOT taken
      * Declared explicitly in the class that is granting friendship 
      * Declared in the function prototype with the keyword 'friend'
    - Friendship is no symmetric
      * Must be explicitly granted
        * if A is a friend of B
        * B is NOT a friend of A
    - Friendship is not transitive 
      * Must be explicitly granted
        * If A is a friend of B AND
        * B is a friend of C
        * then A is NOT a friend of C

  // ------------------------------------------------------------
  non-member function:

    class Player 
    {
      // friend of player class
      // friendship granted to display_player()
      // now display_player() has access to everything in the player class
      friend void display_player(Player &p); 
      std::string name;
      int health;
      int xp;
    public:
      ........
    };

    ...

    void display_player(Player &p){
      std::cout << p.name << std::endl;
      std::cout << p.health << std::endl;
      std::cout << p.xp << std::endl;
    }

    display_player(); // may also change private data members

  // --------------------------------------------------------
  Declare member function of anothe class
  class Player 
  {
    friend void Other_class::display_player(Player &p);
    std::string name;
    int health;
    int xp;
  public:
    ....
  };


  // other class
  class Other_class
  {
  public:
    void display_player(Player &p){
      std::cout << p.name << std::endl;
      std::cout << p.health << std::endl;
      std::cout << p.xp << std::endl;
    }
  };


  Another class as a friend:

    class Player
    {
      friend class Other_class;
      // all the methods in the Other_class will
      // have access to Player class private attributes
      std::string;
      int health;
      int xp;
    public:
      ....
    };
*/