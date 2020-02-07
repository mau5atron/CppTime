#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  Declaring a Class:

  class Class_Name 
  {
    // declaration(s);
  }


  Another example:

  class Player
  {
    // attributes
    std::string name;
    int health;
    int xp;

    // methods
    void talk(std::string text_to_say);
    bool is_dead();
  }

  
  Creating Objects:

  Player frank;
  Player hero;

  Player *enemy = new Player();
  delete enemy;


  Another Example:

  Class Account 
  {
    // attributes
    std::string name;
    double balance;

    // methods
    bool withdraw(double amount);
    bool deposit(double amount);
  }

  Creating Objects:
  
  Account frank_account;
  Account jim_account;

  Account *mary_account = new Account();
  delete mary_account;

  .....cont

  // create accounts
  Account frank_account;
  Account jim_account;\

  // can create an array
  Account accounts[] { frank_account, jim_account };

  // can create a vector
  std::vector<Account> accounts1 { frank_account };
  accounts1.push_back(jim_account);
*/ 