#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "I_Printable.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"
#include <iostream>
#include <string>

class Account : public I_Printable
// class Account
{
  // dont need because we have the print function
  // friend std::ostream &operator<<( std::ostream &os, const Account &account );
private:
  static constexpr const char *def_name = "Unnamed Account";
  static constexpr double def_balance = 0.0;
protected:
  std::string name;
  double balance;
public:
  // pure virtual functions
  Account();
  Account( std::string name_val, double balance_val );
  // had to change withdraw and deposit from pure virtual in order to compile
  virtual bool withdraw( double amount );
  virtual bool deposit( double amount );
  virtual void print( std::ostream &os ) const override;
  virtual ~Account() = default;
};

#endif