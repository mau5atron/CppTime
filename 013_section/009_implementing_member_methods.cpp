#include <iostream>

int main(void)
{
  return 0;
}

/*
  Implementing Member Methods:

  - Verify similar to how we implemented functions
  - Member methods have access to member attributes
    - so you don't need to pass them as arguments!

  - Can be implemented inside the class declaration
    - implicitly inline
  - Can be implemented outside the class declaratino 
    - Need to use Class_name::method_name
  - Can separate specification from implementation
    - .h (header file) for the class declaration 
    - .cpp(source file) for the class implementation
  
  Example:

  Inside the class declaration 

  class Account {
  private:
    double balance;
  public:
    void set_balance(double bal){
      balance = bal;
    }

    double get_balance(){
      return balance;
    }
  };

  // implementing outside the class declaration, instead of inside like above
  
  void Account::set_balance(double bal){
    balance = bal;
  }

  double Account::get_balance(){
    return balance;
  }

  Separating Specification from Implementation:
  Note: 
    - if this file is included in more than one .cpp file, then the compiler
      will see the declaration for the Account class more than once and will
      give an error about duplicate declarations.

    - In order to solve this, we can use what is called an include guard that
      will ensure the compiler will process this file only once, no matter how
      many times it is included.
    - An include guard is just a series of preprocessor directives that
      guarantee the file will only be included once.

    - Need to wrap entire class declaration in the include guard
    - Include guard examples:
      #ifndef _ACCOUNT_H_
      #define _ACCOUNT_H_
        // Account class declaration
      #endif

  Account.h

  class Account {
  private:
    double balance;
  public:
    void set_balance(double bal);
    double get_balance();
  };

  Account class wrapped with include guards

  Account.h

  #ifndef _ACCOUNT_H_
  #define _ACCOUNT_H_

  class Account {
  private:
    double balance;
  public:
    void set_balance(double bal);
    double get_balance();
  };

  #endif


  Another way of separating specification from implementation:
  // Using pragma depends on the compiler
  Account.h - #pragma once

  #pragma once

  class Account {
  private:
    double balance;
  public:
    void set_balance(double bal);
    double get_balance();
  };


  Full example:
  ____________________________________________________________________
  Account.cpp
  Note:
    - Using "" around header file signifies header file local to project
    - Using <> signifies header file from system
  #include "Account.h"

  void Account::set_balance(double bal){
    balance = bal;
  }

  double Account::get_balance(){
    return balance;
  }

  Main.cpp

  #include <iostream>
  #include "Account.h"

  int main(void)
  {
    double bal {};
    Account frank_account;
    frank_account.set_balance(1000.00);
    double bal = frank_account.get_balance();
    std::cout << bal << std::endl; // 1000

    return 0;
  }

*/