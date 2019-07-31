/*
  Section 7 Challenge

  Write a C++ program as follows: 

  Declare 2 empty vectors of integers named 
  vector1 and vector2, respectively. // done

  Add 10 and 20 to vector1 dynamically using push_back 
  Display the elements in vector1 using the .at() method
  as well as its size using the .size() method // done

  Add 100 and 200 to vector2 dynamically using push_back 
  Display the elements in vector2 using the .at() method 
  as well as its size using the .size() method // done

  Declare an empty 2D vector called vector_2d
  Remember, that a 2D vector is a vector <int>

  Add vector1 to vector_2d dynamically using push_back
  add vector2 to vector_2d dynamically using push_back

  Display the elements in vector_2d using .at() method

  Change vector1.at() to 1000

  Display the elements in vector_2d again using the .at() method

  Display the elements in vector1

  What did you expect? Did you get what you expected? What do
  you think happened? 
*/ 

#include <iostream>
#include <ostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  vector <int> vector1;
  vector <int> vector2;

  vector1.push_back(10);
  vector1.push_back(20);
  int count_vec1 {0};
  for ( const int &vec_el : vector1 ){
    cout << "Numbers inside vector1 at index " << count_vec1++ << ": " << vec_el << endl;
  }
  cout << "Size of vector1: " << vector1.size() << endl;

  // splitting with newline and ending stream 
  cout << endl;

  vector2.push_back(100);
  vector2.push_back(200);
  int count_vec2 {0};
  for ( const int &vec_el : vector2 ){
    cout << "Numbers inside vector2 at index " << count_vec2++ << ": " << vec_el << endl;
  }
  cout << "Size of vector2: " << vector2.size() << endl;

  // vector_2d stuff
  cout << endl;

  vector<vector<int> > vector_2d;
  vector_2d.push_back(vector1); // pushing vector1 into 2d
  vector_2d.push_back(vector2); // pushing vector2 into 2d
  // cout << "stuff: " << vector_2d[1][0] << endl;
  // int count_vec2d {0};
  cout << "Size of vector_2d: " << vector_2d.size() << endl;
  
  for ( int i=0; i < vector_2d.size(); i++){
    // cout << "stuff: " << vector_2d[i][i] << endl;
    for ( int j=0; j < vector_2d[i].size(); j++){
      cout << "Stuff inside vector_2d: " << vector_2d[i][j] << endl;
    }
  }

  return 0;
}