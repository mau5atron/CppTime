#include <iostream>
// functions definitions 
// Area of a circle and volume of a cylinder
using namespace std;
const double pi { 3.14159 };

double calc_area_circle(double radius){
  return (pi * (radius * radius));
}

void area_circle(){
  double radius {};
  cout << "Enter the radius of the circle: \n> ";
  cin >> radius;
  cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_volume_cylinder(double rad, double height){
  return (calc_area_circle(rad) * height);
}

void volume_cylinder(){
  double radius {};
  double height {};
  cout << "\nEnter the radius of the cylinder: \n> ";
  cin >> radius;
  cout << "\nEnter the height of the cylinder: \n> ";
  cin >> height;

  cout 
  << "The volume of a cylinder with radius " 
  << radius 
  << " and height " 
  << height 
  << " is " 
  << calc_volume_cylinder(radius, height) 
  << endl;
}

int main(void)
{

  area_circle();
  volume_cylinder();

  return 0;
}

/*
  Name:
    - The name of the function 
    - Sames rules as for variables
    - Should be meaningful
    - Usually a verb or verb phrase
  Parameter list: 
    - The variables passed into the function
    - Their types must be specified 
  Return type: 
    - The type of data that is returned from the function
  Body: 
    - The statements that are executed when the function is called 
    - In curly braces {}

  Example with no parameters: 
    - return type     - parameters
    int function_name(){
      statement(s);
      - body
      return 0; // return type
    }

  
*/