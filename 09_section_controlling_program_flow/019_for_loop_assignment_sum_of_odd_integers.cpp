#include <iostream>

using namespace std;

int main(void)
{
  unsigned int sum { 0 };

  /*
    Write code that uses a for loop to calculate the sum of 
    the odd integers from 1 to 15, inclusive. The final result should be stored
    in an integer variable named sum 
  */ 

  for(int i { 1 } ; i <= 15 ; ++i){
    // finding numbers that are not even
    if(i % 2 != 0){
      cout << "odd i: " << i << endl;
      sum += i;
    }
  }

  cout << "Sum: " << sum << endl;
  return 0;
}