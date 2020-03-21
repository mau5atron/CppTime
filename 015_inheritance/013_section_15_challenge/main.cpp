#include <iostream>
#include "headers/Account.h"
#include "headers/Savings_Account.h"
#include "headers/Checking_Account.h"
#include "headers/Trust_Account.h"

int main(void)
{
  // Account()
  Account acc { "Gabriel's account", 200.0 };
  acc.deposit( 2000 );
  std::cout << "Account acc balance: " << acc.get_balance() << std::endl;
  std::cout << std::endl;
  // Savings_Account()
  Savings_Account acc1;
  acc1.deposit( 1000 );
  std::cout << "Account acc1 balance: " << acc1.get_balance() << std::endl;
  acc1.deposit( 1000 );
  std::cout << "Account acc1 balance: " << acc1.get_balance() << std::endl;
  std::cout << std::endl;
  // Checking_Account()
  Checking_Account acc2 { "Gabriel\'s checking account", 100 };
  acc2.withdraw( 25 );
  std::cout << "Checking account balance: " << acc2.get_balance() << std::endl;
  acc2.withdraw( 25 );
  std::cout << "Checking account balance: " << acc2.get_balance() << std::endl;
  std::cout << std::endl;
  // Trust_Account
  // ( amount / balance ) * 100 to get the percentage
  Trust_Account acc3 { "Gabriel\'s trust account", 700, 5.0 };
  acc3.deposit( 350 );
  acc3.deposit( 50 );
  std::cout << "Trust account balance: " << acc3.get_balance() << std::endl;
  acc3.withdraw( 500 );
  acc3.withdraw( 100 );
  acc3.withdraw( 100 );
  acc3.withdraw( 100 );
  acc3.withdraw( 100 );
  std::cout << "Trust account balance: " << acc3.get_balance() << std::endl;

  return 0;
}