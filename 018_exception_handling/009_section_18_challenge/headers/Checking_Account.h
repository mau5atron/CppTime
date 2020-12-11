#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <iostream>
#include <string>

class Checking_Account : public Account
{
  // getting rid of this bc we have the print function for checking account
  // friend std::ostream &operator<<( std::ostream &os, const Checking_Account &account );
private:
  static constexpr const char *def_name = "Unnamed Checking Account";
  static constexpr double def_balance = 0.0;
  static constexpr double per_check_fee = 1.5;
public:
  Checking_Account();
  Checking_Account( std::string name_val, double balance_val);
  bool withdraw( double amount ) override;
  bool deposit( double amount ) override;
  void print( std::ostream &os ) const override;
  ~Checking_Account() = default;
};

#endif