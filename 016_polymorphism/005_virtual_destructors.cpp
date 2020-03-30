#include <iostream>

// this class uses dynamic polymorhphism for the withdraw method
class Account
{
public:
  virtual void withdraw( double amount ){
    std::cout << "In Account::withdraw()" << std::endl;
  }

  virtual ~Account(){
    std::cout << "In Account::destructor" << std::endl;
  }
};

class Checking : public Account
{
public:
  virtual void withdraw( double amount ){
    std::cout << "In Checking::withdraw()" << std::endl;
  }

  virtual ~Checking(){
    std::cout << "In Checking::destructor" << std::endl;
  }
};

class Savings : public Account
{
public:
  virtual void withdraw( double amount ){
    std::cout << "In Savings::withdraw()" << std::endl;
  }

  virtual ~Savings(){
    std::cout << "In Savings::destructor" << std::endl;
  }
};

class Trust : public Account
{
public:
  virtual void withdraw( double amount ){
    std::cout << "In Trust::withdraw()" << std::endl;
  }

  virtual ~Trust(){
    std::cout << "In Trust::destructor" << std::endl;
  }
};


int main( void )
{
  std::cout << "\n --- Pointers --- " << std::endl;
  Account *p1 = new Account();
  Account *p2 = new Savings();
  Account *p3 = new Checking();
  Account *p4 = new Trust();

  (*p1).withdraw( 1000 ); // In Account::withdraw()
  (*p2).withdraw( 1000 ); // In Account::withdraw()
  (*p3).withdraw( 1000 ); // In Account::withdraw()
  (*p4).withdraw( 1000 ); // In Account::withdraw()

  std::cout << "\n --- Clean up --- " << std::endl;
  // these deletes will throw up warnings, whenever you have virtual functions,
  // you need virtual destructors
  // once virtual is added to the destructors, there shouldn't be any errors
  delete p1; // Account::destructor
  delete p2; // Savings::destructor -> Account::destructor
  delete p3; // Checking::destructor -> Account::destructor
  delete p4; // Trust::destructor -> Account::destructor
  return 0;
}

/*
  Polymorhphism - Virtual Destructors

    - Problems can happen when we destroy polymorphic objects
    - If a derived class is destroyed by deleting its storage via the base class
      pointer and the class is a non-virtual destructor, then the behaviour is
      undefined in the C++ standard
    - Derived objects must be destroyed in the correct order starting at the
      correct destructor.
    
  Solution/Rule:
    - If a class has virtual functions
    - ALWAYS provide a public virtual destructor
    - If base class destructor is virtual then all derived class destructors are
      also virtual
    

    class Account
    {
    public:
      virtual void withdraw( double amount );
      virtual ~Account();
    };
*/