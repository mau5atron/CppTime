#include <iostream>

using namespace std;

int *create_array( size_t size, int init_value = 0 ){
  int *new_storage { nullptr };
  new_storage = new int [size];

  for (size_t i { 0 } ; i < size ; ++i ){
    *(new_storage + i) = init_value;
  }
  return new_storage;
} 

void display( const int *const array, size_t size ){
  for ( size_t i { 0 } ; i < size ; ++i ){
    cout << array[i] << " ";
  }
  cout << endl;
}

int main(void)
{
  int *my_array { nullptr };
  size_t size;
  int init_value {};

  cout << "\nHow many integers would you like to allocate into an array?\n> ";
  cin >> size;
  cout << "\nWhat value would you like the values to be initialized to?\n> ";
  cin >> init_value;

  my_array = create_array( size, init_value);
  cout << "\n-----------------------" << endl;

  display(my_array, size);
  delete [] my_array; // free up the storage
  return 0;
}