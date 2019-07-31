#include <iomanip>
#include <iostream>

using namespace std;

int main(void)
{ 
  /*
    Section 8
    Mixed Type Expressions

    Ask the user to enter 3 integers 
    Calculate the sum of the integers then calculate the average of the 3
    integers
    
    Display the 3 integers entered
    the sum if the 3 integers and 
    the average of the 3 intgers 
  */ 

  int total {0};
  int num1 {0}, num2 {0}, num3 {0};
  double average {0.0};
  const int num_count {3};

  cout << "Enter 3 numbers separated by a single space and press enter: " << endl << "\n> ";
  cin >> num1 >> num2 >> num3;
  total = num1 + num2 + num3;
  average = static_cast<double>(total) / num_count;
  // average = (double)total/num_count; // old-style
  cout << "The total of num1 + num2 + num3 is: " << total << endl;
  cout << "The average is: " << average << endl;
  return 0;
}