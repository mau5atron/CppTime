#include <iostream>

using namespace std;

int main(void)
{
  int scores []{ 100, 90, 97 };
  int i { 0 };
  // when tring to loop, specify condition less than that of the size of the array
  // (n - 1) i < 3
  for(i = 0 ; i < 3 ; ++i){
    cout << "scores from array: " << scores[i] << endl;
  }

  for(i = 0 ; i <= 2 ; ++i){
    cout << "scores from array pt. 2: " << scores[i] << endl;
  }

  return 0;
}