#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  char letter_grade {};
  cout << "Enter the letter grade you expect on the exam" << "\n> ";
  cin >> letter_grade;
  letter_grade = toupper(letter_grade);
  while(letter_grade != 'A' && letter_grade != 'B' && letter_grade != 'C' && letter_grade != 'D' && letter_grade != 'F'){
    cout << "Sorry, you did not enter a proper grade." << endl;
    cout << "Enter the letter grade you expect on the exam" << "\n> ";
    cin >> letter_grade;
    letter_grade = toupper(letter_grade);
  }

  switch(letter_grade){
    case 'A': 
      cout << "You need a 90 or above, study hard!" << endl;
      break;
    case 'B': 
      cout << "You need 80-89 for a B, go study!" << endl;
      break;
    case 'C': 
      cout << "You need a 70-79 for an average grade." << endl;
      break;
    case 'D': 
      cout << "Bro, you're close to failing ";
      break;
    case 'F': 
      {
        char confirm {};
        cout << "Are you sure (Y/N)?";
        cin >> confirm;
        confirm = toupper(confirm);
        
        if( confirm == 'Y' ){
          cout << "OK, guess you didn't study, huh?" << endl;
        } else if( confirm == 'N' ) {
          cout << "Good, go study nerd" << endl;
        } else {
          cout << "Illegal Choice." << endl;
        }

        // break; remove to continue
      }
      cout << "lmao you failed..." << endl;
      break;
    default: 
      cout << "alright idk what happened" << endl;
      break;
   }

  return 0;
}