#include <iosteam>

int main(void)
{
  return 0;
}

/*
  Constructor initialization lists:
  - So far, all data member values have been set in the constructor body
  - Constructor initilization lists
    - Are more efficient 
    - Initialization lists immediately follows the parameter list
    - Initializes the data members as the object is created!
    - Order of initialization is the order of declaration in the class

  Example:

  class Player{
  private:
    std::string name;
    int health;
    int xp;
  public:
    // overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
  };

  Player()

  Previous way:

  Player::Player(){
    name = "None";
    health = 0;
    xp = 0;
  }

  Better way:
  Player::Player(): name { "None" }, health { 0 }, xp { 0 }{
    // this happes before the body of the constructor is every executed
  }



  Constructor initialization lists:
  Player(std::string)
  previous way:
  Player::Player(std::string name_val){
    name = name_val; // Assignment not initialized
    health = 0;
    xp = 0;
  }

  Better more efficient way: // single arg constructor
  Player::Player(std::string name_val) : name {name_val}, health {0}, xp {0} {

  }


  // 3 args constructor
  Player(std::string, int, int)

  Previous way:
  Player::Player(std::string name_val, int health_val, int xp_val){
    name = name_val; // assignment not initialized
    health = health_val;
    xp = xp_val;
  }

  Better way:
  Player::Player(std::string name_val, int health_val, int xp_val) 
    : name { name_val }, health { health_val }, xp { xp_val } {

  }

  All constructor initialization lists:
  Player::Player() : name { "None" }, health { 0 }, xp { 0 } {
    // do stuff
  }

  Player::Player(std::string name_val) : name { name_val }, health {0}, xp{0} {
    // do stuff
  }

  Player::Player(std::string name_val, int health_val, int xp_val) 
    : name {name_val}, health {health_val}, xp {xp_val} {

  }

  - Initialization lists work best because instead of the old way of
    initializing and then assigning values, we are only initializing to a value
    instead of the former.



*/ 