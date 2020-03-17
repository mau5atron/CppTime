#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class Account
{
  friend std::ostream &operator<<( std::ostream &os, const Account &account ); // allows to put accounts on the stream
private:
  // constexpr are constants that are available only to the class, they are
  // class scoped
  // we do this to avoid the global namespace
  static constexpr const char *def_name = "Unnamed Account";
  static constexpr double def_balance = 0.0;
protected:
  std::string name;
  double balance;
public:
  // Account(); // No args account instance constructor
  // Account( double balance ); // single arg account instance constructor

  Account( std::string name = def_name, double balance = def_balance );

  bool deposit( double amount ); // deposit amount
  bool withdraw( double amount ); // withdraw amount
  double get_balance() const;
};

#endif