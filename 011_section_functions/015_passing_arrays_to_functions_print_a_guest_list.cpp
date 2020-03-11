#include <iostream>
#include <string>
#include <typeinfo>
 using namespace std;

string print_guest_list( string guests[], size_t guest_list_size );
void clear_guest_list( string guests[], size_t guest_list_size );

string print_guest_list( string guests[], size_t guest_list_size ){
  for ( size_t i { 0 } ; i < guest_list_size ; i++ ) {
    cout << guests[i] << endl;
  }
  return typeid (guests).name(); // resolves error with return type
}

void clear_guest_list( string guests[], size_t guest_lize_size ){
  for ( size_t i { 0 } ; i < guest_lize_size ; i++ ) {
    guests[i] = " ";
  }
}


int main(void)
{
  // given array in problem 
  string guest_list[] { "Larry", "Moe", "Curly" };
  size_t guest_list_size { 3 };
  cout << "Guest list" << print_guest_list( guest_list, guest_list_size ) << endl;
  clear_guest_list( guest_list, guest_list_size );
  cout << "Guest list" << print_guest_list( guest_list, guest_list_size ) << endl;
  return 0;
}

/*
  In this exercise you will create a program that will be used to 'print'
  the 'guest list' to an event and then 'clear' the 'guest_list' when 
  the event is over. - done 

  Begin by completing the function prototypes 'print_guest_list' and
  'clear_guest_list' which are both 'passed an array of std::strings and size_t
  value'. - done
  
  Now that the function prototypes have been declared, at the bottom of the file
  define both functions. - done

  Both the 'print_guest_list' and 'clear_guest_list' functions will be passed
  the array argument 'guest_list' and the size_t argument 'guest_list_size'
  which have both been provided to you. - done

  The 'print_guest_list' function should print the values contained within the
  'guest_list' from left to right with each element being printed on a new line.
  Use a 'for loop' to iterate through the array. - done
  
  The 'clear_guest_list' function should replace each element of the array with 
  the string value " ", a single space. Use a for loop to iterate through the array.

  Now, from the function body of 'event_guest_list', make the following function
  calls in this order: 
  
  - 'print_guest_list'
  - 'clear_guest_list'
  - 'print_guest_list'
  
  and passing the 'array argument' 'guest_list' and the 'size_t argument' 
  'guest_list_size' with each function call.
*/ 