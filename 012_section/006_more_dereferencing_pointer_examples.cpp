#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
  // Example 1: 
  int score { 100 };
  int *score_ptr { &score };

  cout << "*score_ptr: " << *score_ptr << endl; // 100

  *score_ptr = 200;
  cout << "*score_ptr: " << *score_ptr << endl; // 200
  cout << "score: " << score << endl; // 200

  // Example 2: 
  cout << "\n------------------------------" << endl;
  double high_temp { 100.7 };
  double low_temp { 37.4 };
  double *temp_ptr { &high_temp };

  cout << "*temp_ptr: " << *temp_ptr << endl; // 100.7
  temp_ptr = &low_temp;
  cout << "*temp_ptr: " << *temp_ptr << endl; // 37.4


  // Example 3:

  cout << "\n------------------------------" << endl;
  string name { "Gabriel" };
  string *str_ptr { &name };

  cout << "*str_ptr: " << *str_ptr << endl; // Gabriel
  name = "Betancourt";
  cout << "*str_ptr: " << *str_ptr << endl; // Betancourt

  cout << "\n------------------------------" << endl;

  vector<string> names { "Gabriel", "Larry", "Jorge" };
  vector<string> *names_ptr { nullptr };

  names_ptr = &names;

  cout << "First name: " << (*names_ptr)[0] << endl;
  // cout << "First name: " << (*names_ptr).at(0) << endl; this also works
  
  // iterating over vector pointer
  for(const auto vec_el : *names_ptr){
    cout << "Name from ptr vector: " << vec_el << endl;
  } // prints out all the names from the vector pointer

  return 0;
}

