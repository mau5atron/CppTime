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
    string get_name(){
      return name;
    }

    int get_health(){
      return health;
    }

    int get_xp(){
      return xp;
    }

    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

    // THE COPY CONSTRUCTOR, prototype basically
    Player(const Player &source);
    // THE DESTRUCTOR
    ~Player(){
      cout << "Destructor called for: " << name << endl;
    }
};

Player::Player(string name_val, int health_val, int xp_val)
  : name {name_val}, health {health_val}, xp {xp_val} {
    cout << "Three-args constructor" << endl;
}

// The copy constructor code, can also be defined in public
Player::Player(const Player &source) 
  : name {source.name}, health {source.health}, xp {source.xp}{
    // could also delegate
    // : Player { source.name, source.health, source.xp }{
    cout << "Called custom copy constructor, made copy of: " << source.name << endl;
}

void display_player(Player p){
  cout << "Name: " << p.get_name() << endl;
  cout << "Health: " << p.get_health() << endl;
  cout << "XP: " << p.get_xp() << endl;
}

int main(void)
{
  // Player empty;
  Player empty {"XXXXXXXX", 100, 50};
  Player new_obj_copy {empty}; // will call custom copy constructor defined in public
  display_player(empty);
  Player frank { "Frank" };
  Player hero { "Hero", 100 };
  Player villain { "Villain", 100, 55 };
  return 0;
}

/*
  Copy Constructor:
  - When objects are copied C++ must create a new object from an existing object
  - When is a copy of an object made?
    - Passing object by value as a parameter
    - Returning an object from a function by value
    - Constructing one object based on another of the same class
  - C++ must have a way of accomplishing this so it provides a compiler-defined
    copy constructor if you don't

  When an Object Copy is required:
  - First use case
    - When we pass an object to a function or method by value
    - Default mode of passing data in c++ is by value, which means a copy is
      made
  
    Player hero {"Hero", 100, 20};
    void display_player(Player p){
      // p is a COPY of hero in this example
      // use p
      // Destructor for p will be called
    }
    display_player(hero);

  Return an object by value:
    Player enemy;
    Player create_super_enemy(){
      Player an_enemy {"Super enemy", 1000, 1000};
      return an_enemy; // A Copy of an_enemy is returned
    }
    enemy = create_super_enemy();

  Construct one object based on another
    Player hero {"Hero", 100, 100};
    Player another_hero {hero}; // A copy of hero is made
  
  Copy Constructor:
  - if you don't provide your own way of copying objects by value then the
    compiler provides a default way of copying objects
  - Copies the values of each data member to the new object
  - Perfectly fine in many cases
  - Beware if you have a pointer data member 
    - Pointer will be copied
    - Not what is it pointing to
    - Shallow vs Deep Copy - more in next video
  
  Best Practices:
  - Provide a copy constructor when your class has raw pointer members
  - Provide the copy constructor with a 'const reference' parameter
  - Use STL classes as they already provide copy constructors
  - Avoid using raw pointer data members if possible


  Declaring a Copy Constructor:
    Type::Type(const Type &source);

    Player::Player(const Player &source);
    Account::Account(const Account &source);

  Implementing the Copy Constructor:
    Type::Type(const Type &source){
      // code or initialization list to copy the object
    }

  Player:

    Player::Player(const Player &source) 
      : name{source.name}, health{source.health}, xp{source.xp}{

    }

  Account:

    Account::Account(const Account &source) 
      : name{source.name}, balance{source.balance}{
      
    }


  View example above in main^
*/