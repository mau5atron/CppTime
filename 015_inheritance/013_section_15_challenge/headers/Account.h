#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account
{
private:
  std::string name;
  double balance;
public:
  Account(); // no args constructor
  Account( std::string name_val, double balance_val );
  ~Account();

  bool deposit( double amount );
  bool withdraw( double amount );

  double get_balance();
  std::string get_name();
};

#endif