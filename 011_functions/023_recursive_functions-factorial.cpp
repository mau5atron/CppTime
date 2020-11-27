#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n){
	if(n == 0){
		return 1;
	}
	
	return n * factorial(n - 1); // calling itself
}

int main(void)
{
	cout << factorial(8) << endl;
	return 0;
}