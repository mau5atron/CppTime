#include <iostream> 
#include <iomanip> 
#include <vector>

using namespace std;

int main(void)
{ 
  /*
    Accessing vector elements: 

    vector_name [element_index]

    test_scores [1]
  */ 

  vector <int> test_scores { 100, 95, 99, 87, 88 };
  int count {0};
  int count_2 {0};
  for( const int &vec_el : test_scores ){
    cout << "value of element index " << count++ << ": " << vec_el << endl;
  }

  /*
    Since a Vector is an object, we can use vector specific functions (methods):

    vector_name.at(element_index)
    test_scores.at(1)

    *****************************************************************************
    
    When do Vectors grow as needed? 

    vectors have a method: 
    .push_back(element)

    Note: 
    - All vector elements must be of the same type, 
    - The element you add must be of the same type as all the other vector elements in
      the vector
  */ 

  test_scores.push_back(23); // pushes 23 to the end of the vector
  test_scores.push_back(45); // same thing with 45
  cout << endl;
  for( const int &vec_el : test_scores ){
    cout << "value of element index " << count_2++ << ": " << vec_el << endl;
  }

  /*
    What if you are out of bounds? 
    - Arrays never do bounds checking 
    - Many vector methods provide bounds checking 
    - An exception and error message is generated 

    example: 

    vector <int> test_scores { 100, 95 };

    cin >> test_scores.at(5);

    // will throw error because element at index 5 does not exist 
  */ 

  return 0;
}