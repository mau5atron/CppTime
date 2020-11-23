#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "Account.h"

// Utility helper functions for Account * class
// takes in vector of Account * pointers
void display( const std::vector<Account *> &accounts );
// helper function to deposit to every account passed in
void deposit( std::vector<Account *> &accounts, double amount );
// helper function to withdraw from every account passed in
void withdraw( std::vector<Account *> &accounts, double amount );

#endif