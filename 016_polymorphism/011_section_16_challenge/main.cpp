#include <iostream>
#include "headers/Account.h"
#include "headers/Checking_Account.h"
#include "headers/I_Printable.h"
#include "headers/Savings_Account.h"
#include "headers/Trust_Account.h"
#include "headers/Account_Utils.h"

int main(void)
{
  // Account joe; // error - Account is abstract class, good!
  Checking_Account c;
  std::cout << c << std::endl;
  

  Savings_Account s { "Frank", 5000, 2.6 };
  std::cout << s << std::endl;

  s.deposit( 100000 );
  std::cout << s << std::endl;


  Account *ptr = new Trust_Account( "Leo", 10000, 2.6 ); // not being dynamically bound
  std::cout << *ptr << std::endl;

  Checking_Account frank { "frank", 5000 };
  std::cout << frank << std::endl;

  Account *trust = new Trust_Account("James");
  std::cout << *trust << std::endl;

  Account *p1 = new Checking_Account("Larry", 10000);
  Account *p2 = new Savings_Account("Moe", 1000);
  Account *p3 = new Trust_Account("Curly");

  std::vector<Account *> accounts { p1, p2, p3 };

  display(accounts);
  deposit(accounts, 1000);
  withdraw(accounts, 2000);

  delete p1;
  delete p2;
  delete p3;

  return 0;
}