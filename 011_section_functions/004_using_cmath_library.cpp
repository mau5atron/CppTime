#include <iostream>
#include <cmath>

using namespace std;
typedef unsigned int uint;

double round_down_nearest_dollar(double indiv_bill){
  return floor(indiv_bill);
}

double round_up_nearest_dollar(double indiv_bill){
  return ceil(indiv_bill);
}

double round_up_nearest_cent(double indiv_bill){
  return (ceil(indiv_bill * 100) / 100);
}

int main(void)
{
  double bill_total {};
  uint number_of_guests {};

  cout << "Bill total: \n> ";
  cin >> bill_total;
  cout << "\nNum guests: \n> ";
  cin >> number_of_guests;

  double individual_bill { bill_total / number_of_guests };
  double individual_bill_1 { round_down_nearest_dollar(individual_bill) };
  double individual_bill_2 { round_up_nearest_dollar(individual_bill) };
  double individual_bill_3 { round_up_nearest_cent(individual_bill) };

  cout << "BILL: " << individual_bill << endl;
  cout << "BILL FLOORED: " << round_down_nearest_dollar(individual_bill) << endl;
  cout << "BILL CEILED: " << round_up_nearest_dollar(individual_bill) << endl;
  cout << "BILL CEILED NEAREST CENT: " << round_up_nearest_cent(individual_bill) << endl;
  
  return 0;
}

/*
  In this exercise you will create a program that will be used as a POS (Point
  of sale) system in a restaurant. The 'bill_total' is given as well as the
  'number_of_guests'. - done

  The 5 guests will be splitting the bill evenly and so the 'individual_bill'
  will be 'bill_total' / 'number_of_guests'. The POS will be used in three
  different locations, each with different guidelines for printing bills. - done

  At location 1, individual_bill_1 always rounds down to the nearest dollar. - floor
  At location 2, individual_bill_2 always rounds to the nearest dollar. - round
  At location 3, individual_bill_3 always rounds up to the nearest cent. - round

  Determine what the 'individual_bill' will be at each of the locations.

  Begin by declaring and initializing 'individual_bill'.

  Now, declare and initialize 'individual_bill_1' by using the <cmath> function
  'floor' with 'individual_bill' as the argument.

  Next, declare and initialize 'individual_bill_2' by using the <cmath> function
  'round' with 'individual_bill' as the argument.

  Finally, declare and initialize 'individual_bill_3' by using the <cmath>
  function 'ceil' with individual_bill as the argument. In order to round
  'individual_bill_3' to the nearest cent, you must 'multiply the argument' of
  the function 'ceil' by 100 and then 'divide the result' of the function by
  '100'.
*/ 