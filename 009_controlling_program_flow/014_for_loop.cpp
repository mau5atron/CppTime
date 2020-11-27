#include <iostream>

using namespace std;

  /*
    for(initialization ; condition ; increment){
      statement;
    }

    for(initialization ; condition ; increment){
      statement(s);
    }
  */ 

int main(void)
{
  int i { 0 };
  int num { 12 };
  for(i = 1 ; i <= num ; i++){
    // i is only available in the loop
    cout << "i = " << i << endl;
  }

  return 0;
}