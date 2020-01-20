#include <iostream>

using namespace std;

int main(void)
{
	return 0;
}


/*
	Recursive functions: 
		- A recursive function is a function that calls itself 
			- Either directly or indirectly through another function 
		- Recursive problem solving 
			- Base case
			- Divide the rest of problem into subproblem and do recursive call 
		- There are many problems that lend themselves to recursive solutions
		- Mathematic - factorial, fibonacci, fractals
		- Searching and sorting - binary search, search trees, .....
		
	Example - Factorial:
		0! = 1
		n! = n * (n - 1)!
		
		- Base case: 
			- Factorial(0) = 1
		- Recursive case:
			- Factorial(n) = n * factorial(n - 1)
			
			
		unsigned long long factorial(unsigned long long n){
			if(n == 0){
				return 1;						// base case
			}
			return n * factorial(n - 1); // recursive case
		}
		
		int main(void)
		{
			cout << factorial(8) << endl; // 40320
			return 0;
		}
		
	Example - Fibonacci
		Fib(0) = 0
		Fib(1) = 1
		Fib(n) = Fib(n - 1) + Fib(n - 2)
		
		- Base case: 
			- Fib(0) = 0
			- Fib(1) = 1
		- Recursive case: 
			- Fib(n) = Fib(n - 1) + Fib(n - 2)
			
	Important notes:
		- If recursion does not eventually stop, you will have infinite
		recursion
		- Recursion can be resource intensive
		- Remember the base case(s)
			- It terminates the recursion 
		- Only use recursive solutions when it makes sense 
		- Anything that can be done recursively can be done iteratively 
			- Stack overflow error
*/