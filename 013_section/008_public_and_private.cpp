#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;


class Player {
private:
  string name { "Player" };
  int health;
  int xp;

public:
  void talk(string text_to_say){
    cout << name << " says " << text_to_say << endl;
  }

  bool is_dead();
};

int main(void)
{
  Player frank;
  // frank.name = "Frank"; // compiler err
  // cout << frank.health << endl;
  frank.talk("Hiya!");

  return 0;
}

/*
  Class Member Access Modifiers:
  - public
    - accessible everywhere
  - private
    - accessible only by members or friends of the class
  - protected
    - used with inheritance - we'll talk about it in the next section


  public

  class Class_Name {
  public:

    // declarations

  }

  private

  class Class_Name {
  private:
    // declarations
  }

  protected // basically the same as private

  class Class_Name {
  protected:
    // declarations
  }

  Declaring a Class:

  class Player {
    private:
      std::string name;
      int health;
      int xp;
    public:
      void talk(std::string text_to_say);
      bool is_dead();
  }

  Player frank;
  frank.name = "Frank"; // Compiler err
  frank.health = 1000; // Compiler err
  frank.talk("Ready hehe"); // OK

  Player *enemy = new Player();
  enemy->xp = 100; // Compiler err
  // or (*enemy).xp = 100; 
  enemy->talk("Hehe uwu"); // OK
  // or (*enemy).talk("Hehe uwu");
  delete enemy;


  Declaring a Class Example:

  class Account {
  private:
    std::string name;
    double balance;

  public:
    bool withdraw(double amount);
    bool deposit(double amount);
  };

  Using the account class to create objects:

  Account frank_account;
  frank_account.balance = 1000000.00; // Compiler err
  frank_account.deposit(100000.00); // OK
  frank_account.name = "Frank\'s Account"; // Compiler err

  Account *mary_account = new Account();
  mary_account->balance = 10000.00; // Compiler err
  // or (*mary_account).balance = 10000.00
  mary_account->withdraw(10000.00); // OK
  // or (*mary_account).withdraw(10000.00); // OK


  Follow Player example above....
*/