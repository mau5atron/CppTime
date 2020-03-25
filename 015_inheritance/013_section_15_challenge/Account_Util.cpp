#include "headers/Account_Util.h"

std::string display_header( std::string input ){
  return "\n --- " + input + " ---";
}

// Account
void display( const std::vector<Account> &accounts ){
  std::cout << display_header( "Account" ) << std::endl;
  for( const Account &accts : accounts ){
    std::cout << accts << std::endl;
  }
}

// Savings_Account
void display( const std::vector<Savings_Account> &accounts ){
  std::cout << display_header( "Savings_Account" ) << std::endl;
  for( const Savings_Account &accts : accounts ){
    std::cout << accts << std::endl;
  }
}

// Checking_Account
void display( const std::vector<Checking_Account> &accounts ){
  std::cout << display_header( "Checking_Account" ) << std::endl;
  for( const Checking_Account &accts : accounts ){
    std::cout << accts << std::endl;
  }
}

// Trust_Account

void display( const std::vector<Trust_Account> &accounts ){
  std::cout << display_header( "Trust_Account" ) << std::endl;
  for( const Trust_Account &accts : accounts ){
    std::cout << accts << std::endl;
  }
}
