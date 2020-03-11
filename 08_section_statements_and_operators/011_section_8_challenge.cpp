/*
  Section 8 Challenge

  Write a program that asks the user to enter the following: 

  - An integer representing the number of cents 
  You may assume that the number of cents entered is greater than or 
  equal to zero

  - The program should then display how to provide that change to the user 

  - In the US: 
    - 1 dollow = 100 cents
    - 1 quarter = 25 cents 
    - 1 dime = 10 cents 
    - 1 nickel = 5 cents 
    - 1 penny = 1 cents 
  
  Here is a sample run: 

  Enter an amount in cents: 92

  You can provide change as follows: 
  - dollars: 0
  - quarters: 3
  - dimes: 1
  - nickels: 1
  - pennies: 2
*/
#include <iostream>

using namespace std;

int main(void)
{
  int entered_num {0};
  // defining conversions
  const int dollar_value {100};
  const int quarter_value {25};
  const int dime_value {10};
  const int nickel_value {5};
  const int penny_value {1};

  int leftover_balance {}, dollars {}, quarters {} , dimes {}, nickels {}, pennies {};
  // wont be using modulo
  cout << "Enter an amount in cents: " << endl << "\n> ";
  cin >> entered_num;
  cout << "Entered amount: " << entered_num << endl;

  // dollars 
  dollars = entered_num / dollar_value; // get back only dollars, not the 
  leftover_balance = entered_num - (dollars * dollar_value);
  cout << "Dollars: " << dollars << "\nLeft over balance: " << leftover_balance << endl;  
  cout << endl;
  
  // quarters
  quarters = leftover_balance / quarter_value;
  leftover_balance -= quarters * quarter_value; // amount of quarters * the value of each quarter removing from leftover balance
  cout << "Quarters: " << quarters << "\nLeft over balance: " << leftover_balance << endl;
  cout << endl;
  
  // dimes 
  dimes = leftover_balance / dime_value;
  leftover_balance -= dimes * dime_value;
  cout << "Dimes: " << dimes << "\nLeft over balance: " << leftover_balance << endl;
  cout << endl;

  // nickels 
  nickels = leftover_balance / nickel_value;
  leftover_balance -= nickels * nickel_value;
  cout << "Nickels: " << nickels << "\nLeft over balance: " << leftover_balance << endl;
  cout << endl;

  // pennies 
  pennies = leftover_balance / penny_value;
  leftover_balance -= pennies * penny_value;
  cout << "Pennies: " << pennies << "\nLeft over balance: " << leftover_balance << endl;
  
  return 0;
}