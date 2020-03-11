#include <iostream>

int main(void)
{
  return 0;
}

/*
  Static Class Members:
    - Class data members can be declared as static 
      - A single data member that belongs to the class, not the objects
      - Useful to store class-wide information
    - Class functions can be declared as static 
      - Independent of any objects 
      - Can be called using the class name
    
  Player class-static members:
    class Player {
    private:
      static int num_players;
    public:
      static int get_num_players();
    };

  Player class - initialize the static data:
  // Typically in Player.cpp
  #include "Player.h";
  int Player::num_players = 0;

  int Player::get_num_players(){
    return num_players;
  }

  // Player class - update the constructor
  Player::Player(std::string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val}{
    ++num_players; // increment
  }

  // Player class - Destructor
  Player::~Plater(){
    --num_players; // decrement
  }

  // main.cpp
  void display_active_players(){
    cout << "Active players: " << Player::get_num_players() << endl;
  }

  int main()
  {
    display_active_players();

    Player obj1 {"Gabriel"};
    display_active_players();
    ...
  }

*/