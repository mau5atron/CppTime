#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

// Savings_Account is derived from Account
class Savings_Account : public Account
{
// private:
  friend std::ostream &operator<<( std::ostream &os, const Savings_Account &account );
protected:
  double int_rate; // moving this here to make accessible in Trust account
  // allocating collection of characters to pointer
  static constexpr const char *def_name = "Unnamed Checking Account";
  static constexpr double def_balance = 0.0;
  static constexpr double def_int_rate = 5.0;
public:
  // no need for multiple constructor delegation when using constexpr for defaults
  // Savings_Account(); // no args constructor
  Savings_Account( std::string name_val = def_name, double balance_val = def_balance, double int_rate_val = def_int_rate );
  ~Savings_Account(); // destructor

  bool deposit( double amount );
};

#endif