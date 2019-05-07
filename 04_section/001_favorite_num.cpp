#include <iostream> // directive 

int main(void)
{
  int favorite_num; // declare variable
  std::cout << "Enter your favorite number between 1 and 100: \n> ";
  // insertion operator
  std::cin >> favorite_num;
  // extraction operator
  std::cout << "Oh, on jah?" << std::endl; // flush buffers, print next line
  return 0;
}