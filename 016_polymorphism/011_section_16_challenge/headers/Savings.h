#ifndef _SAVINGS_H_
#define _SAVINGS_H_
#include "Account.h"

class Savings : public Account
{
public:
  virtual void withdraw( double amount ) override;
  virtual void deposit( double amount ) override;
  virtual ~Savings();
};

#endif