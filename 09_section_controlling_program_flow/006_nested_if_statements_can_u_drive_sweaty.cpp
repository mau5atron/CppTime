#include <iomanip>
#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
  /*
    In this exercise you will use nested 'if' statements to decide if someone
    can drive.

    Let's assume that anyone 16 or older can legally drive, but they must also 
    'own a car to drive'

    If the person is not 16 or older then you should display, "Sorry, come back
    in 'n' years and be sure you own a car when you come back." , where n is how
    many years until the person turns 16 years old 

    If the person is  16 or older but they do NOT own a car, then your program
    should display, "Sorry, you need to buy a car before you can drive!".

    If the person is 16 or older and they DO own a car, then your program
    shoujld display, "Yes, you can drive!".

    NOTE
    The 'age' will be provided for you, you do NOT need to declare 'age'. We
    will also automatically provide a boolean variable named 'has_car' which
    will be "true" if the person owns a car or 'false' otherwise. Our test cases
    will provide different values for 'age' and 'has_car' to test your code. 

    Please do NOT provide "\n" or 'endl' in your display statements.
  */ 

  unsigned int age { 0 };
  // unsigned int age_diff { 16 - age };
  unsigned int legal_age_to_drive { 16 };
  char has_car {};

  cout << "Please enter your age you fucking bitch: " << "\n> ";
  cin >> age;
  cout << "Do you own a car peasant? Y/N" << "\n> " ;
  cin >> has_car;
  has_car = toupper(has_car);
  while(has_car != 'Y' && has_car != 'N'){
    cout << "Sorry, you did not enter 'y' or 'n'. Enter it again fuckwad" << endl;
    cout << "Again, do you own a car peasant? Y/N" << endl;
    cin >> has_car;
    has_car = toupper(has_car);
  }
  
  if(age >= legal_age_to_drive){
    if(has_car == 'Y'){
      cout << "Yes, you can drive! wow nice 😎" << endl;
      return 0;
    } else {
      cout << "Sorry, you need to buy a car before you can drive, cunt." << endl;
      return 0;
    }
  } else {
    cout << "Sorry, come back in " << (16 - age) << " years and be sure you own a car when you come back. Stop wasting my fucking time.." << endl;
  }
  // cout << "Your age: " << age << ", " << "Your car owndership: " << has_car << endl;
  return 0;
}