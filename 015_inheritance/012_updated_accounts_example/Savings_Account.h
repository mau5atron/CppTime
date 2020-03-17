#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

/*
 * Savings Account class
 * Deposit method increments amount to be deposited by amount * int_rate percentage!!
 * So a 1000 deposit and 5% interest rate will deposit 1000 + 50 = 1050
 * 
 * Deposit:
 *  - Amount supplied to deposit will be incremented by ( ( amount * int_rate) / 100 )
 *  - then the updated amount will be deposited
 * 
 * Withdraw - same as regular account
 */

class Savings_Account : public Account
{
  friend std::ostream &operator<<( std::ostream &os, const Savings_Account &account);
private:
  // need to be on c++11 to use constexpr
  static constexpr const char *def_name = "Unnamed Savings Acount";
  static constexpr double def_balance = 0.0;
  static constexpr double def_int_rate = 0.0;
protected:
  double int_rate;
public:
  // Savings_Account(); // Savings account no args constructor
  // Savings_Account( double balance, double int_rate );

  Savings_Account( std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate );
  // no need to overwrite withdraw bc inheriting from Account
  bool deposit( double amount );
  // withdraw is inherited
};

#endif