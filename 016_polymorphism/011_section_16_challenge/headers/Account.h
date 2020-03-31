#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
public:
  virtual void withdraw( double amount );
  virtual void deposit( double amount );

  virtual ~Account();
};

#endif