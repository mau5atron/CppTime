#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<double> temps { 87.2, 77.1, 80.0, 72.5 };
  double average_temp {};
  double running_sum {};
  
  // detects temps is double with auto
  // auto detects the type
  for( auto temp : temps ){
    running_sum += temp;
  }

  /*
    another way to do the same loop above 
    // intialize size
    unsigned int size {0};

    for( auto temp: temps ){
      running_sum += temp;
      size++;
    }

    average_temp = (running_sum / size);
  */ 

  average_temp = (running_sum / temps.size());
  cout << "Average temperatures: " << average_temp << endl;
  return 0;
}