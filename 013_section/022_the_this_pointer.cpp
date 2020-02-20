#include <iostream>

int main(void)
{
  return 0;
}

/*
  'this' pointer:
  - 'this' is a reserved keyword
  - Contains the address of the object - so it's a pointer to the object
  - Can only be used in class scope
  - All member access is done via the 'this' pointer
  - Can be used by the programmer 
    - To access data member and methods 
    - To determine if two objects are the same (more in the next section)
    - Can be dereferenced (*this) to yield the current object


  this pointer example:

    void Account::set_balance(double bal){
      balance = bal; // this->balance is implied
    }

  To disambiguate identifier use:

    void Account::set_balance(double balance){
      balance = balance; // which balance? The parameter
    }

    // intead write as
    void Account::set_balance(double balance){
      this->balance = balance; // Unambiguous 
    }

  To Determine Object Identity:
  - Sometimes its useful to know if two objects are the same objects

  int Account::compare_balance(const Account &other){
    if(this == &other){
      std::cout << "The same objects" << std::endl;
    }

    frank_account.compare(frank_account);
  - We'll use the this pointer again when we overload the assignment operator.
*/