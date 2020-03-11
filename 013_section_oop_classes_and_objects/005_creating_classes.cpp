#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
  // attributes
  // you can initialize if you'd like
  string name {"Player"};
  int health {100};
  int xp {3};
  string name;
  int health;
  int xp;

  // methods
  void talk(string);
  bool is_dead();
};

class Account {
  // attributes
  // can initialize first as of C++11
  string name {"Account"};
  double balance { 0.0 };

  // methods
  bool deposit(double);
  bool withdraw(double);
};

int main(void)
{
  // Creating classes
  Account frank_account;
  Account jim_account;
  Player frank;
  Player hero;

  Player players[]{ frank, hero };

  // collection of player objects
  vector<Player> player_vec { frank };
  player_vec.push_back(hero);

  Player *enemy { nullptr };
  enemy = new Player;

  delete enemy;
  return 0;
}

/*
  BIG NOTE:
  Debug example
  g++ -Wall -std=c++11 -o 005_creating_classes 005_creating_classes.cpp --debug
*/ 