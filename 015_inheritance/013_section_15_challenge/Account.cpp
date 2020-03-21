#include "headers/Account.h"
#include <iostream>
#include <string>

Account::Account() : name { "Unknown Account" }, balance { 0.0 }{
  // default constructor without args
  std::cout << "Account() constructor - values - name: " << name << " , balance: " << balance << std::endl;
}

Account::Account( std::string name_val, double balance_val ) : name { name_val }, balance { balance_val }{
  std::cout 
  << "Account( std::string name, double balance ) constructor - values - name: " 
  << name
  << " , balance: "
  << balance
  << std::endl;
}

Account::~Account(){
  std::cout << "Account destructor" << std::endl;
}

bool Account::withdraw( double amount ){
  if( ( balance - amount ) >= 0 ){
    balance -= amount;
    return true;
  } else {
    std::cout << "Could not withdraw from Account." << std::endl;
    return false;
  }
}

bool Account::deposit( double amount ){
  if( amount > 0 ){
    balance += amount;
    return true;
  } else {
    std::cout << "Amount to deposit should be greater than 0" << std::endl;
    return false;
  }
}



double Account::get_balance(){
  return balance;
}

std::string Account::get_name(){
  return name;
}