#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int age {0}; 
  double hourly_wage = 23.5;
  string name {""};
  cout << "Please enter your name and age separated by a space: ";
  cin >> name >> age;

  cout << "name: " << name << ", " << "age: "<< age << ", " << "hourly rate: " << hourly_wage << endl;

  return 0;
}