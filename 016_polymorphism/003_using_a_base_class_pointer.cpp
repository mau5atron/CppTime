#include <iostream>

int main(void)
{
  return 0;
}

/*
  Polymorphism - Using a Base class pointer

    - Using a Base class pointer
      - For dynamic polymorphism we must have:
        - Inheritance
        - Base class pointer or Base class reference
        - Virtual functions


  Using a Base class pointer:

    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    (*p1).withdraw(1000); // Account::withdraw
    (*p2).withdraw(1000); // Savings::withdraw
    (*p3).withdraw(1000); // Checking::withdraw
    (*p4).withdraw(1000); // Trust::withdraw

    // delete the pointers

  Using a Base class pointer:
    - Using array
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    Account *array[] = { p1, p2, p3, p4 };

    for( size_t i { 0 } ; i < 4 ; i++ ){
      array[i]->withdraw(1000);
      // or
      // (*array[]).withdraw(1000);
    }

  Using a Base class pointer:

    - Using vectors

    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    // vector of pointers
    vector<Account *> accounts { p1, p2, p3, p4 };
    for( Account* acc_ptr : accounts ){
      acc_ptr->withdraw();
      // (*acc_ptr).withdraw();
    }

    // delete the pointers
*/