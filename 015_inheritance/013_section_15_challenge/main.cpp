#include <iostream>
#include <vector>
#include "headers/Account.h"
#include "headers/Savings_Account.h"
#include "headers/Checking_Account.h"
#include "headers/Trust_Account.h"
#include "headers/Account_Util.h"

int main(void)
{
  // Account()
  Account account1 { "Gabriel's account", 200.0 };
  account1.deposit( 2000 );
  std::vector<Account> accounts;
  accounts.push_back( account1 );
  Account account2;
  accounts.push_back( account2 );
  display( accounts );

  std::cout << std::endl;

  // Savings_Account()
  Savings_Account savings_account1;
  savings_account1.deposit( 1000 );
  savings_account1.deposit( 1000 );
  Savings_Account savings_account2 { "Gabriel\'s savings account", 300 };
  std::vector<Savings_Account> savings_accounts;
  savings_accounts.push_back( savings_account1 );
  savings_accounts.push_back( savings_account2 );
  display( savings_accounts );

  std::cout << std::endl;

  // Checking_Account()
  std::vector<Checking_Account> checking_accounts;
  Checking_Account checking_account1 { "Gabriel\'s checking account", 100 };
  checking_account1.withdraw( 25 );
  checking_account1.withdraw( 25 );
  checking_accounts.push_back( checking_account1 );
  display( checking_accounts );

  std::cout << std::endl;

  // Trust_Account
  Trust_Account trust_account1 { "Gabriel\'s trust account", 700, 5.0 };
  Trust_Account trust_account2;
  trust_account1.deposit( 350 );
  trust_account1.deposit( 50 );
  trust_account1.withdraw( 500 );
  trust_account1.withdraw( 100 );
  trust_account1.withdraw( 100 );
  trust_account1.withdraw( 100 );
  trust_account1.withdraw( 100 );
  std::vector<Trust_Account> trust_accounts;
  trust_accounts.push_back( trust_account1 );
  trust_accounts.push_back( trust_account2 );
  display( trust_accounts );
  
  return 0;
}