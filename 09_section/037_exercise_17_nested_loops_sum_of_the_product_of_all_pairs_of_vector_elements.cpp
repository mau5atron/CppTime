#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(vector<int> vec){
  int result {};
  // result = vec.size();
  for ( int i = 0; i < vec.size() ; ++i ){
    for ( int j = i + 1 ; j < vec.size() ; ++j ){
      // cout << "vec at i: " << vec.at(i) << ", vec at j: " << vec.at(j) << endl;
      
      // exmple of {1, 2, 3, 5}
      /*
        i => 0 index, j => 1 index
        1 * 2, 1 * 3, 1 * 5 + 

        i => 1 index, j => 2 index
        2 * 3, 2 * 5 +

        i => 2 index, j => 3 index
        3 * 5 +

        essentially iterating each number,
        on each iteration, we are multiplying i * i + 1, but i + 1 is j
      */ 
      result += ( vec.at( i ) * vec.at( j ) ); 
    }
  }
  
  return result;
}

int main(void)
{
  vector<int> myVec { 1, 2, 3, 5 };

  cout << "pair product: \n" << calculate_pairs(myVec) << endl;
  // cout << "vec size is: " << calculate_pairs(myVec) << endl;

  return 0;
}
  /* 
    Given a vector of integers named vec that is provided for you, find the sum
    of the product of all pairs of vector elements. 

    For example, given the vector 'vec' to be { 1, 2, 3 }, the possible pairs
    are: (1, 2), (1, 3) and (2, 3).
    So the result would be (1 * 2) + (1 * 3) + (2 * 3), which is 11.
    
    Another example: 

    Given the vector vec to be { 2, 4, 6, 8 }

    the possible pairs are: 
    (2, 4), (2, 6), (2, 8), (4, 6), (4, 8), and (6, 8).
    So the result would be: 
    ( 2 * 4 ) + ( 2 * 6 ) + ( 2 * 8 ) + ( 4 * 6 ) + ( 4 * 8 ) + ( 6 * 8 ), which
    is 140.

    If the vector is empty or has only 1 element then the result should be 0.




  */