#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>

class Account
{
  friend std::ostream &operator<<( std::ostream &os, const Account &account );
protected:
  double balance;
public:
  Account(); // No args account instance constructor
  Account( double balance ); // single arg account instance constructor
  void deposit( double amount ); // deposit amount
  void withdraw( double amount ); // withdraw amount
};

#endif