#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
  /*
    switch(integer_control_expression){
      case expression_1: 
        statement_1; 
        break;
      case expression_2: 
        statement_2;
        break;
      case expression_3: 
        statement_3;
        break;
      ...

      case expression_n: 
        statement_n;
        break;
      default: statement_default;
    }

    NOTE: if you do not include a break statement in each of your cases, 
    then each of your cases will run until a break is met

    **********************************************************************

    The Switch Statement 
    - The control expression must evaluate to an integer type 
    - The case expressions must be constant expressions that evaluate 
    to integer or integer literals.
    - Once a match occurs all following cases are executed UNTIL a break is
    reached the switch complete
    - Best practive - provide a break statement for each case
    - Best practive - default is optional, but should be handled
  */ 
  enum Color {
    /*
      An enumeration is a distinct type whose value is restricted to a range 
      of values which may include several explicitly named constants
      ("enumerators"). The values of the constants are values of an integral 
      type known as the underlying type of the enumeration. 

      Each enumerator becomes a named constant of the enumeration's 
      type (that is, name) visible in the enclosing 
      scope, and can be used whenever constants are required. 
    */ 
    red, green, blue
  };
  Color screen_color (green);
  switch(screen_color){
    case red: 
      cout << "red" << endl;
      break;
    case green: 
      cout << "green" << endl;
      break;
    case blue: 
      cout << "blue" << endl;
      break;
    default: 
      cout << "Ummmmm" << endl;
      break;
  }

  // char num {'1'};

  // switch (num){
  //   case '1':
  //     cout << "1 selected" << endl;
  //     // break;
  //   case '2':
  //     cout << "2 selected" << endl;
  //     break;
  //   default:
  //     cout << "1 & 2 not selected..." << endl;
  //     break;
  // }
  
  return 0;
}