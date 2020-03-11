#include <iostream>

using namespace std;

int main(void)
{
  return 0;
}

/*
  Default Argument Values: 
  - When a function is called , all arguments must be supplied.
  - Sometimes some of the arguments must have the same values most of the time.
  - We can tell the compiler to use default values if the arguments are not
    supplied.
  - Default values can be in the prototype or definition, not both 
    - best practive - in the prototype 
    - must appear at the tail end of the parameter list 
  - Can have multiple default values
    - must appear consecutively at the tail end of the parameter list
  
  ------------------------------------------------------
  Example - No default parameters
  double calc_cost(double base_cost, double tax_rate);
  double calc_cost(double base_cost, double tax_rate){
    return base_cost += (base_cost * tax_rate);
  }

  int main(void)
  {
    double cost { 0 };
    cost = calc_cost(100.0, 0.06);
    return 0;
  }

  -----------------------------------------------------
  Example - With default parameters 

  double calc_cost(double base_cost, double tax_rate = 0.06);

  double calc_cost(double base_cost, double tax_rate){
    return base_cost += (base_cost * tax_rate);
  }

  int main(void)
  {
    double cost {0};
    cost = calc_cost( 200.0 ); // will use the default tax
    cost = calc_cost( 100.0, 0.08 ) // will use 0.08 not the default
    return 0;
  }


*/ 