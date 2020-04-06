#ifndef _CHECKING_H_
#define _CHECKING_H_
#include "Account.h"

class Checking : public Account
{
  friend std::ostream &operator<<( std::ostream &os, const Checking &account )
public:
  virtual void withdraw( double amount ) override;
  virtual void deposit( double amount ) override;
  virtual ~Checking();
};

#endif