#include <iostream>
#include <string>
// #include <stdlib.h>

using namespace std;

int main(void)
{
  string spacing {"------------------------------------------------------------------------"};

  int num { 0 };
  cout << "Enter a positive integer - start the countdown :-): " << endl << "\n> ";
  cin >> num;

  while(num > 0){
    cout << "num: " << num << endl;
    --num;
    // sleep(2000);
  }
  
  cout << "NUTTING 😹" << endl;
  cout << spacing << endl;

  int num1 {};
  cout << "Enter a positive integer to count up to: " << endl << "\n> ";
  cin >> num1;

  int i {1};
  while(num1 >= i){
    cout << "i: " << i << endl;
    ++i;
  }
  
  cout << spacing << endl;
  // input validation 
  int num3 {};

  cout << "Enter a number less than 100" << endl << "\n> ";
  cin >> num3;

  while(num3 >= 100){
    cout << "Please enter a fucking number less than 100" << endl << "\n> ";
    cin >> num3;
  }

  cout << "Thanks, your number is: " << num3 << endl;

  cout << spacing << endl;

  bool done { false };
  int num4 {};
  while(!done){
    cout << "Enter an integer between 1 and 5: " << endl << "\n> ";
    cin >> num4;

    if(num4 <= 1 || num4 >= 5){
      cout << "Out of range binch !" << endl;
    } else {
      cout << "Thanks ! Your number is: " << num4 << endl;
      done = true;
    }
  }

  cout << spacing << endl;
  
  return 0;
}