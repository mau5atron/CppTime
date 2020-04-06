#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <iostream>
#include <string>

class Checking_Account : public Account
{
  friend std::ostream &operator<<( std::ostream &os, const Checking_Account &account )
private:
  static constexpr const char *def_name = "Unnamed Checking Account";
  static constexpr double def_balance = 0.0;
  static constexpr double per_check_fee = 1.5;
public:
  Checking_Account( std::string name_val = def_name, double balance_val = def_balance);
  virtual void withdraw( double amount ) override;
  virtual void deposit( double amount ) override;
  virtual ~Checking_Account() = default;
};

#endif