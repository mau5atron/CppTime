#include <iostream> 
#include <iomanip> 

using namespace std;

int main(void)
{
  /*
    What is a Vector? 

    - Container in the C++ Standard Template Library 
    - An array that can grow and shrink in size at execution time *****
    - Provides similar semantics and syntax as arrays
    - Very efficient 
    - Can provide bounds checking 
    - Can use lots of cool functions like sort, reverse, find and more

    Declaring a Vector: 

    #include <vector>
    using namespace std;

    vector <char> vowels; // vector or collection of characters
    vector <int> test_scores; // vector or collection of integers 

    Other ways to declare vectors: 

    vector <char> vowels (5); 
      {
        vector containing 5 characters, without
        providing an initializer list, instead using "constructor initialization
        syntax", this tells the compiler that you want 5 characters
      }

    vector <int> test_scores(10); 
      {
        declaring a vector of integers named test_scores

        unlike arrays, this vector will automatically set these 10 integers to 0.
      }

    *****************************************************************************
    
    Initializing Vectors 

    vector <char> vowels { 'a', 'e', 'i', 'o', 'u' };

    vector <int> test_scores { 100, 98, 89, 85, 93 };

    vector <double> high_temps (365, 80.0)
    - 365 is the initial size of the vector, 80.0 what we are intializing all
      365 doubles 
    
    *****************************************************************************
    
    Characteristics of Vectors 

    - Dynamic size 
    - Elements are all the same type 
    - Stored contiguously in memory 
    - Individual elements can be accessed by their position or index 

    - [] - no checking to see if you are out of bounds 
    - Provides many useful functions that do bounds checks

    - Elements initialized to zero 
    - Very efficient 
    - Iteration (looping) is often used to process
  */ 
  return 0;
}