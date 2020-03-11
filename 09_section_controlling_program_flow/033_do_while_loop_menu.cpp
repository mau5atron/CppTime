#include <iostream>
#include <functional>
#include <string>

using namespace std;

string display_menu_line(void)
{
  string spacing { "*********************************************" };
  // endl is equivalent to "\n" + cout.flush();
  cout << spacing << endl;
  return spacing;
}

int main(void)
{
  char selection {};
  string you_chose {"You chose "};  

  do {
    display_menu_line();
    cout 
    << "1. Do This" 
    << endl 
    << "2. Do That" 
    << endl 
    << "3. Do Something Else" 
    << endl 
    << "Q: Quit" 
    << endl;
    cout << endl;

    cout << "Enter your selection: ";
    cin >> selection;
    if(selection == 'q'){
      selection = toupper(selection);
    }

    switch (selection)
    {
      case '1':
      cout << you_chose << selection << " - " << "Do This" << endl;
      break;

      case '2':
      cout << you_chose << selection << " - " << "Do That" << endl;
      break;

      case '3': 
      cout << you_chose << selection << " - " << "Do Something Else" << endl;
      break;

      case 'Q':
      cout << you_chose << selection << " - " << "Quitting..." << endl;
      return 1;

      default:
      cout << "Unknown option - try again..." << endl;
      break;
    }
  } while (selection != '1' || selection != '2' || selection != '3' || selection != 'Q');

  return 0;
}