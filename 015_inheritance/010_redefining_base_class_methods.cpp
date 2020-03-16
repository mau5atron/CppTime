#include <iostream>

int main(void)
{
  return 0;
}

/*
  Redefining Base class methods
  - Using and redefining Base class methods
    - Derived class can directly invoke Base class methods
    - Derived class can override or redefine Base class methods
    - Very powerful in the context of polymorphism ( next section )
  

  Example:

    class Account
    {
    public:
      void deposit( double amount ){
        balance += amount;
      }
    };

    class Savings_Account : public Account
    {
    public:
      void deposit( double amount ){ // redefining the Base class method
        amount += some_interest;
        Account::deposit(amount); // invoke call Base class method
      }
    };


  Static binding of method calls
    - Binding of which method to use is done at compile time
      - Default binding for c++ is static
      - Derived class objects will use Derived::deposit
      - But, we can explicitly invoke Base::deposit from Derived::deposit
      - OK, but limited - much more powerful approach is dynamic binding which
        we will see in the next section
    
    Base b;
    b.deposit( 1000.0 ); // Base::deposit

    Derived d;
    d.deposit; // Derived::deposit

    Base *ptr = new Derived();
    ptr->deposit( 1000.0 ); // Base::deposit ????


*/