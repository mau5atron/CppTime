#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n){
	if( n <= 1 ){
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
	cout << fibonacci(30) << endl; // 832040
	return 0;
}