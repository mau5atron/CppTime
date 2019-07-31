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
  
  cout << "Enter an amount in cents: " << endl << "\n> ";
  cin >> entered_num;

  // dollars
  dollars = entered_num / dollar_value;
  leftover_balance = entered_num % dollar_value;
  cout << "Dollars: " << dollars << "\nLeft over balance: " << leftover_balance << endl;
  cout << endl;

  // quarters 
  quarters = leftover_balance / quarter_value;
  leftover_balance %= quarter_value;
  cout << "Quarters: " << quarters << "\nLeft over balance: " << leftover_balance << endl;
  cout << endl;

  // dimes 
  dimes = leftover_balance / dime_value;
  leftover_balance %= dime_value; 
  cout << "Dimes: " << dimes << "\nLeft over balance: " << leftover_balance << endl;
  cout << endl;

  // nickels 
  nickels = leftover_balance / nickel_value;
  leftover_balance %= nickel_value;
  cout << "Nickels: " << nickels << "\nLeft over balance: " << leftover_balance << endl;
  cout << endl;

  // pennies 
  pennies = leftover_balance / penny_value;
  leftover_balance %= penny_value;
  cout << "Pennies: " << pennies << "\nLeft over balance: " << leftover_balance << endl;
  
  return 0;
}