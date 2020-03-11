#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

class Account {
private:
  string name;
  double balance;
public:
  void set_balance(double bal){
    balance = bal;
  }

  double get_balance(){
    return balance;
  }

  // methods will be declared outside the class declaration
  void set_name(string n);
  string get_name();

  bool deposit(double amount);
  bool withdraw(double amount);
};

// methods implemented outside the class

void Account::set_name(string n){
  name = n;
}

string Account::get_name(){
  return name;
}

bool Account::deposit(double amount){
  // if verify amount
  balance += amount;
  return true;
}

bool Account::withdraw(double amount){
  if( balance - amount >= 0 ){
    balance -= amount;
    return true;
  } else {
    return false;
  }
}

int main(void)
{

  Account frank_account;
  frank_account.set_name("Frank\'s account");
  frank_account.set_balance(120.00);

  if( frank_account.deposit(200.00) ){
    cout << "Deposit OK" << endl;
  } else {
    cout << "Deposit FAILED" << endl;
  }

  if( frank_account.withdraw(500.00) ){
    cout << "Withdrawal OK" << endl;
  } else {
    cout << "Insufficient funds..." << endl;
  }

  if( frank_account.withdraw(1500.00) ){
    cout << "Withdrawal OK" << endl;
  } else {
    cout << "Insufficient funds...." << endl;
  }
  return 0;
}