#include "headers/Account.h"
#include <iostream>

Account::Account(){
  // needed this default constructor without arguments, otherwise the = def_name
  // one would fire and create an unknown object
  name = def_name;
  balance = def_balance;
}

Account::Account( std::string name_val, double balance_val ){
  if ( balance_val < 0 ){
    throw IllegalBalanceException();
  }

  name = name_val;
  balance = balance_val;
}

bool Account::withdraw( double amount ){
  if( ( balance - amount ) >= 0 ){
    balance -= amount;
    return true;
  } else {
    // std::cout << "Could not withdraw from Account." << std::endl;
    // return false;
    throw InsufficientFundsException();
  }
}

bool Account::deposit( double amount ){
  if( amount > 0 ){
    balance += amount;
    return true;
  } else {
    std::cout << "Amount to deposit should be greater than 0" << std::endl;
    return false;
  }
}

void Account::print( std::ostream &os ) const {
  os.precision(2);
  os << std::fixed;
  os << "[Account: " << name << " : " << balance << "]";
}

// dont need this because we have the print function
// std::ostream &operator<<( std::ostream &os, const Account &account ){
//   os << "[Account: " << account.name << " : " << account.balance << "]";
//   return os;
// }