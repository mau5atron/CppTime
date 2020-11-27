#include "headers/Savings_Account.h"

Savings_Account::Savings_Account( std::string name_val, double balance_val, double int_rate_val ) 
  : Account { name_val, balance_val }, int_rate { int_rate_val } {
}

// Deposit, amount supplied will be incremented by ( amount * int_rate / 100 )
// and then the updated amount will be deposited

bool Savings_Account::deposit( double amount ){
  amount += amount * ( int_rate / 100 );
  return Account::deposit( amount );
}

bool Savings_Account::withdraw( double amount ){
  return Account::withdraw( amount );
}

void Savings_Account::print( std::ostream &os ) const {
  os.precision(2);
  os << std::fixed;
  os << "[Savings_Account: " << name << " : " << balance << "]";
}

// std::ostream &operator<<( std::ostream &os, const Savings_Account &account ){
//   os << "[Savings_Account: " << account.name << " : " << account.balance << "]";
//   return os;
// }