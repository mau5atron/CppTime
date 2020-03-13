#include <iostream>

int main(void)
{
  return 0;
}

/*
  Deriving Classes from existing classes:

    - C++ derivation syntax

    class Base {
      // base class members
    };

    class Derived: access-specific Base {
      // derived class members
    };

    Access-specific can be: public, private, or protected


  Types of Inheritance in C++:

    - public 
      - most common
      - Establishes 'is-a' relationship between derived and base classes
    
    - private and protected
      - Establishes 'derived class has a base class' relationship
      - 'Is implemented in terms of' relationship
      - Different from composition

    - Examples:

      class Account {
        // Account class members
      };

      class Savings_Account: public Account {
        // Savings_Account class members
      };

      Savings_Account 'is-a' Account

      Account account {};
      Account *p_account = new Account();

      account.deposit(1000.0);
      p_account->withdraw(200.0);
      // or (*p_account).withdraw(200.0);

      delete p_account;



      /////////////

      Savings_Account sav_account {};
      Savings_Account *p_sav_account = new Savings_Account();

      sav_account.deposit(1000.0);
      p_sav_account->withdraw(200.0);

      delete p_sav_account;

*/