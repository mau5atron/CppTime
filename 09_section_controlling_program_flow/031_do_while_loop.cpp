#include <iostream>

using namespace std;

int main(void)
{
  int number {};
  // input validation with do while
  do {
    cout << "Enter an integer between 1 and 5: " << endl << "\n> ";
    cin >> number;
  } while(number <= 1 || number >= 5);

  cout << "Thank you! Your number is: " << number << endl;
  
  return 0;
}

  /*
    do {
      statements;
    } while (expression);
  */