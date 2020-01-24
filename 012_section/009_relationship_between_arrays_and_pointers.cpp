#include <iostream>

using namespace std;

int main(void)
{
  int scores [] { 100, 96, 89 };

  cout << scores << endl; // address 0x619494
  cout << *scores << endl; // value of first ele in array: 100

  int *score_ptr { scores };
  cout << score_ptr << endl; // address 0x619494
  cout << "score_ptr[0]: " << score_ptr[0] << endl;
  cout << "score_ptr[1]: " << score_ptr[1] << endl;
  cout << "score_ptr[2]: " << score_ptr[2] << endl;
  cout << *score_ptr << endl; // 100
  /*
    This works bc c++ does not have true arrays
    arrays are just the address of the first element 
    in a chunk of memory
  */ 

  // using pointers in expressions 
  int scores_two[] { 100, 95, 89 };
  int *score_ptr_two { scores_two };
  cout << score_ptr_two << endl; // address of first value
  cout << (score_ptr_two + 1) << endl; // +4bytes address of next value
  cout << (score_ptr_two + 2) << endl; // +4bytes address of value after

  // part 3

  int scores_three[] { 50, 75, 95 };
  int *scores_ptr_three { scores_three };
  cout << *scores_ptr_three << endl; // 50
  cout << *(scores_ptr_three + 1) << endl; // 75
  cout << *(scores_ptr_three + 2) << endl; // 95

  return 0;
}

/*
  Relationship Between Arrays and Pointers
    - The value of an array name is the address of the first element in the
      array.
    - The value of a pointer variable is an address. 
    - If the pointer points to the same data type as the array element then the
      pointer and array name can be used interchangeably (almost);

    Example: Refer to above example ^


  Subscript and Offset Notation Equivalence 
    int array_name[] { 1, 2, 3, 4, 5 };
    int *pointer_name { array_name };

    Subscript notation: 
      array_name[index]
      pointer_name[index]

    Offset notation:
      *(array_name + index)
      *(poiner_name + index)
*/ 