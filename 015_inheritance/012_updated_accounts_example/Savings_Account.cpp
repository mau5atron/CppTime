#include <iostream>
#include "Savings_Account.h"

// Savings_Account::Savings_Account( double balance, double int_rate ) : Account { balance }, int_rate { int_rate }{ // delegate balance to Account instance balance, and add interest rate
// }

// Savings_Account::Savings_Account() : Savings_Account { 0.0, 0.0 }{ // 0.0 for balance, 0.0 for int rate, delegating from overloaded constructor
// }

// invoking base class Account constructor and providing a name and balance
// for the savings account part we are adding an int_rate to the account
Savings_Account::Savings_Account( std::string name, double balance, double int_rate ) : Account { name, balance }, int_rate { int_rate }{
}

// void Savings_Account::deposit( double amount ){
//   amount = amount + ( amount * int_rate / 100 );
//   Account::deposit( amount );
// }

bool Savings_Account::deposit( double amount ){
  amount += amount * ( int_rate / 100 );
  return Account::deposit( amount );
}

// std::ostream &operator<<( std::ostream &os, const Savings_Account &account ){
//   os << "Savings account balance: " << account.balance << " , Interest rate: " << account.int_rate;
//   return os;
// }

std::ostream &operator<< ( std::ostream &os, const Savings_Account &account ){
  os << "[Savings Account: " << account.name << " - Balance: " << account.balance << "%]";
  return os;
}