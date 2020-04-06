#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Account.h"

class Trust_Account : public Account
{
public:
  virtual void withdraw( double amount ) override;
  virtual void deposit( double amount ) override;
  virtual ~Trust();
};

#endif