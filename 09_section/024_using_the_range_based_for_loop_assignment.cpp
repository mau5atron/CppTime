#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
  vector<int> vec { 1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700 };
  unsigned int count { 0 };

  for( auto vec_item : vec ){
    if( (vec_item % 3 == 0) || (vec_item % 5 == 0) ){
      count++;
    }
  }

  cout << count << endl;
  
  return 0;
}

/*
  Use a range-based for loop to loop through a given vector of integers and
  determine how many elements in the vector are evenly dvisible by either 3 or
  5.
  
  The final result should be stored in an integer variabled named count.

  The vector of integers has been provided for you and is named vec.
  
*/ 