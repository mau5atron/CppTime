#include <iostream>

using namespace std;

int main(void)
{
  /* 
    If Statement 

    if(expression)
      statement;

    - If the expression is true then execute the statement 
    - If the expression is false then skip the statement 

    Block Statement 
    {
      .. variable declarations 
      statement1; 
      statement2;
    }

    - Create a block of code by including more than one statement in code block
      {}
    - Blocks can also contain variable declarations 
    - These variables are visisble only within the block - local scope


  */ 

  /*
    Note when using return 0 and return 1

    The return value from 'main' is used in a different way, it is returned to
    the shell that called the program. In the shell's context the value is
    interpreted differently. There, 0 traditionally means "no error" while
    values larger than zero indicate errors and the value itself contains some
    hints as to what kind of error occured: 
  */ 


  int num {};
  const int min {10};
  const int max {100};

  cout << "Enter a number between " << min << " and " << max << endl << "> ";
  cin >> num;
  if(num > 100 || num < 10){
    cout << "You are fucking out of bounds, kiddo" << endl;
    return 1; // exit the program, as error
  }

  cout << "The number you chose is: " << num << endl;
  return 0;
}