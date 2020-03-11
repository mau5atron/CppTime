#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
using std::string;

// defining player class
class Player
{
private:
  static int num_players; // belongs to class, not object
  string name;
  int health;
  int xp;
public:
  // Getters
  string get_name(){
    return name;
  }

  int get_health(){
    return health;
  }

  int get_xp(){
    return xp;
  }

  // Prototypes
  // 3 arg constructor
  Player(string name_val = "None", int health_val = 0, int xp_val = 0);

  // copy constructor
  Player(const Player &source);

  // Destructor
  ~Player();

  static int get_num_players(); // can only return static variables
};

#endif // _PLAYER_H_