#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account : public Account
{
public:
  virtual void withdraw( double amount ) override;
  virtual void deposit( double amount ) override;
  virtual ~Savings();
};

#endif