#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

// Savings_Account is derived from Account
class Savings_Account : public Account
{
private:
  double int_rate;
public:
  Savings_Account(); // no args constructor
  Savings_Account( std::string name_val, double balance_val, double int_rate_val );
  ~Savings_Account(); // destructor

  bool deposit( double amount );
};

#endif