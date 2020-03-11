#include <iostream>

using namespace std;

int main(void)
{
  unsigned int scores[]{ 100, 97, 56 };
  // this is how you would get the array size 
  unsigned int array_size = (sizeof(scores) / sizeof(scores[0]) );
  unsigned int i { 1 };
  
  while (i <= array_size){
    cout << "i: " << i << endl;
    ++i;
  }

  return 0;
}