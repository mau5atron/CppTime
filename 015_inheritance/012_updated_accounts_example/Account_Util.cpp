#include "Account_Util.h"
#include <iostream>

// looping range based for loop of vectors while inserting objects into the
// output stream

// displays the account objects in a vector of Account objects
void display( const std::vector<Account> &accounts ){
  std::cout << "\n --- Accounts --- " << std::endl;
  for( const Account &accts : accounts ){
    std::cout << accts << std::endl;
  }
}

// Deposits supplied amount to each Account object in the vector
void deposit( std::vector<Account> &accounts, double amount ){
  std::cout << "\n -- Depositing to Accounts --- " << std::endl;
  for( Account &accts : accounts ){
    if( accts.deposit( amount ) ){
      std::cout << "Deposited " << amount << " to " << accts << std::endl;
    } else {
      std::cout << "Failed Deposit of " << amount << " to " << accts << std::endl;
    }
  }
}

// Withdraw amount from each Account object in the vector
void withdraw( std::vector<Account> &accounts, double amount ){
  std::cout << "\n --- Withdrawing from Accounts --- " << std::endl;
  for( Account &accts : accounts ){
    if( accts.withdraw( amount ) ){
      std::cout << "Withdrew " << amount << " from " << accts << std::endl;
    } else {
      std::cout << "Failed withdrawal of " << amount << " from " << accts << std::endl;
    }
  }
}

// Helper functions for Savings Account class

// Display Savings Account objects in a vector of Savings Account objects
void display( const std::vector<Savings_Account> &accounts ){
  std::cout << "\n --- Savings Accounts --- " << std::endl;
  for( const Savings_Account &accts : accounts ){
    std::cout << accts << std::endl;
  }
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit( std::vector<Savings_Account> &accounts, double amount){
  std::cout << "\n -- Depositing to Savings Accounts --- " << std::endl;
  for( Savings_Account &accts : accounts ){
    if( accts.deposit( amount ) ){
      std::cout << "Deposited " << amount << " to " << accts << std::endl;
    } else {
      std::cout << "Failed Deposit of " << amount << " to " << accts << std::endl;
    }
  }
}

void withdraw( std::vector<Savings_Account> &accounts, double amount ){
  std::cout << "\n --- Withdrawing from Savings Accounts --- " << std::endl;
  for( Savings_Account &accts : accounts ){
    if( accts.withdraw( amount ) ){
      std::cout << "Withdrew " << amount << " from " << accts << std::endl;
    } else {
      std::cout << "Failed Withdrawal of " << amount << " from " << accts << std::endl;
    }
  }
}