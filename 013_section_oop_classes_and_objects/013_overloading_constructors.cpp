#include <iostream>

int main(void)
{
  return 0;
}

/*
  Overloading Constructors:
  - Classes can have as many constructors as necessary
  - Each must have a unique signature
  - Default constructor is no longer compiler-generated once another constructor
    is declared
  
  Overloaded Constructors:

  class Player {
  private:
    std::string name;
    int health;
    int xp;

  public:
    // overloaded Constructors, 3 types
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);

    // first no-args constructor
    Player::Player(){
      name = "None";
      health = 0;
      xp = 0;
    }

    // second single arg constructor
    Player::Player(std::string name_val){
      name = name_val;
      health = 0;
      xp = 0;
    }

    // third 3 arg constructor
    Player::Player(std::string name_val, int health_val, int xp_val){
      name = name_val;
      health = health_val;
      xp = xp_val;
    }
  };

  // Creating the objects

  int main(void){
    Player empty; // None, 0, 0
    Player hero { "Hero" }; // Hero, 0, 0
    Player villain { "Villain" }; // Villain, 0, 0
    Player frank { "Frank", 100, 4 };
    Player *enemy = new Player("Enemy", 1000, 0); // Enemy, 1000, 0
    (*enemy).set_name("haha"); // haha, 1000, 0
    enemy->set_name("hahaha"); // hahaha, 1000, 0
  }

*/ 