#include <iostream>

int main(void)
{
  return 0;
}

/*
  Section 16 Challenge - Polymorphism

  - You are provided with a completed Account class hierarchy that was completed
    in Section 1
  - The provided class hierarchy does not use dynamic polymorphism ( it has no
    virtual functions ! ) - it is being bound statically
  - Your challenge is the following

    1. modify the Account class so that it is now an abstract class by adding the
      following pure virtual functions:
        
        virtual bool deposit( double amount ) = 0;
        virtual bool withdraw( double amount ) = 0;

        Hint: you can implement these functions in the Account class if it makes
        sense

    2. Create an I_Printable class interface as we did in the course and provide
      functionality so all accounts are printable to an ostream using the
      overloaded insertion operator

      class I_Printable
      {
        friend std::ostream<<( std::ostream &os, const I_Printable &obj );
      public:
        virtual void print( std::ostream &os ) const = 0;
      virtual ~I_Printable() = default; // default tells the compiler to do a
      simple destructor for the obj
      };

    3. Modify the functions in the Account_Util files we only have one version of
      each. For example:

        void display( const std::vector<Account *> &accounts );
        void deposit( std::vector<Account *> &accounts, double amount );
        void withdraw( std::vector<Account *> &accounts, double amount );

      - Note: the vector is a vector of pointers to Account objects <Account *>
        this is what we need for dynamic polymorphism

    - Test your code with base class pointers as well as local objects. 

    - Hints:
      - Reuse exsisting functionality
      - If your class has a virtual functioin then be sure to implement a
        virtual destructor.
        - You can have a the C++ generate a default destructor for you with:
          virtual ~Class_Name() = default;
        
      - Take it one step at a time
      - Start by making the Account class abstract by adding the pure virtual functions.


*/