#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

string header( string header_name ){
  string formatted_header { "\n*" + header_name + "*\n" };
  return formatted_header;
}

string sub_header( string header_name ){
  string formatted_header { "\n" + header_name + ": " };
  return formatted_header;
}

int main(void)
{
  string s0;
  string s1 { "Apple" };
  string s2 { "Banana" };
  string s3 { "Kiwi" };
  string s4 { "apple" };
  string s5 { s1 }; // Apple
  string s6 { s1, 0, 3 }; // App
  string s7 ( 10, 'X' ); // XXXXXXXXXX
  
  // cout << s0 << endl; // No garbage
  // cout << s0.length() << endl; // empty string

  vector<string> test_strings { s0, s1, s2, s3, s4, s5, s6, s7 };
  size_t i { 0 };
  for(auto s : test_strings){
    cout << "s" << i << " is initialized to " << s << endl; 
  }

  // Comparison

  cout << header("Comparision") << endl; 
  cout << boolalpha;

  cout << s1 << " == " << s5 << ": " << ( s1 == s5 ) << endl;

  cout << s1 << " == " << s2 << ": " << ( s1 == s2 ) << endl;

  cout << s1 << " != " << s2 << ": " << ( s1 != s2 ) << endl;

  cout << s1 << " < " << s2 << ": " << ( s1 < s1 ) << endl;

  cout << s2 << " > " << s1 << ": " << ( s2 > s1 ) << endl;

  cout << s4 << " < " << s5 << ": " << ( s4 < s5 ) << endl;

  cout << s1 << " == " << "Apple" << ": " << ( s1 == "Apple" ) << endl;

  // Assignment 

  cout << header("Assignment") << endl;
  s1 = "Watermelon";
  cout << "s1 is now: " << s1 << endl; // Watermelon

  s2 = s1;
  cout << "s2 is now: " << s2 << endl; // Watermelon

  s3 = "Frank";
  cout << "s3 is now: " << s3 << endl; // Frank

  s3[0] = 'C'; // Crank
  cout << "s3 first letter is now C: " << s3 << endl; // Crank
  
  s3.at(0) = 'P'; 
  cout << "s3 first letter is now P: " << s3 << endl; // Prank

  // Concatenation

  s3 = "Watermelon";
  
  s3 = s5 + " and " + s2 + " juice"; // Apple and Banana juice, works because object + c style string literal
  cout << "s3 is now: " << s3 << endl; // Apple and Banana juice

  // s3 = "nice" + " cold " + s5 + " juice"; // compiler error, fails because
  // C-style string literal + C-style string literal

  cout << header("Looping") << endl;
  s1 = "Apple";
  cout << sub_header("For loop") << endl;
  for ( size_t i { 0 }; i < s1.length(); ++i ){
    cout << "s1 at: " << i << " == " << s1.at(i) << endl;
  }

  // Range-based for loop
  // auto should be char in this case
  cout << sub_header("Range-Based for loop") << endl;
  for( auto c : s1 ){
    cout << c << endl;
  }

  // Substring
  cout << sub_header("Substring") << endl;
  s1 = "This is a test";
  cout << "s1 => " << s1 << endl;
  cout << "s1.substr( 0 ,4 ) => " << s1.substr( 0, 4 ) << endl; // This
  cout << "s1.substr( 5 ,2 ) => " << s1.substr( 5, 2 ) << endl; // is
  cout << "s1.substr( 10 ,4 ) => " << s1.substr( 10, 4 ) << endl; // test

  // Erase
  cout << sub_header("Erase") << endl;
  s1 = "This is the best";
  cout << "s1 is: " << s1 << endl;
  s1.erase( 0, 5 ); // Erase 'This' from s1 results in "is a test"
  cout << "s1 is now: " << s1 << endl;

  // Getline
  cout << sub_header("getline") << endl;
  string full_name {};

  cout << "Enter your full name: \n> ";
  getline( cin, full_name);

  cout << "Your full name is: " << full_name << endl;

  // Find
  cout << sub_header("Find") << endl;
  s1 = "The secret word is Boo";
  string word {};

  cout << "Enter a word to find \n> ";
  cin >> word;

  size_t position = s1.find( word );
  if( position != string::npos ){
    cout << "Found '" << word << "' at position: " << position << endl;
  } else {
    cout << "Sorry, '" << word << "' not found." << endl;
  }

  return 0;
}