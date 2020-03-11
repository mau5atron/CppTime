#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  enum Direction {
    left, right, up, down
  };

  Direction heading(left);
  // passing in param through enum

  switch(heading){
    case left: 
      cout << "Going left" << endl;
      break;
    case right: 
      cout << "Going right" << endl;
      break;
    case up: 
      cout << "Going up" << endl;
      break;
    case down: 
      cout << "Going down" << endl;
      break;
    default: 
      cout << "idk where to go :/" << endl;
      break;
  }

  return 0;
}