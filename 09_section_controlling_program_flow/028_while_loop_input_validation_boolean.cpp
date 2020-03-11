#include <iostream>

using namespace std;

int main(void)
{
  bool done { false };
  unsigned int number { 0 };

  while(!done){
    cout << "Enter an integer between 1 and 5" << endl;
    cin >> number;
    if(number < 1 || number > 5){
      cout << "Out of range bb :)" << endl;
    } else {
      cout << "Thanks! Your number is: " << number << endl;
      done = true;
    }
  }
  
  return 0;
}