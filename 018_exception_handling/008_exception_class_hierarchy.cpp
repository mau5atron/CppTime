/*
  Exceptions Handling - The C++ std::exception Class Hierarchy

  The C++ standard library exception class hierarchy
  
    - C++ provides a class hierarchy of exception classes
      - std::exception is the base class
      - all subclasses implement the what() virtual function
      - we can create our own user-defined exception subclasses

      {
        virtual const char *what() const noexcept  ;
      }
*/

/*
  Deriving our class from std::exception

    {
      class IllegalBalanceException: public std::exception {
        public:

          IllegalBalanceException() noexcept = default;
          ~IllegalBalanceException() = default;
          virtual const char *what() const noexcept {
            return "Illegal balance exception"
          }
      }
    }
  
  Modified Account class constructor
    {

      Account::Account(std::string name_val, double balance_val){
        name = name_val;
        balance = balance_val;

        if ( balance < 0.0 ){
          throw IllegalBalanceException();
        }
      }

    }

  Creating an Account object

    {
      
      try {
        std::unique_ptr<Account> moes_account = std::make_unique<CheckingAccount>("Moe", -100.0);
        std::cout << "use moes_account\n";
      } catch ( const IllegalBalanceException &ex ){
        std::cerr << ex.what() << "\n";
        // displays "Illegal balance excetion"
      }

    }
*/