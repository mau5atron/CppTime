#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "I_Printable.h"

class Account : public I_Printable
{
public:
  // pure virtual functions
  virtual void withdraw( double amount ) = 0;
  virtual void deposit( double amount ) = 0;

  virtual ~Account();
};

#endif