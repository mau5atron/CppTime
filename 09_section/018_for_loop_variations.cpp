#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(void)
{
  cout << "Regular for loop: " << endl;
  for(int i { 1 } ; i <= 10 ; ++i){
    cout << "i: " << i << endl;
  }

  cout << endl;

  cout << "Increment i by 2: " << endl;
  for(int i { 1 } ; i <= 10 ; i += 2){
    cout << "i: " << i << endl;
  }

  cout << endl;
  cout << "Decrementing: " << endl;
  for(int i { 10 } ; i > 0 ; --i){
    cout << "i: " << i << endl;
  }
  
  cout << endl;

  cout << "Increment by 10 while display nums divisible by 15: " << endl;
  for(int i { 10 } ; i <= 100 ; i += 10){
    // if i is divisible by 15 then display it while incrementing i by i += n
    if(i % 15 == 0){
      cout << "i: " << i << endl;
    }
  }

  cout << endl;
  cout << "Comma operator loop: " << endl;
  for( int i { 1 }, j { 5 } ; i <= 5 ; ++i, ++j ){
    cout << i << " + " << j << ": " << (i + j) << endl;
  }

  cout << endl;

  // need to further investigate this one out
  // cout << "Nested for loop without the comma operator, similar functionality: " << endl;
  // for(int i { 1 } ; i <= 5 ; ++i){
  //   for(int j { 5 } ; j <= i ; ++j){
  //     cout << i << " + " << j << ": " << (i + j) << endl;
  //   }
  // }

  cout << "For loop displaying numbers in a table: " << endl;
  for(int i { 1 } ; i <= 100 ; ++i){
    cout << i;
    if(i % 10 == 0){
      cout << endl;
    } else {
      if(i <= 10){
        cout << "  ";
      } else {
        cout << " ";
      }
    }
  }

  cout << endl;

  cout << "For loop displaying numbers in a table with conditional operator: " << endl;
  for(int i { 1 } ; i <= 100 ; ++i){
    cout << i;
    (i % 10 == 0) ? 
      cout << endl 
      : 
      (i <= 10) ?
        cout << "  " 
        : 
        cout << " ";
  }

  cout << endl;

  cout << "For loop with vectors: " << endl;
  vector<int> nums { 10, 20, 30, 40, 50 };
  for(unsigned int i { 0 } ; i < nums.size() ; ++i){
    // cout << "nums[" << i << "]: " << nums[i] << endl;
    cout << "Vector nums size: " << nums.size() << endl;
    printf("i = %d: nums[%d]\n", i, nums[i]);
  }
  return 0;
}