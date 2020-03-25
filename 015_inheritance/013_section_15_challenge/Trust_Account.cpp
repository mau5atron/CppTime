#include "headers/Trust_Account.h"
#include <iostream>

Trust_Account::Trust_Account( std::string name_val, double balance_val, double int_rate_val )
  : Savings_Account { name_val, balance_val, int_rate_val }, withdraw_count { 0 }{
  std::cout << "Trust Account - name: " << name_val << ", balance: " << balance_val << std::endl;
}

// Trust_Account::Trust_Account() 
//   : Trust_Account { "Unknown trust account", 0.0, 5.0 }{
//   std::cout << "Trust account no args constructor" << std::endl;
// }

Trust_Account::~Trust_Account(){
  std::cout << "\nTrust_Account destructor" << "\n" << std::endl;
}

bool Trust_Account::withdraw( double amount ){
  if( ( get_balance() - amount ) >= 0 ){
    if( ( ( amount / get_balance() ) * 100 ) < withdraw_perc_limit ){
      if( withdraw_count < withdraw_limit ){
        ++withdraw_count;
        return Account::withdraw( amount );
      } else {
        std::cout << "You cannot exceed the withdraw limit of 3 transactions for the calendard year." << std::endl;
        return false;
      }
    } else {
      std::cout << "Withdraw amount exceeds 20% of your balance." << std::endl;
      return false;
    }
  } else {
    std::cout << "You cannot withdraw more than present amount." << std::endl;
    return false;
  }
}

bool Trust_Account::deposit( double amount ){
  if( amount > 0 ){
    double clean_amount { amount };
    amount += amount * ( int_rate / 100 );
    if( clean_amount > bonus_threshold ){
      amount += bonus;
    }
    return Account::deposit( amount );
  } else {
    std::cout << "Amount should be greater than $0" << std::endl;
    return false;
  }
}

std::ostream &operator<<( std::ostream &os, const Trust_Account &account ){
  os << "[Trust_Account: " << account.name << ", balance: " << account.balance << "]";
  return os;
}