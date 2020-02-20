#include <iostream>
#include "Player.h"

using std::string;
using std::cout;
using std::endl;

void display_active_players(){
  // :: is scope resolution operator
  // calling get_num_players() in scope of player class
  cout << "Active players: " << Player::get_num_players() << endl;
}

int main(void)
{
  display_active_players(); // 0
  Player hero {"Hero"}; // 1 active player
  cout << hero.get_name() << endl;
  display_active_players(); // 1
  {
    Player frank {"Frank"}; // gets destroyed when going out of scope, outside the block
    display_active_players(); //2
  }

  display_active_players(); // 1

  Player *enemy = new Player("Enemy", 100, 100); // object on the heap, dynamic mem allocation
  // (*enemy).get_name();
  // or
  cout << enemy->get_name() << endl; //to call methods for objects
  display_active_players(); //2
  delete enemy; // clearing/deleting enemy from memory
  display_active_players(); //1
  return 0;
}
// come into folder and compile with g++ -Wall -std=c++11 main.cpp Player.cpp -o main