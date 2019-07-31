#include <iostream> 
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  /* 
    vector <char> vowels; - initializing empty vector 
    vector <char> vowels (5) - vector with 5 items, all initialized to zero
  */ 
  vector <char> vowels { 'a', 'e', 'i', 'o', 'u' };
  int count {0};
  for( const char &vec_el : vowels ){
    cout << "character at index " << count++ << ": " << vec_el << endl;
  }

  cout << endl;
  
  // vector <int> test_scores(3); // all 3 vector elements initialized to zero
  vector <int> test_scores { 100, 98, 89 }; // iterates over all elements 
  // vector <int> test_scores (3, 2500); // 3 elements initialized to 2500
  int count_test_scores {0};
  for( const int &vec_el : test_scores){
    cout << "integer at index " << count_test_scores++ << ": " << vec_el << endl;
  }


  cout << endl << "element at index 2 is: " << test_scores.at(2) << endl;  
  cout << "vector size: " << test_scores.size() << endl;

  cout << endl;

  int score_to_add {0};
  cout << "Please enter a score to add to test scores: " << endl << "\n> ";
  cin >> score_to_add;
  test_scores.push_back(score_to_add); // push input to end of vector
  cout << "Test scores now: " << endl;
  int count_new_test_scores {0};
  for ( const int &vec_el : test_scores ){
    cout << "integer at index " << count_new_test_scores++ << ": " << vec_el << endl;
  }

  cout << endl;
  // multidimensional vector
  vector <vector <int>> movie_ratings 
  {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  cout << movie_ratings[2][3] << endl; // returns 12

  return 0;
}
