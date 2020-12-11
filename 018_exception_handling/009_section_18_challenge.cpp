/*
  Exception Handling - Section 18 Challenge

    - For this challenge we want to integrate our own user-defined exception
      classes into the Account class hierarchy
    - The account classes are provided for you
    - also, the IllegalBalanceException.h file contains the declaration for the
      IllegalBalanceException class
    
    - What I would like you to do is:
      1. Derive IllegalBalanceException from std::exception and implement the
         what() method to provide an exception message. This exception object
         should be thrown from the Account class constructor in an account
         object where the object is created with a negative balance.

      2. Derive InsufficientFundsException from std::exception and implement the
         what() method to provide an exception message. This exception object
         should be thrown if a withdraw results in a negative balance. Your
         should throw this exception from the Account withdraw method.
*/

/*
  Note:
    - I should create the classes in their own files that extend std::exception
    - also need to define the the "what()" message should output for the error messages.
*/

#include "009_section_18_challenge/headers/Account.h"
#include "009_section_18_challenge/headers/Checking_Account.h"

int main( int argc, char **argv ){
  Checking_Account other_account { "Amanda", 10000 };
  Checking_Account my_account { "Gabriel", -1000 }; // fails with IllegalBalanceException
  other_account.withdraw(2000); // fails with InsufficientFundsException

  return 0;
}