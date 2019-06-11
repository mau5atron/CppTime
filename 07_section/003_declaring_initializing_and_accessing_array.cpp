/*

  Declare an array of 10 integers named arr and initialize 
  the array so that all 10 integers are 0.

  The assign 100 to the first element of the array and 1000 
  to the last element of the array.

*/ 
#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
  int arr [10]{0};
  int count{0};
  arr[0] = 100;
  arr[9] = 1000;
  cout << "index 0: " << arr[0] << endl;
  cout << "index 9: " << arr[9] << endl;
  
  /*
    To get the size of the array: 

    sizeof will give the number of bytes in an entire object 
    - arrays are treated as one object 
    - sizeof: a pointer - to the first element of an array or to a single object
      gives the size of the pointer, not the object(s) pointed to 

    - size of does not give the number of elements in the array (its length). To
      get the length, you need to provide by the size of each element (in bytes).
  */ 

  // checking size of array object by dividing the size of index int size in bytes
  cout << "size of array: " << sizeof(arr)/sizeof(arr[0]) << endl;
  for( const int &arr_item : arr ){
    cout << "value of index " << count++ << ": " << arr_item << endl;
  } 
  return 0;
} 