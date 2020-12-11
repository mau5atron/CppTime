#include "headers/Checking_Account.h"

Checking_Account::Checking_Account(){
  name = def_name;
  balance = def_balance;
}

Checking_Account::Checking_Account( std::string name_val, double balance_val ){
  try {
    Account(name_val, balance_val);
    std::cout << "name: " << name_val << ", balance: " << balance_val << "\n";
  } catch ( const IllegalBalanceException &ex ){
    std::cout << ex.what() << "\n";
  }
}

bool Checking_Account::withdraw( double amount ){
  bool money_withdrawn = false;
  try {
    amount += per_check_fee;
    money_withdrawn = Account::withdraw( amount );
  } catch ( const InsufficientFundsException &ex ){
    std::cout << ex.what() << "\n";
  }
  
  return money_withdrawn;
}

bool Checking_Account::deposit( double amount ){
  return Account::deposit( amount );
}

void Checking_Account::print( std::ostream &os ) const {
  os.precision(2);
  os << std::fixed;
  os << "[Checking_Account :" << name << " : " << balance << "]";
}

// std::ostream &operator<<( std::ostream &os, const Checking_Account &account ){
//   os << "[Checking_Account: " << account.name << " : " << account.balance << "]\n";
//   return os;
// }