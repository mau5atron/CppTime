#include "headers/Trust_Account.h"

Trust_Account::Trust_Account( std::string name_val, double balance_val, double int_rate_val ) 
  : Savings_Account { name_val, balance_val, int_rate_val }, num_withdrawals { 0 }{   
}

// Deposit additional $50 when amount >= $5000

bool Trust_Account::deposit( double amount ){
  if( amount >= bonus_threshold ){
    amount += bonus_amount;
  }

  return Savings_Account::deposit( amount );
}

// only 3 allowed withdrawals, each can be up to a maximum of 20% of the
// accounts value
bool Trust_Account::withdraw( double amount ){
  if( num_withdrawals >= max_withdrawals || ( amount > balance * max_withdraw_percentage) ){
    return false;
  } else {
    ++num_withdrawals;
    return Savings_Account::withdraw( amount );
  }
}

void Trust_Account::print( std::ostream &os ) const {
  os.precision(2);
  os << std::fixed;
  os << "[Trust_Account: " << name << " : " << balance << ", " << int_rate << "%, withdrawals: " << num_withdrawals << "]";
}

// std::ostream &operator<<( std::ostream &os, const Trust_Account &account ){
//   os 
//   << "[Trust_Account: " 
//   << account.name 
//   << " : " 
//   << account.balance 
//   << ", int rate: " 
//   << account.int_rate 
//   << " - % withdrawals" << account.num_withdrawals 
//   << "]";
//   return os;
// }