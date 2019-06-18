#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  /*
    Begin by declaring and initializing the integer variable num1 to the value
    of 13

    Now Declare and initialize the integer variable num2 to the value of 0

    Use the assignment operator to change the value of num1 to 5

    Now use the assignment operator to assign the value of num1 to num2
  */ 

  int num1 {13};
  int num2 {0};
  num1 = 5;
  num2 = num1;
  cout << "num2: " << num2 << endl;

  return 0;
}