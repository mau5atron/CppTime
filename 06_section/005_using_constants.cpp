// what we doing bois 
/*
  Carpet cleaning service 
  charges $30 per roomn 
  sales tax rate is 6%
  estimates are valid for 30 days 

  Prompt the user for the number of rooms they would like cleaned
  and provide an estimate such as: 

  Estimate for carpet cleaning serivice: 
  Number of rooms: 2 
  Price per room: $30 
  Cost: $60 
  Tax: $3.60
  ================================================
  Total estimate: $63.60
  This estimate is valid for $30

  Pseudocode: 
    Prompt the user to enter the number of rooms 
    Display the number of rooms
    Display price per room 

    Display cost: ( number of rooms * price per room )
    Display tax: number of rooms * price per room * tax rate 
    Display total estimate: 
      ( number of rooms * price per room ) + ( number of rooms * price per room * tax rate )
    Display estimate expiration date
*/ 

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
  int number_of_rooms {0};
  double price_per_room {33.5};
  double tax_rate {0.06};
  int estimate_expiry {30};

  cout << "What's up u fucking pussy, let me clean ur carpets" << endl;
  cout << "How many rooms would you like to get cleaned?" << endl << "Rooms: ";
  cin >> number_of_rooms;
  
  cout << fixed; // need this to set the precision of the floating point
  cout << "\nEstimate for carpet cleaning serice:" << endl;
  cout << "Number of rooms: " << number_of_rooms << endl;
  cout << "Price per room: $" << setprecision(2) << price_per_room << endl;
  cout << "Cost: " << setprecision(2) << (number_of_rooms * price_per_room) << endl;
  cout << "Total tax: " << setprecision(2) << (number_of_rooms * price_per_room * tax_rate) << endl;
  // printf("Total tax: %.2f\n", (number_of_rooms * price_per_room * tax_rate));
  cout << "Total Estimate: " << (number_of_rooms * price_per_room) + (number_of_rooms * price_per_room * tax_rate) << endl;
  printf("This estimate is valid for %s days.\n", to_string(estimate_expiry).c_str());
  // cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

  return 0;
}