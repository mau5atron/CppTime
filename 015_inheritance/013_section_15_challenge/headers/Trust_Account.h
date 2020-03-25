#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"
// static unsigned int withdraw_count = 0; // times withdrawn
// moving this to protected
// this needs to be instantiated for every object rather than the whole class itself

class Trust_Account : public Savings_Account
{
  friend std::ostream &operator<<( std::ostream &os, const Trust_Account &account );
private:
  // double int_rate; // inheriting from savings
  static constexpr double withdraw_perc_limit = 20.0;
  static constexpr unsigned int withdraw_limit = 3; // withdraws cannot go over this
  static constexpr double def_balance = 0.0;
  static constexpr const char *def_name = "Unnamed Checking Account";
  static constexpr double def_rate = 5.0;
  static constexpr double bonus_threshold = 5000.0;
  static constexpr double bonus = 50.0;
protected:
  unsigned int withdraw_count;
public:
  // Trust_Account();
  Trust_Account( std::string name_val = def_name, double balance_val = def_balance, double int_rate_val = def_rate );
  ~Trust_Account();

  bool deposit( double amount );
  bool withdraw( double amount );

  void increase_withdraw_count();
};

#endif