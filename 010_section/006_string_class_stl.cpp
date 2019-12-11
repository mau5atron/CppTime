#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  C++ Strings:

  std::string is a Class in the Standard Template Library
    - #include <string>
    - std namespace 
    - contiguous 
    - dynamic size
    - work with input and output streams
    - lots of useful member functions
    - our familiar operators can be used ( +, =, <, <=, >, >=, +=, -=, *=, ==, [], != )
    - can be easily converted to C-style strings if needed
    - safer
    - Note
      - Sometimes you need to use C-style strings. Maybe, you're interfacing
        with a library that has been optimized for C-style strings, in this use
        case you case still use C++ strings and take advantage of them. When you
        need to, you can easily convert the C++ string in a C-style string and
        back again.

      - Like vectors, C++ strings are safer since they provide methods that can
        bounds check, and allows you find errors in your code so you can fix
        them before your code goes into production.

  Declaring and initializing C++ strings: 
    #include <string>
    using namespace std;

    string s1; // empty
    string s2 { "Frank" }; // Frank
    string s3 { s2 }; // Frank
    string s4 { "Frank", 3 }; // Fra
    string s5 { s3, 0, 2 }; // Fr
    string s6 { 3, 'X' }; // XXX

  Concatenation: 
    string part1 { "C++" };
    string part2 { "is a powerful" };

    string sentence;
    sentence = part1 + " " + part2 + " language."; // C++ is a powerful language

    sentence = "C++" + " is powerful."; // illegal
  
      - Above wont compile bc there is two C-style literals
        and you cannot concatenate C-style literals.

      - Only works with C++ strings.
    

  Accessing characters [] and at() method:
    
    string s1;
    string s2 { "Frank" };

    cout << s2[0] << endl; // F
    cout << s2.at(0) << endl; // F

    - Note: 
      - at() method performs bounds checking so that if you go over bounds you can
        handle the exception.


    s2[0] = 'f'; // frank
    s2.at(0) = 'p' // prank

    string s1 { "Frank" };

    for (char char_el : s1){
      cout << char_el << endl
    }

    returns: 
    F
    r
    a
    n
    k

    OR if you choose type int in the for loop
    you will get the integer values for that specific character

    for(int char_el : s1){
      cout << char_el << endl;
    }

    returns: 

    70  // F
    114 // r
    97  // a
    110 // n
    107 // k
    0   // null character

  Comparing Strings: 

    == != > >= < <= 

    The objects are compared character by character lexically.

    Can compare: 
      - two std::string objects
      - std::string object and C-style string literal
      - std::string object and C-style string variable


    string s1 { "Apple" };
    string s2 { "Banana" };
    string s3 { "Kiwi" };
    string s4 { "apple" };
    string s5 { s1 };

    s1 == s5 // True
    s1 == s2 // False
    s1 != s2 // True
    s1 < s2  // True
    s2 > s1  // True
    s4 < s5  // False
    s1 == "Apple"; // True 

  
  Substrings: 

    substr()
      - Extracts a substring from a std::string
      - object.substr( start_index, length )

    Example: 

      string s1 { "This is a test" };

      cout << s1.substr(0, 4); // This
      cout << s1.substr(5, 2); // is 
      cout << s1.substr(10, 4); // test

    find()
      - Returns the index of a substring in a std::string
      object.find(search_string)

      string s1 { "This is a test" };

      cout << s1.find("This"); // 0

      cout << s1.find("is"); // 2

      cout << s1.find("test"); // 10

      cout << s1.find('e'); // 11

      cout << s1.find("is", 4); // 5

      cout << s1.find("XX"); // string::npos
    
  Removing characters - erase() and clear()

    erase()
      - Removes a substring of characters from an std::string
      object.erase(start_index, length)

      string s1 { "This is test" };

      cout << s1.erase(0, 5); // is a test
      cout << s1.erase(5, 4); // is a
      cout << s1.clear(); // empty string

  Other useful methods: 
    length()
      string s1 { "Frank" };

      cout << s1.length() << endl; // 5

      s1 += " James";
      cout << s1 << endl; // Frank James

  Input: 
    Input >> and getline()
    - Reading std::string from cin

    string s1;
    cin >> s1; // Hello there
               // only accepts up to the first space
    
    cout << s1 << endl; // Hello


    getline(cin, s1); // Read entire line until \n
    cout << s1 << endl; // Hello there

    getline(cin, s1, 'x'); // this isx - called delimeter
    cout << s1 << endl; // this is
*/ 