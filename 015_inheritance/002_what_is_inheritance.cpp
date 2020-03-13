#include <iostream>

int main(void)
{
  return 0;
}

/*
  Inhertiance - what is it and why is it used?

    - Provides a method for creating new classes from existing classes
    - The new class contains the data and behaviors of the existing class
    - Allow for reuse of existing classes
    - Allows us to focus on the common attributes among a set of classes
    - Allows new classes to modify behaviours of existing classes to make it
      unique
      - without actually modifying the original class


  Related classes
    - Player, Enemy, Level Boss, Hero, Super Player, etc...
    - Account, Savings Account, Checking Account, Trust Account
    - Shape, Line, Oval, Circle, Square, ect..
    - Person, Employee, Student, Faculty, Staff, Administrator, etc..

  Accounts
    - Account
      - balance, deposit, withdraw
    - Savings Account
      - balance, deposit, withdraw, interest rate...
    - Checking Account
      - balance, deposit, withdraw, minimum balance, check fee
    - Trust Account
      - balance, deposit, withdraw, interest rate...
  
  Accounts - without inheritance - code duplication

    class Account {
      // balance, deposit, withdraw
    };

    class Savings_Account {
      // balance, deposit, withdraw, interest rate
    };

    class Checking_Account {
      // balance, deposit, withdraw, minimum balance, per check fee, specialized withdraw
    };

    class Trust_Account {
      // balance, deposit, withdraw, interest rate, specialized withdraw
    };

*/