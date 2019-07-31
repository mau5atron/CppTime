#include <iostream>

using namespace std;

int main(void)
{
  int number { 0 };
  cout << "Enter a number less than 100 and greater than 0" << endl;
  cin >> number;

  while( (!(number < 100) || !(number > 0)) && ((number > 99) || (number < 1)) ){
    cout << "Please enter a number less than 100 and greater than 0" << endl;
    cin >> number;
  }

  cout << "Thanks! Your selected number is: " << number << endl;
  return 0;
}