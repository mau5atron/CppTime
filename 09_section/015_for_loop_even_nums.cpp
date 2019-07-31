#include <iostream>

using namespace std;

int main(void)
{
  int i { 0 };
  for(i = 1 ; i <= 10 ; ++i){
    if(i % 2 == 0){
      cout << "Even nums from 1 to 10 - i: " << i << endl;
    }
  }

  return 0;
}