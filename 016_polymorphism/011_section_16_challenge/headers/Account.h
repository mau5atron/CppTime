#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "I_Printable.h"
#include <string>

class Account : public I_Printable
{
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
  virtual ~Account() = default;
};

#endif