#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Player {
private:
  string name;
  int health;
  int xp;
public:
  string get_name() const {
    return name;
  }

  int get_health(){
    return health;
  }

  int get_xp(){
    return xp;
  }

  void set_name(string name_val){
    name = name_val;
  }

  // overloaded constructors
  Player(); // Constructor
  Player(string name_val); // Single arg constructor
  Player(string name_val, int health_val, int xp_val); // 3 arg constructor

  // void display_player(const Player &p);
};

Player::Player() : Player{"None", 0, 0}{

}

Player::Player(string name_val) : Player{name_val, 0, 0}{
}

Player::Player(string name_val, int health_val, int xp_val) 
  : name{name_val}, health{health_val}, xp{xp_val}{
}

void display_player(const Player &p){
  cout << "Player name: " << p.get_name() << endl;
}

int main(void)
{
  const Player villain {"Villain", 100, 55};
  Player hero {"hero", 100, 15};
  // display_player()
  // villain.set_name("hero"); should not be allowed bc const
  cout << hero.get_name() << endl; // works because hero is not const
  // display_player(villain); // does not work bc const
  display_player(villain); // works now bc added const to get_name function,
  // telling the compiler that it is guaranteed that attributes are not being changed
  
  display_player(hero);
  return 0;
}

/*
  Using const with classes:
  // using const qualifier in the context of class methods
  - Pass arguments to class member methods as const
  - We can also create 'const' objects
  - What happens if we all member functions on const objects?
  - const-correctness

  Creating a const object:
  - villain is a const object so it's attributes cannot change
    
    const Player villain { "Villain", 100, 55 };

  - What happens when we call member methods on a const object?

    const Player villain { "Villain", 100, 55 };
    void display_player_name(const Player &p){
      cout << p.get_name() << endl;
    }

    display_player_name(villain); // error

  const methods:

    class Player {
    private:
    ...
    public:
      // need to tell the compiler that specific methods will not modify the object
      std::string get_name() const;
                             ^ add const

    ...
    };

  Now:

  const Player villain {"Villain", 100, 55};
  villain.set_name("Nice guy"); // ERROR
  std::cout << villain.get_name() << std::endl; // OK

  class Player {
    private:
    ...
    public:
    ....
    std::string get_name() const; // error if code in get_name modifies this object
  };
*/