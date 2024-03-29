#include "headers/Checking_Account.h"

Checking_Account::Checking_Account( std::string name_val, double balance_val ) 
  : Account { name_val, balance_val }{
}

bool Checking_Account::withdraw( double amount ){
  amount += per_check_fee;
  return Account::withdraw( amount );
}

bool Checking_Account::deposit( double amount ){
  return Account::deposit( amount );
}

void Checking_Account::print( std::ostream &os ) const {
  os.precision(2);
  os << std::fixed;
  os << "[Checking_Account :" << name << " : " << balance << "]";
}

// std::ostream &operator<<( std::ostream &os, const Checking_Account &account ){
//   os << "[Checking_Account: " << account.name << " : " << account.balance << "]\n";
//   return os;
// }