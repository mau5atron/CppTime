#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> vec { 102, 34, -99, 54, 65, -99 };
  // vector<int> vec { 102, 34, 54, 65 };
  unsigned int count { 0 };
  for(auto vec_el : vec ){
    if(vec_el != -99){
      /*
        if there are no -99s, then count will keep incrementing until it reaches
        the size of the vector 
      */ 
      ++count;
    } else {
      break;
    }
  }

  // lol re-read the question 
  // only asks to increment count up until you reach -99, else break the loop
  // and return count after reaching -99
  // if(count == 0){
  //   cout 
  //     << "There are no -99s in your vector! There are, however, " 
  //     << vec.size() 
  //     << " elements in your vector" 
  //     << endl;
  // } else {
  //   cout << "-99s in the vector: " << count << endl;
  // }
  cout << "vector count before reaching -99: " << count << endl;

  return 0;
}

/*
  MF Exercise 😤

  Given a vector of integers, determine how many integers are present before you
  see the value -99. Note, it is possible -99 is 'not' in the vector! If -99 is
  'not' in the vector, then the result will be equal to the number of elements
  in the vector. 

  The final result should be stored in an integer variable named count.

  Note that the different vectors will be tested against your code. You do not
  need to declare the vector of integers. 'vec' is the name of the vector you
  should use. 
*/ 