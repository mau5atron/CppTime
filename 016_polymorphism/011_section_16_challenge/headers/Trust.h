#ifndef _TRUST_H_
#define _TRUST_H_
#include "Account.h"

class Trust : public Account
{
public:
  virtual void withdraw( double amount ) override;
  virtual void deposit( double amount ) override;
  virtual ~Trust();
};

#endif