#include <iostream>
#include <functional>

using namespace std;

double calculate_area(double width, double height)
{  
  // double width, height {};
  double area {};
  area = width * height;
  return area;
}

int main(void){
  double width {}, height {};
  char selection {};

  do {
    cout << "Enter width: " << "\n> ";
    cin >> width;
    cout << "Enter height: " << "\n> ";
    cin >> height;

    double area = calculate_area(width, height);
    cout << "The area is: " << area << endl;

    cout << "Calculate another? (Y/N): " << "\n> ";
    cin >> selection;
    selection = toupper(selection);
    cout << endl;
    
  } while (selection == 'Y');

  return 0;
}
