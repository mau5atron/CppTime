#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>

class Account
{
// private: // does not work
//   std::string name;
//   double balance;
// even though a derived class may have the friend class method defined
// needs to be protected in order for data to be accessible
  friend std::ostream &operator<<( std::ostream &os, const Account &account );
protected:
  std::string name;
  double balance;
  static constexpr const char *def_name = "Unknown\'s Account";
  static constexpr double def_balance = 0.0;
public:
  // Account(); // no args constructor
  Account( std::string name_val = def_name, double balance_val = def_balance );
  ~Account();

  bool deposit( double amount );
  bool withdraw( double amount );
  std::string display_header( std::string input );
  void display( const std::vector<Account> &accounts );
  double get_balance();
  std::string get_name();
};

#endif