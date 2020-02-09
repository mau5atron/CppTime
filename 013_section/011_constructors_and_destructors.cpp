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
  void set_name(string name_val){
    name = name_val;
  }

  void set_health(int h){
    health = h;
  }

  void set_xp(int x_p){
    xp = x_p;
  }

  // overloaded constructors
  Player(){ // when no arguments passed
    cout << "No args constructor called" << endl;
  }

  Player(string name){
    cout << "String arg constructor called" << endl;
  }

  Player(string name, int health, int xp){
    cout << "Three args constructor called" << endl;
  }

  ~Player(){
    cout << "Destructor called for " << name << endl;
  }
};

int main(void)
{
  { // only scoped to this block
    Player slayer;
    slayer.set_name("Slayer");
  }

  {
    Player frank;
    frank.set_name("Frank");
    Player hero { "Hero" };
    hero.set_name("Hero");
    Player villain { "Villain", 100, 12 };
    villain.set_name("Villain");
  } // destructor automatically called when block ends

  Player *enemy = new Player();
  enemy->set_name("Enemy");
  // (*enemy).set_name("Enemy");
  Player *level_boss = new Player("Level Boss", 1000, 300);
  level_boss->set_name("Level Boss");
  // (*level_boss).set_name("Level Boss");
  delete enemy;
  delete level_boss;

  return 0;
}

/*
  Constructors:
  - Special member method 
  - Invoked during object creation
  - Useful for initialization
  - Same name as the class
  - No return type is specified 
  - Can be overloaded

  Player constructors:

  class Player {
  private:
    std::string name;
    int health;
    int xp;
  public:
    // overloaded constructors
    Player(); // no arguments 
    Player(std::string name); expects one argument
    Player(std::string name, int health, int xp); expects 3 arguments
  };

  Account Constructors:

  class Account {
  private:
    std::string name;
    double balance;
  public:
    Account();
    Account(std::string name, double balance);
    Account(std::string name);
    Account(double balance);
  };


  ------------------------------------------------------------------------

  Destructors:
  - Special member method
  - Same name as the class proceeded with a tilde ( ~ )
  - Invoked automatically when an object is destroyed
  - No return type and no parameters
  - Only 1 destructor is allowed per class - cannot be overloade
  - Useful to release memory and other resources


  Player Destructor:
  class Player {
  private:
    std::string name;
    int health;
    int xp;
  public:
    // overloaded constructors
    Player(); // no arguments 
    Player(std::string name); expects one argument
    Player(std::string name, int health, int xp); expects 3 arguments
    // Destructor
    ~Player();
  };

  // Same thing on account
  class Account {
  private:
    std::string name;
    double balance;
  public:
    Account();
    Account(std::string name, double balance);
    Account(std::string name);
    Account(double balance);

    ~Account();
  };

  // Creating objects

  {
    Player slayer;
    Player frank { "frank", 100, 4 };
    Player hero { "hero" };
    Player villain { "Villain" };
    // use the objects
    // 4 destructors
  }

  Player *enemy = new Player("Enemy", 1000, 0);
  delete enemy;

  // Creating player example above ^
*/ 