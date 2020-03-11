#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Player {
private:
  string name;
  int health;
  int xp;
public:
  // overloaded constructors
  Player();
  Player(string name_val);
  Player(string name_val, int health_val, int xp_val);
};

Player::Player() : Player {"None", 0, 0}{
    cout << "No args constructor" << endl;
  //: name { "None" }, health {0}, xp {0} { 
  // delegating from 3 arg constructor
}

Player::Player(string name_val) : Player {name_val, 0, 0}{
  //: name {name_val}, health{0}, xp{0} {
    cout << "1 arg constructor" << endl;
}

Player::Player(string name_val, int health_val, int xp_val) 
  : name {name_val}, health {health_val}, xp {xp_val} {
  cout << "3 arg constructor" << endl;
}

int main(void)
{
  Player empty;
  Player frank {"Frank"};
  Player villain {"Villain", 100, 55};
  return 0;
}

/*
  Delegating Constructors:
  - Often the code for constructors is very similar
  - Duplicated code can lead to errors
  - C++ allows delegating constructors
    - Code for one constructor can call another in the initialization list
    - Avoids duplicating code
  

  Example:

  class Player{
  private:
    std::string name;
    int health;
    int xp;
  public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
  };

  Player::Player() : name {"None"}, health{0}, xp{0}{

  }

  Player::Player(std::string name_val) : name {name_val}, health{0}, xp{0} {

  }

  Player::Player(std::string name_val, int health_val, int xp_val) 
    : name {name_val}, health{health_val}, xp{xp_val}{

  }

  Delegating Constructors:

  Player::Player(std::string name_val, int health_val, int xp_val) 
    : name {name_val}, health{health_val}, xp{xp_val} {

  }

  Player::Player() : Player { "None", 0, 0 }{

  }

  Player::Player(std::string name_val) : Player {name_val, 0, 0}{

  }

*/