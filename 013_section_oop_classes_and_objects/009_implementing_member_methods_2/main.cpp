#include <iostream>
#include "Account.h"

using std::cout;
using std::endl;

int main(void)
{
  Account frank_account;
  frank_account.set_name("Frank\'s account");
  frank_account.set_balance(120.00);

  if( frank_account.deposit(200.00) ){
    cout << "Deposit OK" << endl;
  } else {
    cout << "Deposit FAILED" << endl;
  }

  if( frank_account.withdraw(500.00) ){
    cout << "Withdrawal OK" << endl;
  } else {
    cout << "Insufficient funds..." << endl;
  }

  if( frank_account.withdraw(1500.00) ){
    cout << "Withdrawal OK" << endl;
  } else {
    cout << "Insufficient funds...." << endl;
  }
  return 0;
}

// compiled all files into one binary with 
// g++ -Wall -std=c++11 main.cpp Account.cpp -o main