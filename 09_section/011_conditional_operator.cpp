#include <iostream>

using namespace std;

int main(void)
{
  /*
    ?:

    (cond_expr) ? expr_1 : expr_2

    - conditional_expression evaluates to a boolean expression 
      - If cond_expr is true then the value of expr1 is returned 
      - If cond_expr is false then the value of expr2 is returned 

    - Similar to if-else construct
    - Ternary operator
    - Very useful when used online 
    - Very easy to abuse !
  */ 	

 	int a { 10 }, b { 20 };
	int score {92};
	int result {};

	result = (a > b) ? a : b;
	cout << "a > b: " << result << endl;

	result = (a < b) ? (b - a) : (a - b);
	cout << "a < b: " << result << endl;

	result = (b != 0) ? (a/b) : 0;
	cout << "b != 0: " << result << endl;

	cout << ((score > 90) ? "Excellent\n" : "Good\n");

  return 0;
}