#include <iostream>
#include "Account.h"

// Account::Account() : Account { 0.0 }{ // delegating constructor to overloaded constructor below (1.1)
// }

// // 1.1 overloade constructor being used above for no args constructor
// Account::Account( double balance ) : balance( balance ){
// }

// constructor
Account::Account( std::string name, double balance ) : name { name }, balance { balance }{
}

// void Account::deposit( double amount ){
//   balance += amount;
// }

bool Account::deposit( double amount ){
  if( amount < 0 ){
    return false;
  } else {
    balance += amount;
    return true;
  }
}

// void Account::withdraw( double amount ){
//   if( ( balance - amount ) >= 0 ){ 
//     // if subtracting amount from
//      balance is above a 0 value, then subtract it
//     balance -= amount;
//   } else {
//     std::cout << "Insufficient funds" << std::endl;
//   }
// }

bool Account::withdraw( double amount ){
  if( balance - amount >= 0 ){
    balance -= amount;
    return true;
  } else {
    return false;
  }
}

double Account::get_balance() const {
  return balance;
}

// overloaded insertion operator
// std::ostream &operator<<( std::ostream &os, const Account &account ){
//   // os is output stream, account is account object
//   os << "Account balance: " << account.balance;
//   return os;
// }

std::ostream &operator<<( std::ostream &os, const Account &account ){
  os << "[Account: " << account.name << " - Balance: " << account.balance << "]";
  return os;
}