/*

  - While loop is an example of a pre-test loop, because the test is done at the
    beginning of the loop

  - So it is possible that if the test fails immediately the loop body will
    never execute 
  
  - 
  while(expression){
    statement;
  }

  while(expression){
    statement(s);
  }
*/ 
#include <iostream>

using namespace std;

int main(void)
{
  // simple while loop 
  unsigned int i { 1 };
  while( i <= 5 ){
    cout << "i: " << i << endl;
    ++i;
  }

  i = 1;
  while(i <= 10){
    if(i % 2 == 0){
      cout << "even i: " << i << endl;
    } else {
      cout << "odd i:  " << i << endl;
    }
    ++i;
  }

  return 0;
}