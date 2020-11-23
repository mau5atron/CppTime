#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "I_Printable.h"
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
  Account( std::string name = def_name, double balance = def_balance );
  virtual bool withdraw( double amount ) = 0;
  virtual bool deposit( double amount ) = 0;
  virtual void print( std::ostream &os ) const override;
  virtual ~Account() = default;
};

#endif