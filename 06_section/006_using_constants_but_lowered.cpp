/*
  Franks Fucking Carpet cleaning service 
  Charges: 
    $25
    $35
  Sales tax rate is 6%
  Estimates are valid for 30 days 

  - Prompt the user for the number of small and large rooms they would like
    cleaned and provide an estimate such as: 

    Estimate for carpet cleaning service 

    Number of small rooms: 3
    Number of large rooms: 1
    Price per small room $25
    Price per large room $35
    Cost: $110 
    Tax: $6.60
    =============================
    Total estimate $116.60
    This estimate is valid for 30 days


*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int num_small_rooms {0};
  int num_large_rooms {0};
  double price_small_room {25};
  double price_large_room {35};
  double tax_rate {0.06};
  int estimate_expiry {30};

  cout << "Hey whats up u fucking pussy let me clean ur carpets" << endl;
  cout << "How many smalls rooms do you have?" << endl << "\n> ";
  cin >> num_small_rooms;
  cout << "How many large rooms do you have?" << endl << "\n> ";
  cin >> num_large_rooms;
  cout << "Here is your estimate:" << endl;
  
  cout << fixed; // use this to set the precision of the floating point 
  cout << "\nNumber of small rooms: " << 
    to_string(num_small_rooms) << endl << 
    "Number of large rooms: " << 
    to_string(num_large_rooms) << endl;  

  cout << "Price per small room: $" << 
    setprecision(2) << price_small_room << endl << 
    "Price per large room: $" << price_large_room << endl;

  cout << "Cost: $" << (price_small_room * num_small_rooms) + (price_large_room * num_large_rooms) << endl;
  cout << "Tax: " << (
      (price_small_room * num_small_rooms * tax_rate) + 
      (price_large_room * num_large_rooms * tax_rate)
    ) << endl;

  cout << "Total estimate: $" << (
      (price_small_room * num_small_rooms * tax_rate) + 
      (price_large_room * num_large_rooms * tax_rate) + 
      (price_small_room * num_small_rooms) + 
      (price_large_room * num_large_rooms)
    ) << endl;
  cout << "Estimates are valid for " << estimate_expiry << " days" << endl;

  return 0;
}