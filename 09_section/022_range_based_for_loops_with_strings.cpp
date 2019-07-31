#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string name { "Gabriel" };

  // iterates over each character in the name and displays it
  for ( auto name_char : name ){
    cout << name_char << endl;
  }

  return 0;  
}