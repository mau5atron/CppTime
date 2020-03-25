#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <string>
#include <iostream>

class Checking_Account : public Account
{
  // should add this to output the object
  // overloaded insertion operator
  friend std::ostream &operator<<( std::ostream &os, const Checking_Account &account ); 
private:
  static constexpr double fee { 1.50 };
  // could also be
  // static constexpr double per_check_fee = 1.5;
  static constexpr double def_balance = 0.0;
  static constexpr const char *def_name = "Unnamed Checking Account";
public:
  // deposits of $5000.00 or more will receive a $50.00 bonus deposited to the
  // account
  // The Trust account withdrawal should only allow 3 withdrawals per yearand
  // each of these must be less than 20% of the account balance
  // You don't have ot keep track of calendar time for this application, just
  // make sure the 4th deposit fails


  // write the constructors, destructor, and overridden deposit function
  // Checking_Account(); // args constructor dont need this
  Checking_Account( std::string name_val = def_name, double balance_val = def_balance );
  ~Checking_Account();

  bool withdraw( double amount );
  // inherits deposit from Account
  // double get_fee(){
  //   return fee;
  // }
};

#endif