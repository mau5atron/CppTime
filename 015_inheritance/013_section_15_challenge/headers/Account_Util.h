#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"

std::string display_header( std::string input );

// Account class utility functions
void display( const std::vector<Account> &accounts );
// void deposit( std::vector<Account> &accounts, double amount );
// void withdraw( std::vector<Account> &accounts, double amount );

// Savings_Account class
void display( const std::vector<Savings_Account> &accounts );
// void deposit( std::vector<Savings_Account> &accounts );
// void withdraw( std::vector<Savings_Account> &accounts, double amount );

// Checking_Account
void display( const std::vector<Checking_Account> &accounts );
// void deposit( std::vector<Checking_Account> &accounts, double amount );
// void withdraw( std::vector<Checking_Account> &accounts, double amount );

// Trust_Account
void display( const std::vector<Trust_Account> &accounts );
// void deposit( std::vector<Trust_Account> &accounts, double amount );
// void withdraw( std::vector<Trust_Account> &accounts, double amount );

#endif