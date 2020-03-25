#include "headers/Checking_Account.h"
// dont need these since imported in header file
// #include "headers/Account.h"
// #include <iostream>

Checking_Account::Checking_Account( std::string name_val, double balance_val ) 
  : Account { name_val, balance_val }{
  std::cout << "Checking account name: " << get_name() << ", checking account balance: " << get_balance() << std::endl;
}

// dont need this, using constexpr and delegating in main constructor to also
// handle default no args
// Checking_Account::Checking_Account() 
//   : Checking_Account { "Unknown checking account", 0.0 }{
//   std::cout << "Checking account no args - name: " << get_name() << ", balance: " << get_balance() << std::endl;
// }

bool Checking_Account::withdraw( double amount ){
  if( ( ( get_balance() - amount ) - fee ) >= 0 ){
    // tacking on 1.50 fee for withdrawals
    return Account::withdraw( amount + fee );
  } else {
    std::cout << "You have insufficient funds to withdraw." << std::endl;
    return false;
  }
}

// dont need this, actually do for clearing pointer
Checking_Account::~Checking_Account(){
  std::cout << "\nChecking_Account destructor" << "\n" << std::endl;
}

std::ostream &operator<<( std::ostream &os, const Checking_Account &account ){
  os << "[Checking_Account: " << account.name << ", balance: " << account.balance << "]";
  return os;
}