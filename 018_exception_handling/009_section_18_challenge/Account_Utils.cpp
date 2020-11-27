#include <iostream>
#include "headers/Account_Utils.h"

// displays accounts passed in
void display( const std::vector<Account *> &accounts ){
  std::cout << "\n === Accounts ===" << std::endl;
  for( const Account* acc : accounts ){
    std::cout << *acc << std::endl;
  }
}

void deposit( std::vector<Account *> &accounts, double amount ){
  std::cout << "\n === Depositing to Accounts === " << std::endl;
  for( Account* acc : accounts ){
    if ( (*acc).deposit(amount) ){
      std::cout << "Deposited: " << amount << " to " << *acc << std::endl;
    } else {
      std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
  }
}

void withdraw( std::vector<Account *> &accounts, double amount ){
  std::cout << "\n === Withdrawing from Accounts === " << std::endl;
  for( Account* acc : accounts ){
    if( (*acc).withdraw(amount) ){
      std::cout << "Withdraw: " << amount << " from " << *acc << std::endl;
    } else {
      std::cout << "Failed to withdraw " << amount << " from " << *acc << std::endl;
    }
  }
}