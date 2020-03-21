#include "headers/Checking_Account.h"
#include "headers/Account.h"
#include <iostream>

Checking_Account::Checking_Account( std::string name_val, double balance_val ) 
  : Account { name_val, balance_val }{
  std::cout << "Checking account name: " << get_name() << ", checking account balance: " << get_balance() << std::endl;
}

Checking_Account::Checking_Account() 
  : Checking_Account { "Unknown checking account", 0.0 }{
  std::cout << "Checking account no args - name: " << get_name() << ", balance: " << get_balance() << std::endl;
}

bool Checking_Account::withdraw( double amount ){
  if( ( ( get_balance() - amount ) - fee ) >= 0 ){
    // tacking on 1.50 fee for withdrawals
    return Account::withdraw( amount + fee );
  } else {
    std::cout << "You have insufficient funds to withdraw." << std::endl;
    return false;
  }
}

Checking_Account::~Checking_Account(){
  std::cout << "Checking account destructor" << std::endl;
}