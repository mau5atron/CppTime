#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

int main(void)
{
  // std::cout.precision()
  std::cout.precision(2);
  // or can include #include <iomanip>
  // and do setprecision(2) within the stream insertion
  std::cout << std::fixed;

  // Accounts 
  std::vector<Account> accounts;
  accounts.push_back( Account{} ); // inserted no args constructor account into vector of accounts
  accounts.push_back( Account { "Larry" } );
  accounts.push_back( Account { "Moe", 2000 } );
  accounts.push_back( Account { "Curly", 5000 } );
  
  display( accounts );
  deposit( accounts, 1000 );
  withdraw( accounts, 2000 );

  std::vector<Savings_Account> savings_accounts;
  savings_accounts.push_back( Savings_Account {} );
  savings_accounts.push_back( Savings_Account { "Superman" } );
  savings_accounts.push_back( Savings_Account { "Batman", 2000 } );
  savings_accounts.push_back( Savings_Account { "Wonderwoman", 5000, 5.0 } );

  display( savings_accounts );
  deposit( savings_accounts, 1000 );
  withdraw( savings_accounts, 2000 );


  // from 010 folder
  // cout << "--- Account Class ---" << endl;
  // Account a1 { 1000.0 };
  // cout << a1 << endl; // Account balance: 1000

  // a1.deposit( 500.0 );
  // cout << a1 << endl; // Account balance: 1500

  // a1.withdraw( 1000.0 ); // Account balance: 500
  // cout << a1 << endl;

  // a1.withdraw( 5000.0 ); // Insufficient funds
  // cout << a1 << endl; // Account balance: 500

  // cout << "--- Savings Account class ---" << endl;

  // Savings_Account s1 { 1000.0, 5.0 };
  // cout << s1 << endl; // Savings Account balance: 1000, Interest rate: 5

  // s1.deposit( 1000 );
  // cout << s1 << endl; // Savings Account balance: 50, interest rate: 5

  // s1.withdraw( 2000 );
  // cout << s1 << endl;

  // s1.withdraw( 1000 ); // insufficient funds
  // cout << s1 << endl; // Savings Account balance: 50, interest rate: 5

  return 0;
}