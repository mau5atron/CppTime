#include <iostream>

using namespace std;

class Player {
public:
  // attributes
  string name;
  int health;
  int xp;

  void talk(string text_to_say){
    cout << name << " says " << text_to_say << endl;
  }
  bool is_dead();
};

class Account {
public:
  string name;
  double balance;

  void deposit(double bal){
    balance += bal;
    cout << "In Deposit: " << endl; 
  }

  void withdraw(double bal){
    balance -= bal;
    cout << "In withdraw: " << endl;
  }
};

int main(void)
{
  // account stuff
  Account gabes_account;
  gabes_account.name = "Gabriel\'s account";
  gabes_account.balance = 1000.00;
  gabes_account.deposit(230.50);
  gabes_account.withdraw(100.00);

  
  // player stuff
  Player frank;
  frank.name = "Frank";
  frank.health = 100;
  frank.xp = 12;
  frank.talk("hey whats up u fucking chode");
  // same thing but with a pointer

  // not a player object, but a pointer to a player object
  Player *enemy = new Player;
  // dereferencing pointer, now we have the object
  (*enemy).name = "Enemy";
  (*enemy).health = 100;
  // also use arrow
  enemy->xp = 15;
  enemy->talk("hey haha im from dereferenced pointer bro!");
  return 0;
}

/*
  Accessing Class Members:
  - We can access
    - class attributes
    - class methods

  - Some class members
  - We need an object to access instance variables

  If we have an object (dot operator)
  - Using the dot operator

    Account frank_account;

    frank_account.balance;
    frank_account.deposit(1000.00);

  If we have a pointer to an object (member of pointer operator)
  - Dereference the pointer then use the dot operator
    Account *frank_account = new Account();

    (*frank_account).balance;
    (*frank_account).deposit(1000.00);
  - Or use the member of pointer operator (arrow operator).
    Account *frank_account = new Account();

    frank_account->balance;
    frank_account->deposit(1000.00);

  Go back to 005 to finish...
*/