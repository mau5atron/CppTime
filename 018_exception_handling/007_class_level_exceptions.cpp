/*
  Exception Handling - Class-Level exceptions

  Exceptions can also be thrown from within a class:
  - Method
    - these work the same way as they do for functions as we've seen
  
  - Constructor
    - Constructors may fail
    - Constructors do not return any value
    - Throw an exception in the constructor if you cannot initialize an object

  - Destructor
    - Do NOT throw exceptions from your destructor
*/

/*
  Throwing an exception from a constructor

    {

      Account::Account( std::string strname, double bal ){
        name = strname;
        balance = bal;

        if ( balance < 0.0 ){
          throw IllegalBalanceException();
        }
      }

    }
*/

/*
  Class-level Exceptions

    {
      try {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", -10.0);
        // use moes_account
      } catch ( const IllegalBalanceException &ex ){
        std::cerr << "Could not create account\n";
      }
    }
*/

