#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
private:
  static constexpr double fee { 1.50 };
public:
  // deposits of $5000.00 or more will receive a $50.00 bonus deposited to the
  // account
  // The Trust account withdrawal should only allow 3 withdrawals per yearand
  // each of these must be less than 20% of the account balance
  // You don't have ot keep track of calendar time for this application, just
  // make sure the 4th deposit fails


  // write the constructors, destructor, and overridden deposit function
  Checking_Account(); // args constructor
  Checking_Account( std::string name_val, double balance_val );
  ~Checking_Account();

  bool withdraw( double amount );

  // double get_fee(){
  //   return fee;
  // }
};

#endif