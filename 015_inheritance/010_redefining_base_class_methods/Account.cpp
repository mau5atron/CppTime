#include <iostream>
#include "Account.h"

Account::Account() : Account { 0.0 }{ // delegating constructor to overloaded constructor below (1.1)
}

// 1.1 overloade constructor being used above for no args constructor
Account::Account( double balance ) : balance( balance ){
}

void Account::deposit( double amount ){
  balance += amount;
}

void Account::withdraw( double amount ){
  if( ( balance - amount ) >= 0 ){ 
    // if subtracting amount from balance is above a 0 value, then subtract it
    balance -= amount;
  } else {
    std::cout << "Insufficient funds" << std::endl;
  }
}

// overloaded insertion operator
std::ostream &operator<<( std::ostream &os, const Account &account ){
  // os is output stream, account is account object
  os << "Account balance: " << account.balance;
  return os;
}