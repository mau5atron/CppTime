#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
  // we have the print function being passed down
  // friend std::ostream &operator<<( std::ostream &os, const Trust_Account &account );
private:
  static constexpr const char *def_name = "Unnamed Trust Account";
  static constexpr double def_balance = 0.0;
  static constexpr double def_int_rate = 0.0;
  static constexpr double bonus_amount = 50.0;
  static constexpr double bonus_threshold = 5000.0;
  static constexpr int max_withdrawals = 3;
  static constexpr double max_withdraw_percentage = 0.2;
protected:
  int num_withdrawals;
public:
  Trust_Account( std::string name_val = def_name, double balance_val = def_balance, double int_rate_val = def_int_rate );
  virtual bool withdraw( double amount ) override;
  virtual bool deposit( double amount ) override;
  virtual void print( std::ostream &os ) const override;
  virtual ~Trust_Account() = default;
};

#endif