#include <iostream>
#include <string>

using namespace std;
void menu();
double convert_to_celsius(double);
double convert_to_kelvin(double);
double convert_to_celsius(double temp){
  return ( (5.0 / 9.0) * (temp - 32) );
}

double convert_to_kelvin(double temp){
  return ( (5.0 / 9.0) * (temp - 32) + 273 );
}

void menu(){
  string input {};
  double conversion_val {};

  do {      
    cout << "\n------------------------------------\n" << endl;
    cout 
    << "What would you like to do?\n" 
    << "A. Convert fahrenheit value to celsius\n"
    << "B. Convert fahrenheit value to kelvin\n"
    << "Q. Quit Program\n"
    << "\n> ";
    // getline(cin, input); // maybe its also counting the null value
    cin >> input;

    if( input == "a" ){
      input = "A";
    } else if( input == "b" ) {
      input = "B";
    } else if( input == "q" ) {  
      input = "Q"; 
    }
    // (input == "a") ? (input = "A") : (input);
    // (input == "b") ? (input = "B") : (input);
    // (input == "q") ? (input = "Q") : (input);
    if(input == "A"){
      while(1){
        cout << "\nEnter a fahrenheit value to convert to celsius: \n> ";
        cin >> conversion_val;
        if( cin.good() ){
          cout << conversion_val << " fahrenheit converted to celsius is: " << convert_to_celsius(conversion_val) << endl;
          break;
        } else {
          cout << "\nInput is not a valid floating point digit. Please enter a correct value. " << endl;
          cin.clear();
          cin.ignore(100000, '\n');
        }
      }
    } else if(input == "B") {
      while(1){
        cout << "Enter a fahrenheit value to convert to kelvin: \n> ";
        cin >> conversion_val;
        if( cin.good() ){
          cout << conversion_val << " fahrenheit converted to kelvin is: " << convert_to_kelvin(conversion_val) << endl;
          break;
        } else {
          cout << "\nInput is not a valid floating point digit. Please enter a correct value. " << endl;
          cin.clear();
          cin.ignore(100000, '\n'); // clearing input
        }
      }
    } else if( input == "Q" ){
      break;
    } else {
      cout << "\nUmm... invalid value??" << endl;
    }

  } while( input != "Q" || input != "A" || input != "B" );
}

int main(void){
  menu();
  return 0;
}

/*
  In this exercise you will create that will be used to convert Fahrenheit
  temperatures to Celsius and Kelvin temperatures through the use of two
  functions.

  For this program, assume that 'temperature will be represented as a double
  value'.
  
  Begin by defining the function prototypes for the functions
  fahrenheit_to_celsius and fahrenheit_to_kelvin which are both passed a double
  and return a double value.

  Now, at the bottom of the file, write the full definitions of both functions. 

  The function fahrenheit_to_celsius is 'passed a fahrenheit temperature' and
  'returns a round celsius temperature'.

  You may use the <cmath> function round in order to roudn the return value. 

  The formula to convert Fahrenheit to Celsius is (5.0 / 9.0) * (temperature -
  32)
  
  The function fahrenheit_to_kelvin is 'passed a fahrenheit temperature' and
  'returns a rounded kelvin temperature'. The formula to convert Fahrenheit to
  Kelvin is (5.0 / 9.0) * (temperature - 32) + 273

  Remember the rules of PEMDAS (LMAO) when defining the body of your functions

  Now, from the 'temperature_conversion' function, declare and initialize the
  variables 'celsius_temperature' and 'kelvin_temperature' by calling the
  appropriate functions which you have just defined and passing the variable
  'fahrenheit_temperature'
  

*/ 