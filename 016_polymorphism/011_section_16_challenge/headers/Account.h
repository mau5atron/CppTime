#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
public:
  // pure virtual functions
  virtual void withdraw( double amount ) = 0;
  virtual void deposit( double amount ) = 0;

  virtual ~Account();
};

#endif