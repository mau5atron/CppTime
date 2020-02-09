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

  string get_name(){
    return name;
  }

  // default constructor, initializer if a custom constructor not provided
  Player(){
    name = "None";
    health = 100;
    xp = 3;
  }

  // can also provide constructor with args
  Player( string name_val, int health_val, int xp_val ){
    name = name_val;
    health = health_val;
    xp = xp_val;
  }
};

int main(void)
{
  // Player frank;
  Player frank { "Frank", 100, 13 };
  cout << frank.get_name() << endl;
  frank.set_name("YOLO");
  cout << frank.get_name() << endl;
  return 0;
}