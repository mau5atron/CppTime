// Dynamic memory

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int *int_ptr { nullptr }; // gonna hold address of integer
  int_ptr = new int;
  cout << int_ptr << endl; // where address is on heap
  delete int_ptr; // frees up storage

  size_t size { 0 };
  double *temp_ptr { nullptr };

  cout << "How many temps?\n> ";
  cin >> size;

  // use pointer
  temp_ptr = new double[size];
  cout << temp_ptr << endl;
  delete [] temp_ptr;
  return 0;
}

/*
      Memory model
   __________________
  |       Heap       |
  |   (free store)   | <- all dynamic allocation happens here
  |                  |    heap is a free for all
  |                  |    need to release storage when done
  |                  |
  |------------------|
  |       Stack      |
  |  where function  | <- Can't do dynamic allocation on the stack
  |   calls happen   |    already doing dynamic allocation when we 
  |                  |    push and pop activation records 
  |------------------|    but we cant decide how big memory allocation will be 
  |                  |    at runtime
  |                  |
  |                  |
  | global variables |
  |       code       |
  |__________________|

*/ 