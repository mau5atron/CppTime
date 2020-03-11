#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> values { 1, 2, -1, 3, -1, -99, 7, 8, 10 };
  for( auto vec_el : values )
  {
    if(vec_el == -99)
    {
      // break from the loop
      break;
    } 
    else if(vec_el == -1)
    {
      // continue to next iteration, does not print number
      continue;
    }
    else 
    {
      cout << "vec_el: " << vec_el << endl;
    }
  }
  return 0;
}

/*
  continue: 
  - No further statements in the body of the loop are executed
  - Control immediately goes directly to the beginning of the loop for the next
    iteration 
  
  break:
  - No further statements in the body of the loop are executed 
  - Loop is immediately terminated 
  - Control immediately goes to the statement following the loop construct
*/ 