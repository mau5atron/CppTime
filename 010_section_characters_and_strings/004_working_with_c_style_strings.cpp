#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> // for character-based functions
#include <string>

using namespace std;

int main(void)
{ 
  // char first_name[20] {};
  // char last_name[20] {};
  char full_name[50] {};
  char temp[50] {};
  string dashes {"----------------------------------------------"};

  // cout << "Enter first name: " << "\n> ";
  // cin >> first_name;
  // cout << "Enter last name: " << "\n> ";
  // cin >> last_name;
  // cout << dashes << endl;
  // cout << "Hello, " << first_name << ", you first name has " << strlen(first_name) << " characters." << endl;
  /* 
    strlen(first_name) will be of size_t - typically unsigned int since we
    can't count negatively.
    strlen counts characters until reaching null character in the array
  */ 


  // cout << "Your last name " << last_name << " contains " << strlen(last_name) << " characters." << endl;
  // strcpy(full_name, first_name); // copy first_name to full_name
  // strcat(full_name, " ");        // concatenate full_name and a space 
  // strcat(full_name, last_name);  // concatenate last_name to full_name
  // cout << "Your full name is " << full_name << endl;
  cout << dashes << endl;


  // cin stops at space separation here
  // cout << "Enter your full name: " << "\n> ";
  // cin >> full_name; // returns Gabriel instead of Gabriel Betancourt

  cout << "Enter full name: " << "\n> "; 
  cin.getline(full_name, 50); // gets full name up to 50 characters
  cout << "Your full name is " << full_name << endl; // output: Gabriel Betancourt
  
  cout << dashes << endl;
  strcpy(temp, full_name);
  
  if( strcmp(temp, full_name) == 0 ){
    cout << temp << " and " << full_name << " are the same." << endl;
  } else {
    cout << temp << " and " << full_name << " are different." << endl;
  }

  cout << dashes << endl;

  for ( size_t i{ 0 } ; i < strlen(full_name) ; ++i){
    if(isalpha(full_name[i])){
      full_name[i] = toupper(full_name[i]);
    }
  }
  
  cout << "Your full name is " << full_name << endl; // output: GABRIEL BETANCOURT
  
  cout << dashes << endl;

  if( strcmp( temp, full_name ) == 0 ){
    cout << temp << " and " << full_name << " are the same." << endl;
  } else {
    cout << temp << " and " << full_name << " are not the same." << endl;
  }

  cout << dashes << endl;
  cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
  cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
  
  return 0;
}