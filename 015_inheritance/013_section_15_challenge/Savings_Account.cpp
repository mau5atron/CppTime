#include "headers/Savings_Account.h"
#include "headers/Account.h"
#include <iostream>

Savings_Account::Savings_Account( std::string name_val, double balance_val, double int_rate_val ) 
  : Account { name_val, balance_val }, int_rate { int_rate_val }{
  std::cout 
  << "Savings account constructor - name: " 
  << name_val 
  << ", balance: " 
  << balance_val 
  << ", int_rate: " 
  << int_rate 
  << std::endl;
}

// Savings_Account::Savings_Account() : Savings_Account { "Unknown account", 0.0, 5.0 }{
//   std::cout << "Savings Account no args constructor" << std::endl;
// }

Savings_Account::~Savings_Account(){
  std::cout << "\nSavings_Account destructor" << "\n" << std::endl;
}

// overwriting inherited deposit to add the interest rate
bool Savings_Account::deposit( double amount ){
  if( amount > 0 ){
    amount += amount * ( int_rate / 100 );
    return Account::deposit( amount );
  } else {
    std::cout << "Deposit must be greater than 0." << std::endl;
    return false;
  }
}

std::ostream &operator<<( std::ostream &os, const Savings_Account &account ){
  os << "[Savings_Account: " << account.name << ", balance: " << account.balance << "]";
  return os;
}