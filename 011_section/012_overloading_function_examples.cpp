#include <iostream>
#include <cmath>
#include <vector>

using namespace std; 

int find_area( int side_len );
double find_area( double len, double w );
void area_calc();


int find_area( int side_len ){
  return pow(side_len, 2);
}

double find_area( double len, double wid ){
  return len * wid;
}

void area_calc(){
  string user_input {};
  do {
    vector<string> converted_chars {};

    cout 
    << "S - find area of square\n" 
    << "R - find area of rectangle\n"
    << "Q - quit program\n"
    << endl;

    cout << "Enter selection: ";
    cin >> user_input;

    // converting each char to uppercase
    for( auto &str_el : user_input ){
      converted_chars.push_back( string( 1, toupper(str_el) ));
    }
    user_input = "";
    for(auto &str_el : converted_chars ){
      user_input += str_el;
    }
    
    if( user_input == "S" ){
      while(1){
        double side_length {};
        cout << "Enter a value to calculate and find the area of a square: ";
        cin >> side_length;
        if( cin.good() ){
          cout << "Area of the square is: " << find_area(side_length) << endl;
          break;
        } else {
          cout << "\nInput is invalid type of double. Enter a correct value. " << endl;
          cin.clear();
          cin.ignore(100000, '\n');
        }
      }
    } else if( user_input == "R" ){
      while(1){
        double len, wid {};
        cout << "Enter length: ";
        cin >> len;
        cout << "\nEnter width: ";
        cin >> wid;
        if( cin.good() ){
          cout << "Area of the rectangle is: " << find_area(len, wid) << endl;
          break;
        } else {
          cout << "\nInput is invalid type of double. Enter a correct value. " << endl;
          cin.clear();
          cin.ignore(100000, '\n');
        }
      }
    } else if( user_input == "Q" ){
      break;
    } else {
      cout << "You entered an incorrect value" << endl;
    }
  } while( user_input != "Q" || user_input != "S" || user_input != "R" );
}

int main(void)
{
  area_calc();
  return 0;
}

/*
  In this exercise you will create a program that computes the area of two
  shapes, a 'square' and a 'rectangle', by calling the overloading function
  'find_area'.

  Begin by declaring the function prototypes for the 'square' 'find_area'
  function and the 'rectangle' 'find_area' function.

  The 'square' 'find_area' functions is 'passed an integer value' and 'returns
  an integer value'.
  
  The 'rectangle' 'find_area' function is 'passed two double values' and
  'returns a double value'.

  Remember that both function prototypes should have the same function name
  'find_area'.

  Now that the function prototypes have been declared, at the bottom of the file
  define both functions.

  The 'square' 'find_area' function will be passed the argument 'side_length'
  and return the area of the 'square'.

  The formula for the area of a 'square' is 'side_length' * 'side_length'. You
  use may use the '<cmath>' function 'pow' to compute this value if you wish.

  The 'rectangle' 'find_area' function will be passed the arguments 'length' and
  'width' and return the area of the 'rectangle'. The formula for the area of a
  'rectangle' is 'length' * 'width'.

  Now, from the function body of area_calc, declare and initialize the variables
  'square_area' 'rectangle_area' by calling the 'find_area' function and passing
  the appropriate arguments which are listed below.

  The 'square' has a 'side_length' of '2'.
  The 'rectangle' has a 'length' of '4.5' and a 'width' of '2.3'.
*/ 