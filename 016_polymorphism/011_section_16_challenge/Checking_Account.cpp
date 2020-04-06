#include "headers/Checking_Account.h"

Checking_Account::Checking_Account( std::string name_val, double balance_val ) 
  : Account { name_val, balance_val }{

}

bool Checking_Account::withdraw
