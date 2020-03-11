#include <iostream>
#include <string>

using namespace std;

void make_pyramid(string input){
  string user_input {input};
  string space {};

  do {
    space += " ";
  } while ( space.length() <= ( user_input.length() - 1 ) );

  int j_state {};
  for ( size_t i { 0 }; i < user_input.length() ; ++i ){
    cout << space;
     
    for ( size_t j { 0 }; j < (i + 1) ; ++j ){
      cout << user_input[j];
      j_state = j;
    }

    if( i > 0 ){
      for ( int j { static_cast<int>(j_state - 1 ) }; j > -1; --j ){
        cout << user_input[j];
      }
    }
    cout << endl;
    space.erase( 0, 1);
  }
}

int main(void)
{
  string input {};
  string string_to_make_pyramid {};
  cout << "Welcome to Letter Pyramid!" << endl;
  do {
    cout << "What would you like to do?" << endl;
    cout 
    << "A. Make a pyramid :)\n"
    << "Q. Quit\n"
    << "\n> ";
    getline(cin, input);
    (input == "a") ? (input = "A") : (input);
    (input == "q") ? (input = "Q") : (input);
    if(input == "A"){
      cout << "Enter a string to create a pyramid: \n> ";
      getline(cin, string_to_make_pyramid);
      make_pyramid(string_to_make_pyramid);
    }
  } while (input != "Q");

  return 0;
}




















// // Letter Pyramid
// // Written by Frank J. Mitropoulos

// #include <iostream>
// #include <string>


// int main()
// {
//     std::string letters{};

//     std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
//     getline(std::cin, letters);

//     size_t num_letters = letters.length();

//     int position {0};

//     // for each letter in the string
//     for (char c: letters) {

//         size_t num_spaces = num_letters - position;
//         while (num_spaces > 0) {
//             std::cout << " ";
//             --num_spaces;
//         }

//         // Display in order up to the current character
//         for (size_t j=0; j < position; j++) {
//             std::cout << letters.at(j);
//         }

//         // Display the current 'center' character
//         std::cout << c;

//         // Display the remaining characters in reverse order
//         for (int j=position-1; j >=0; --j) {
//             // You can use this line to get rid of the size_t vs int warning if you want
//             auto k = static_cast<size_t>(j);
//             std::cout << letters.at(k);
//         }

//         std::cout << std::endl; // Don't forget the end line
//         ++position;
//     }

//     return 0;
// }