#include <iostream>

using namespace std;

int main(void)
{
  /*
    Comma operator is not used very often
  */ 
  // can initialize int i or int j outside as well
  for(int i { 1 }, j { 5 } ; i <= 10 ; ++i, ++j){
    cout << "i: " << i << ", j: " << j << endl;
    cout << i << " * " << j << " = " << (i * j) << endl;
    cout << endl;
  }

  /*
    the for loop review

    - The basic for loop is very clear and concise 
    - Since the for loop's expressions are all optional, it is possible to have 
      - no initialization 
      - no test
      - no increment 

      for(;;){
        cout << "endless loop" << endl;
      }
  */ 
  
  return 0;
}