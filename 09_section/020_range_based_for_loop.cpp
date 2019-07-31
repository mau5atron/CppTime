#include <iostream>

using namespace std;

int main(void)
{
  int scores []{ 100, 90, 97 };
  for( unsigned int score : scores ){
    cout << score << endl;
  }

  // auto tells c++ compiler to deduce the type and figure out the 
  // the type based on the declarations 
  for( auto score : scores ){
    cout << score << endl;
  }


  return 0;
}


  /*

    Introduced in C++11

    for(var_type var_name: sequence){
      statement; // can use var_name
    }

    for(var_type var_name: sequence){
      statements; // can use var_name
    }



  */ 