#include <iostream>
#include <iomanip>
#include <string>
#include <typeinfo>

using namespace std;

int main(void)
{
  /*
    In this exercise you will write a "switch" statement that displays the name
    of the week given the day code. 

    You may use the integer variable named day_code whose value we will change
    to automatically test your code.

    Given the following codes, your program should display the day of the week
    using a cout statement. NO '\n' or endl should be used.

    day code      Display 
    --------      -------
        0         Sunday
        1         Monday
        2         Tuesday
        3         Wednesday
        4         Thursday
        5         Friday
        6         Saturday
  */ 

  // this works
  enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
  };

  Days day_code(Monday);
  string sentence {"It is " + to_string(day_code) + "!"};
  cout << "day code type: " << (typeid(day_code).name()) << endl;
  switch (day_code){
    case Sunday:
      cout << "day code type: " << (typeid(day_code).name()) << endl;
      cout << sentence << endl;
      break;
    case Monday: 
    cout << "day code type: " << (typeid(day_code).name()) << endl;
      cout << sentence << endl;
      break;
    case Tuesday: 
      cout << sentence << endl;
      break;
    case Wednesday:
      cout << sentence << endl;
      break;
    case Thursday: 
      cout << sentence << endl;
      break;
    case Friday:
      cout << sentence << endl;
      break;
    case Saturday: 
      cout << sentence << endl;
      break;
    default:
      cout << "UMMMM" << endl;
      break;
  }

  // for the assignment
  // switch (day_code){
  //   case 0:
  //     cout << "Sunday" << endl;
  //     break;
  //   case 1: 
  //     cout << "Monday" << endl;
  //     break;
  //   case 2: 
  //     cout << "Tuesday" << endl;
  //     break;
  //   case 3: 
  //     cout << "Wednesday" << endl;
  //     break;
  //   case 4: 
  //     cout << "Thursday" << endl;
  //     break;
  //   case 5: 
  //     cout << "Friday" << endl;
  //     break;
  //   case 6: 
  //     cout << "Saturday" << endl;
  //     break;
  //   default:
  //     break;
  // };

  return 0;
}