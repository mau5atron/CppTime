#include "headers/Account.h"

Account::Account( std::string name_val, double balance_val ) 
  : name { name_val }, balance { balance_val }{
}

bool Account::withdraw( double amount ){
  if( ( balance - amount ) >= 0 ){
    balance -= amount;
    return true;
  } else {
    std::cout << "Could not withdraw from Account." << std::endl;
    return false;
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