#include <iostream>

int main(void)
{
  return 0;
}

/*
  The Default Constructor:
  - Does not expect any arguments 
    - Also called the no-args constructor
  - If you write no constructors at all for a class
    - C++ will generate a Default Constructor that does nothing
  - Called when you instantiate a new object with no arguments

  Player frank;
  Player *enemy = new Player();

  Declaring a Class

  Account - using default constructor
  class Account {
  private:
    std::string name;
    double balance;
  public: 
    bool withdraw(double amount);
    bool deposit(double amount);
  };


  Using the default constructor:
  Account frank_account;
  Account jim_account;

  Account *mary_account = new Account();
  delete mary_account;

  Account - user-defined no-args constructor

  class Account {
  private:
    std::string name;
    double balance;
  public: 
    Account(){
      name = "None";
      balance = 0.0;
    }

    bool withdraw(double amount);
    bool deposit(double amount);
  };

  Account - no default constructor

  class Account {
  private:
    std::string name;
    double balance;
  public:
    Account(std::string name_val, double bal){
      name = name_val;
      balance = bal;
    }
    // with this version, you will need to provide args to the Account object creation

    bool withdraw(double bal);
    bool deposit(double bal);
  };

  // Example of what happens when trying to create a new object without passing
  in args to the constructor 

  Account frank_account; // Error
  Account jim_account; // Error
  Account *mary_ccount = new Account; // Error
  delete mary_account;

  Account bill_account { "Bill", 1500.0 }; // OK

*/ 