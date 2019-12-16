#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
typedef unsigned int uint;

int main(void)
{
  int random_num {};
  size_t count { 10 }; // count of rand nums to generate 
  uint min { 1 }; // lower bound
  uint max { 6 }; // high bound

  // seed the random num generator 
  // if you don't seed the generator you will get the same sequence of random
  // numbers on every run

  cout << "The RAND_MAX on my system is: " << RAND_MAX << endl;
  srand(time(nullptr)); // null pointer on my system time random number 

  for (size_t i { 1 }; i <= count ; ++i){
    random_num = rand() % (max + min); // generate a random number [min, max]
    cout << "Random number: " << random_num << endl;
  }
 
  return 0;
}

/*

*/ 