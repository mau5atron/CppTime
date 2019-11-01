#include <iostream>

using namespace std;

int main(void)
{
  // infinite loop examples

  // infinite for loop
  for(;;){
    cout << "This will print forever." << endl;
  }

  while(true){
    cout << "This will print forever." << endl;
  }

  do {
    cout << "This will print forever." << endl;
  } while(true);

  // infinite loop that may still be ok, however, needs to be more informative 
  while(true){
    char again {};
    cout << "Do you want to loop again? (Y/N): ";
    cin >> again;
    again = toupper(again);

    if(again == 'N'){
      // breaks out of infinite loop
      break;
    }
  }
  return 0;
}

/*
  Infinite loops: 
  - Loops whose condition expression always evaluate to true
  - Usually this is unintended and a programmer error.
  - Sometimes programmers use infinite loops and include and break statements in
    the body to control them.
  - Somtimes infinite loops are exactly what we need: 
    - Event loop in an event-driven program
    - Operating system
*/ 