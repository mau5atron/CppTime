#include <iostream>

// using namespace std; // use the entire std namespace
// or

// use what you need
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
  int favorite_num;

  cout << "Enter your favorite number between 1 and 100\n> ";
  cin >> favorite_num;

  cout << "wow, queen, that's also my fav number" << endl;
  cout << "srs, " << std::to_string(favorite_num) << " is my fav number :)" << endl;
  
  return 0;
}