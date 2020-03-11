#include <iostream>
#include <string>

using namespace std;

void allocating_storage(){
  // using new to allocate storage
  cout << "Allocating storage: " << endl;
  int *int_ptr { nullptr };
  int_ptr = new int; // allocate an integer on the heap
  cout << "int_ptr: " << int_ptr << endl; // 0x2747f28 .... some address.
  cout << "*int_ptr: " << *int_ptr << endl; // some garbage value
  *int_ptr = 100; // assigning 100 to pointer
  cout << "*int_ptr: " << *int_ptr << endl; // 100
}

void deallocating_storage(){
  cout << "Deallocating storage: " << endl;
  int *int_ptr { nullptr };
  int_ptr = new int; // allocate an integer on the heap
  cout << "int_ptr: " << int_ptr << endl;
  cout << "*int_ptr: " << *int_ptr << endl;
  *int_ptr = 200;
  cout << "Assigning 200 to *int_ptr...\n*int_ptr: " << *int_ptr << endl;
  delete *int_ptr; // frees the allocated storage
  cout << "Clearing... \nint_ptr: " << int_ptr << "\n*int_ptr: " << *int_ptr << endl;
}

void allocating_storage_new_with_brackets_for_array(){
  cout << "Using new[] to allocate storage for an array: " << endl;
  int *array_ptr { nullptr };
  int size {};

  cout << "How big do you want the array? ";
  cin >> size;
  array_ptr = new int[size]; // allocate array on the heap
  // we can access the array here

  // deallocating memory from dynamic array pointer
  // ......
  delete [] array_ptr; // free allocated storage
}

int main(void)
{
  string space { "------------------------------" };
  // Example 1: Allocating storage
  allocating_storage();
  cout << space << endl;
  deallocating_storage();
  return 0;
}

/*
  Dynamic Memory Allocation:
  Allocating storage from the heap at runtime

  - We often don't know how much storage we need until we need it 
  - We can allocate storage for a variable at run time
  - Recall C++ arrays
    - We had to explicitly provide the size and it was fixed
    - But vectors grow and shrink dynamically 
  - We can use pointers to access newly allocated heap storage 

  How to allocate storage - Dynamic Memory Allocation:
    - Refer to example 1 above in main^
*/ 