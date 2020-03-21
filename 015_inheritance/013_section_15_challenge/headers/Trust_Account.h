#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Account.h"
static unsigned int withdraw_count = 0; // times withdrawn

class Trust_Account : public Account
{
private:
  static constexpr double withdraw_perc_limit = 20.0;
  static constexpr unsigned int withdraw_limit = 3; // withdraws cannot go over this
  double int_rate;
public:
  Trust_Account();
  Trust_Account( std::string name_val, double balance_val, double int_rate_val );
  ~Trust_Account();

  bool deposit( double amount );
  bool withdraw( double amount );

  void increase_withdraw_count();
};

#endif