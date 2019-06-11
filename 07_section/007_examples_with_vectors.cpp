#include <iostream> 
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  vector <char> vowels { 'a', 'e', 'i', 'o', 'u' };
  int count {0};
  for( const char &vec_el : vowels ){
    cout << "character at index " << count++ << ": " << vec_el << endl;
  }

  cout << endl;
  
  vector <int> test_scores_one(3);
  int count_test_scores_one {0};
  return 0;
}
