#include "Player.h"

int Player::num_players {0};

// constructor
Player::Player( string name_val, int health_val, int xp_val ) 
  : name { name_val }, health { health_val }, xp { xp_val } {
    ++num_players; // increment number of players
}

// copy constructor
Player::Player( const Player &source ) 
  : Player { source.name, source.health, source.xp }{
}

Player::~Player(){
  --num_players; // decrement number of players
}

int Player::get_num_players(){
  return num_players;
}