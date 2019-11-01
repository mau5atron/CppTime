#include <iostream>

using namespace std;

int main(void)
{
  // multiplication table - 10 x 10 table
  for(int num1 { 1 } ; num1 <= 10 ; ++num1 ){
    for(int num2 { 1 } ; num2 <= 10 ; ++num2){
      cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    }
    cout << "-----------------------" << endl;
  }

  cout << "***********************************" << endl;

  // grid - 2D Arrays - set all elements to 1000
  // setting 5 rows and 3 columns to 1000
  /*
         0      ` 1        2 
    0  [0][0]  [0][1]   [0][2]
    1  [1][0]  [1][1]   [1][2]
    2  [2][0]  [2][1]   [2][2]
    3   etc...
    4
    
  */
  int grid[5][3] {};

  for( int row { 0 } ; row < 5 ; ++row ){
    for( int col { 0 } ; col < 3 ; ++col){
      grid[row][col] = 1000; // setting all elements to 1000
    }
  }

  // now display the grid
  for( int row { 0 } ; row < 5 ; ++row ){
    for( int col { 0 } ; col < 3 ; ++col){
      cout << grid[row][col] << " ";
    }
    cout << endl;
  }
  return 0;
}

/*
  - Loop nested within another loop
  - Can be as many as levels deep as the program needs 
  - Very useful with multidimensional data structures
  - Outer loop vs. inner loop
*/ 