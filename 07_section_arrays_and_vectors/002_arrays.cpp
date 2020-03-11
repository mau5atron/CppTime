#include <iostream> 
#include <iomanip>
using namespace std;
int main(void)
{
  char vowels[]{'a', 'e', 'i', 'o', 'u'};
  cout << "\nFirst vowel is: " << vowels[0] << endl;
  cout << "The last vowel is: " << vowels[4] << endl;

  double high_temps[]{ 90.1, 89.8, 77.5, 81.6 };
  cout << "The first high temperature is: " << high_temps[0] << endl;
  cout << 
    "Lets change the first high temperature in the array. Enter a double: " <<  
    endl << "\n> ";
  cin >> high_temps[0];
  cout << "\nThe new first high temperature in the array is: " << high_temps[0] << endl;
  
  return 0;
}