#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  vector <int> vec { 10, 20, 30, 40, 50 };
  int count {0};
  for ( const int &vec_el : vec ){
    cout << "Element at index " << count++ << ": " << vec_el << endl;
  }
  vec[0] = 100;
  vec[4] = 1000;
  cout << "element at index 0: " << vec[0] << " element at index 4: " << vec[4] << endl;

  return 0;
}