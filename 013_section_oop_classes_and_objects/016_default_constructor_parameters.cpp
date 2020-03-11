#include <iostream>

class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  // overloaded functions
  // Player();
  // Player(std::string name_val); removing to simplify
  Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};

// dont need these to since we already have one default initialized in public
// Player::Player() : Player {"None", 0, 0}{
//   std::cout << "No args constructor" std::endl;
// } 

// Player::Player(std::string name_val) : Player {name_val, 0, 0}{
//   std::cout << "1 arg constructor" << std::endl;
// }

Player::Player(std::string name_val, int health_val, int xp_val) : Player { name_val, health_val, xp_val }{
  std::cout << "3 arg constructor" << std::endl;
}

int main(void)
{
  Player empty; // None, 0, 0
  Player frank {"Frank"}; // Frank, 0, 0
  Player hero {"Hero", 100}; // Hero, 100, 0
  Player villain {"Villain", 100, 55}; // Villain, 100, 55
  return 0;
}

/*
  Default Constructor Parameters:
  - Can often simplify our code and reduce the number of overloaded constructors
  - Same rules apply as we learned with non-member functions

  class Player {
  private:
    std::string name;
    int health;
    int xp;
  public:
    // constructor with default paramter values
    Player(std::string name_val = "None",
           int health_val = 0,
           int xp_val = 0);
  };
*/