#include <iostream>

using namespace std;

int main(void)
{
  /*
    If Statement - Can You Drive? 

    In this exercise you will use a simple 'if' statement to decide if someone
    can drive. Let's assume that anyone '16 or older' can legally drive.

    If the person can legally drive, your program should display, "Yes - ypu can
    drive!" using a cout statement. You do not have to provide a "\n" or endl;.

    If the person cannot legally drive, then the program should not display
    anything. 

    The 'age' will be provided for you, you do NOT need to declare 'age'. Our
    test cases will provide different values for 'age' to test your code. 
  */ 
  int age {0};
  cout << "What is your age? " << endl << "> ";
  cin >> age;
  if( age >= 16){
    cout << "Yes - you can drive!" << endl;
  } else {
    cout << "You can't drive you fucking incel" << endl;
    return 1;
  }

  return 0;
}