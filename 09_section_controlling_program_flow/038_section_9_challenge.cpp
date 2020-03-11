#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>

using namespace std;

void display_menu(void)
{
  string line {"--------------------------"};

  cout << "Section 9 Challenge\n" << line << endl;
  cout <<
   "P - Print numbers\n"  <<
   "A - Add a number\n" << 
   "M - Display mean of the numbers\n" <<
   "S - Display the smallest number\n" <<
   "L - Display the largest number\n" << 
   "Q - Quit\n" <<
   line
   << endl;
}

void return_formatted_list( vector<int> vec ){
  if( vec.size() == 0 ){
    cout << "[] - the list is empty." << endl;
  } 
    
  for( int i { 0 } ; i < vec.size() ; ++i ){
    if(i == 0){
      cout << "[";
    }
    cout << vec[i];
    if( ( i >= 0 ) && ( i < vec.size() - 1 ) ){
      cout << " ";
    }
    if( i == vec.size() - 1 ){
      cout << "]" << endl;
    }
  }
}

double return_mean_list( vector<int> vec ){
  int vec_size {};
  double vec_total {};
  double vec_mean {};

  if( vec.size() == 0 ){
    cout << "Unable to calculate the mean - no data." << endl;
  }

  vec_size = vec.size();

  for( auto vec_el : vec ){
    vec_total += vec_el;
  }

  vec_mean = vec_total / vec_size;
  return vec_mean;
}

void return_smallest_num( vector<int> vec ){
  if( vec.size() == 0 ){
    cout << "Unable to determine the smallest number - list is empty" << endl;
  } else {
    cout << "The smallest number is " << *min_element( vec.begin(), vec.end() ) << endl;
  }
}

void return_largest_num( vector<int> vec ){
  if( vec.size() == 0){
    cout << "Unable to determine the largest number - list is empty." << endl;
  } else {
    cout << "Largest number: " << *max_element( vec.begin(), vec.end() );
  }
}

void action_menu(void){
  string user_selection {};
  char first_char {};
  string user_selection_temp {};
  string what_to_do { "Enter your choice:" };
  string line {"\n--------------------------\n"};
  string incorrect_input { "Unknown selection, please try again." };
  vector<int> list {};
  int number_to_add {};
  
  do {
    display_menu();
    cout << what_to_do << endl << "\n> ";
    cin >> user_selection;
    transform( user_selection.begin(), user_selection.end(), user_selection.begin(), ::toupper );
    first_char = user_selection[0];
    if( first_char == 'Q' ){
      cout << "Goodbye..." << endl;
      break;
    }

    switch (first_char){
      case 'P':
        cout << "You chose P - Print Number" << endl;
        return_formatted_list(list);
        break;
      case 'A':
        cout << "You chose A - Add a Number" << endl;
        cout << "What would you like to add?" << endl << "\n> ";
        cin >> number_to_add;
        cout << "Adding " << number_to_add << " to list." << endl;
        cout << "Added " << number_to_add << endl;
        list.push_back(number_to_add);
        cout << "Your list - ";
        return_formatted_list(list);
        cout << endl;
        break;
      case 'M':
        cout << "You chose M - Display mean of the numbers" << endl;
        cout << fixed;
        cout << "Mean of list: " << setprecision(2) << return_mean_list( list ) << endl;
        break;
      case 'S': 
        cout << "You chose S - Display the smallest number" << endl;
        return_smallest_num( list );
        break;
      case 'L':
        cout << "You chose L - Display the largest number" << endl;
        return_largest_num( list );
        break;
      default:
        cout << "\n" << incorrect_input << endl;  
        break;
    }
    
    cout << line << endl;
  } while ( first_char != 'P' || first_char != 'A' || first_char != 'M' || first_char != 'S' || first_char != 'L' || first_char != 'Q');
}

void main_loop(void){
  action_menu();
}

int main(void){
  main_loop();
  return 0;
}

/*
  Section 9 Challenge 

  This challenge is about using a collection (list) of integers and allowing
  the user to select options from a menu to perform operations on the list.

  Your program should display a menu options to the user as follows: 

  P - Print numbers 
  A - Add a number 
  M - Display mean of the numbers 
  S - Display the smallest number 
  L - Display the largest number 
  Q - Quit

  Enter your choice 

  The program should only accept valid choices from the user, both upper and
  lowercase selections should be allowed. - done

  If an illegal choice is made, you should display, "Unknown selection, please
  try again" and the menu options should be displayed again. - done

  If the user enters 'P' or 'p', you should display all of the elements (ints)
  in the list. - done

  If the list is empty you should display "[] - the list is empty" - done

  If the list is not empty then all the list elements should be displayed inside
  square brackets separated by a space.
  For example: [1 2 3 4 5] - done

  If the user enters 'A' or 'a' then you should prompt the user for an integer
  to add to the list which you will add to the list and then display it was
  added. For example,  if the user enters 5 you should display, "5 added". - done

  Duplicate entries are ok. - done

  If the user enters 'M' or 'm' you should calculate the mean or average of the
  elements in the list and display it. If the list is empty you should display
  "Unable to calculate the mean - no data" - done

  If the user entes 'S' or 's' you should display the smallest element in the
  list. For example, if the list contains [2 4 5 1], you should display, "The
  smallest number is 1". If the list is empty you should display, "Unable to
  determine the smallest number - list is empty." - done

  If the user enters 'L' or 'l' you should display the largest element in the
  list. For example, if the list contains [2 4 5 1], you should display, "The
  largest number is 5". If the list is empty you should display, "Unable to
  determine the largest number - list is empty". - done

  If the user enters 'Q' or 'q' then you should display 'Goodbye' and the
  program should terminate. - done




  

  Before you begin, write out the steps you need to take and decide in what
  order they should be done. Think about what loops you should use as well as
  what you will use for your selection logic.

  This exercise can be challenging! 

  HINT: Use a vector!

  Additional functionality if you wish to extend this program.
  - Search for a number in the list and if found display the number of times it
    occurs in the list. 
  - Clearing out the list ( make it empty again )(Hint: the vector class has a
    .clear() method)
  - Don't allow duplicate entries
  - Come up with your own ideas
  */ 