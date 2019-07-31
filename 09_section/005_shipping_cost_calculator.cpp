#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  /*
    Shipping Cost Calculator

    Ask the user for package dimensions in inches
    length, width, height - these should be integers 

    All dimensions must be 10 inches or less or we cannot ship it 

    - Base cost $2.50 
    - If package volume is greater than 100 cubic inches there is a 10% 
    surcharge 
    - If package volume is greater than 500 cubic inches there is a 25%
    surcharge
  */ 

  // unsigned int package_dimensions {0};
  unsigned int len, wid, hi { 0 };
  unsigned int volume { 0 };
  unsigned int max_dimension {10};
  double base_cost { 2.50 };
  double tier_1_surcharge { 0.10 };
  double tier_2_surcharge { 0.20 };
  double cost { 0 };
  
  cout << "Please enter the dimensions of your package: " << endl;
  cout << "length: " << endl << "> ";
  cin >> len;
  cout << "width: " << endl << "> ";
  cin >> wid;
  cout << "height: " << endl << "> ";
  cin >> hi;
  cout << 
    "Your package dimensions are: " << 
    "\nlength: " << len <<
    "\nwidth: " << wid <<
    "\nheight: " << hi << 
  endl;
  cout << endl;
  volume = len * wid * hi;
  cout << "Your package volume: " << volume << " cubic in." << endl;

  cout << fixed << setprecision(3); // nice precision :)
  cout << "Base shipping cost: " << base_cost << endl;
  if( len > max_dimension || wid > max_dimension || hi > max_dimension ){
    cout << "Sorry, your package dimensions must be less than 10 inches." << endl;
    return 1;
  }

  if(volume > 100 && volume < 500){
    cost += (base_cost + (base_cost * 0.10));
  } else if (volume > 500){
    cost += (base_cost + (base_cost * 0.25));
  } else {
    cost += base_cost;
  }

  cout << "Your total shipping cost is: $" << cost << endl;
  return 0;
}