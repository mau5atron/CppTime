#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
// redefining unsigned int as uint
typedef unsigned int uint;
// typedef unsigned double udouble; lol double can't be signed or unsigned 

int main(void)
{
  cout << "Ranged Based For Loops Examples: " << endl;
  string spacing {"------------------------"};
  cout << spacing << endl;
  uint scores[]{10, 20, 30};

  // for( uint score : scores ){
  //   cout << score << endl;
  // }

  uint count {};
  // compiler figures out the type based on using auto
  for( auto score : scores ){
    count++;
    cout << "Pass " << count << ": " << score << endl;
  }
  cout << spacing << endl;

  vector<double> temperatures {88.5, 78.9, 82.3, 95.1, 100.02};
  double average_temp {}; // average temps going in here
  double total {}; // added each temp from vector to total 

  for( double temp : temperatures ){
    total += temp;
  }


  cout << fixed << setprecision(1); // sets the output precision 

  if(temperatures.size() != 0){
    average_temp = (total / temperatures.size());
    cout << "Average temperature: " << average_temp << endl;
  } else {
    cout << "Sorry, your vector does not contain any temperatures" << endl;
  }

  cout << spacing << endl;

  for ( auto val: {1, 2, 3, 5, -40}){
    cout << "Val header: " << val << endl;
  }

  cout << spacing << endl;

  for ( auto c: "This is a test"){
    // if(c != ' '){
    //   // print out each character other than string 
    //   cout << c;
    // }

    if(c == ' '){
      // if there is a space present then add in a tab
      cout << "\t";
    } else {
      cout << c;
    }
    
  }

  cout << endl;

  /*
    this does the same thing
    except the top one you cant append endl
    this version you can append endl at the end while printing
    out the entire screen 
  */ 
  // char empty_string {' '};/
  // for( auto c: {"This is a test."}){
  //   if(c != ' '){
  //     // if not equal to empty string or space 
  //     cout << c << endl;
  //   }
  // }

  cout << spacing << endl;
  return 0;
}