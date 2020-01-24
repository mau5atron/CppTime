#include <iostream>

using namespace std;

int main(void)
{
  // double *double_ptr { nullptr };
  return 0;
}

/*
  Pointers and References - Declaring Pointers

  variable_type *pointer_name;

  int *int_ptr;
  double *double_ptr; - same as: double* double_ptr;
  char *char_ptr;
  string *string_ptr;

  NOTE: it is important to initialize pointer variables

  Initializing pointer variables to 'point nowhere'

    variable_type *pointer_name { nullptr };

    Examples:

    int *int_ptr {};
    double *double_ptr { nullptr };
    char *char_ptr { nullptr };
    string *string_ptr { nullptr };

  If we do not initialize pointers, it will contain garbage data, such as random
  address.

  Initializing pointer variables to 'point nowhere' 
    - Always initialize pointers
    - Uninitialized pointers contain garbage data and can 'point anywhere'
    - Initializing to zero or nullptr (C++11) represents address zero
      - Implies that the pointer is 'pointing nowhere'.
        If you do not initialize a pointer to point to a variable or function
        then you should initialize it to nullptr to make it 'null'.
*/ 